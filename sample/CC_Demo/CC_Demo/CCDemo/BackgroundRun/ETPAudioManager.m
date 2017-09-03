/*
 * Copyright 2015 Huawei Technologies Co., Ltd. All rights reserved.
 * eSDK is licensed under the Apache License, Version 2.0 ^(the "License"^);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *      http://www.apache.org/licenses/LICENSE-2.0
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#import "ETPAudioManager.h"
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

@interface ETPAudioManager ()
{
    
}
@property (nonatomic, strong) AVAudioSession *audioSession;
@end

@implementation ETPAudioManager

- (AVAudioSession *)audioSession
{
    if (_audioSession == nil)
    {
        _audioSession = [AVAudioSession sharedInstance];
        [_audioSession setActive:YES error:NULL];
    }
    return _audioSession;
}

+ (ETPAudioManager *)sharedInstance
{
    static ETPAudioManager *instance;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[ETPAudioManager alloc] init];
    });
    return instance;
}

- (NSString *)OSStatusToStr:(OSStatus)st
{
    switch (st) {
        case kAudioSessionNotInitialized:
            return @"kAudioSessionNotInitialized";
        case kAudioSessionAlreadyInitialized:
            return @"kAudioSessionAlreadyInitialized";
        case kAudioSessionInitializationError:
            return @"kAudioSessionInitializationError";
        case kAudioSessionUnsupportedPropertyError:
            return @"kAudioSessionUnsupportedPropertyError";
        case kAudioSessionBadPropertySizeError:
            return @"kAudioSessionBadPropertySizeError";
        case kAudioSessionNotActiveError:
            return @"kAudioSessionNotActiveError";
        case kAudioServicesNoHardwareError:
            return @"kAudioServicesNoHardwareError";
        case kAudioSessionNoCategorySet:
            return @"kAudioServicesNoHardwareError";
        case kAudioSessionIncompatibleCategory:
            return @"kAudioSessionIncompatibleCategory";
        case kAudioSessionUnspecifiedError:
            return @"kAudioSessionUnspecifiedError";
        default:
            return @"unknown error";
    }
    
}

- (void)dealWithOthers
{
    // deal with others
    UInt32 allowMixWithOthers = 1;
    OSStatus stat = 0;
    stat = AudioSessionSetProperty(
                                   kAudioSessionProperty_OverrideCategoryMixWithOthers,
                                   sizeof(allowMixWithOthers),
                                   &allowMixWithOthers
                                   );
    if (stat != kAudioSessionNoError)
    {
        NSString *statStr = [self OSStatusToStr:stat];
        NSLog(@"Audio Session override MixWithOthers error: %@", statStr);
    }
}

- (void)setAudioCategoryPlayback
{
    NSLog(@"AudioSession Log:setAudioCategoryPlayback");

    NSError *error = nil;
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
    {
        if (![self.audioSession setCategory:AVAudioSessionCategoryPlayback
                                withOptions:AVAudioSessionCategoryOptionMixWithOthers
                                      error:&error])
        {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
    }
    else
    {
        if (![self.audioSession setCategory:AVAudioSessionCategoryPlayback error:&error])
        {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
        // deal with others
        [self dealWithOthers];
    }
    [self.audioSession setActive:YES error:NULL];
}

- (void)setAudioCategoryPlayAndRecord
{
    NSLog(@"AudioSession Log:setAudioCategoryPlayAndRecord");
    NSError *error = nil;
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
    {
        if (![self.audioSession setCategory:AVAudioSessionCategoryPlayAndRecord
                                withOptions:AVAudioSessionCategoryOptionAllowBluetooth | AVAudioSessionCategoryOptionMixWithOthers
                                      error:&error])
        {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
    }
    else
    {
        if (![self.audioSession setCategory:AVAudioSessionCategoryPlayAndRecord error:&error])
        {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
        OSStatus stat = 0;
        // enable bluetooth in iOS5
        UInt32 allowBluetoothInput = 1;
        
        stat = AudioSessionSetProperty (
                                        kAudioSessionProperty_OverrideCategoryEnableBluetoothInput,
                                        sizeof (allowBluetoothInput),
                                        &allowBluetoothInput
                                        );
        if (stat != kAudioSessionNoError)
        {
            // error occured
            NSString *statStr = [self OSStatusToStr:stat];
            NSLog(@"Audio Session enable bluetooth error: %@", statStr);
        }
        
        // deal with others
        [self dealWithOthers];
    }
    [self.audioSession setActive:YES error:NULL];
}

- (void)setAudioRouteOverride:(UInt32)audioPort
{
    NSLog(@"AudioSession Log:setAudioRouteOverride,%u",(unsigned int)audioPort);
 
    NSError *error = nil;
    BOOL success = '\0';
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)
    {
        if (audioPort == kAudioSessionOverrideAudioRoute_None)
        {
            success = [self.audioSession overrideOutputAudioPort:AVAudioSessionPortOverrideNone error:&error];
        }
        else if (audioPort == kAudioSessionOverrideAudioRoute_Speaker)
        {
            success = [self.audioSession overrideOutputAudioPort:AVAudioSessionPortOverrideSpeaker error:&error];
        }
        if (!success)
        {
            NSLog(@"Audio Session override output audio port error: %@", [error localizedDescription]);
        }
    }
    else
    {
        // AudioSessionSetProperty() is deprecated in iOS7
        OSStatus stat = 0;
        UInt32 audioRouteOverride = audioPort;
        stat = AudioSessionSetProperty (kAudioSessionProperty_OverrideAudioRoute,
                                        sizeof (audioRouteOverride),
                                        &audioRouteOverride);
        if (stat != kAudioSessionNoError)
        {
            NSString *statStr = [self OSStatusToStr:stat];
            NSLog(@"Audio Session override route error: %@", statStr);
        }
    }
    
    [self.audioSession setActive:YES error:NULL];
}

- (void)setAudioRouteNone
{
    [self setAudioRouteOverride:kAudioSessionOverrideAudioRoute_None];// 听筒
}

- (void)setAudioRouteSpeaker
{
    [self setAudioRouteOverride:kAudioSessionOverrideAudioRoute_Speaker];//扬声器
}

- (void)setAudioMixWithOthers
{
    NSError *error = nil;
    BOOL success;
    if ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0) {
        success = [self.audioSession setCategory:AVAudioSessionCategoryPlayback
                                     withOptions:AVAudioSessionCategoryOptionMixWithOthers
                                           error:&error];
        if (!success) {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
    } else {
        success = [self.audioSession setCategory:AVAudioSessionCategoryPlayback error:&error];
        if (!success) {
            NSLog(@"Audio Session set category error: %@", [error localizedDescription]);
        }
        
        [self dealWithOthers];
    }
    [self.audioSession setActive:YES error:NULL];
}

- (void)setAudioModeVoiceChat
{
	if ([self isSpeakerOrReceiver])
	{
		[self setAudioRouteSpeaker];
	}
	else
	{
		[self setAudioRouteNone];
	}
}

- (BOOL)isHeadphone
{
    UInt32 size = sizeof(CFStringRef);
    CFStringRef route = NULL;
    OSStatus result = AudioSessionGetProperty(kAudioSessionProperty_AudioRoute, &size, &route);
    BOOL hasHeadset = NO;
    if (result == noErr)
    {
        NSLog(@" audio route %@", route);
        NSString* routeStr = (__bridge NSString*)route;
        NSRange headphoneRange = [routeStr rangeOfString : @"Headphone"];
        NSRange headsetRange = [routeStr rangeOfString : @"Headset"];
        if (headphoneRange.location != NSNotFound)
        {
            hasHeadset = YES;
        }
        else if(headsetRange.location != NSNotFound)
        {
            hasHeadset = YES;
        }
    }
    return hasHeadset;
}

- (BOOL)isSpeakerOrReceiver
{
	UInt32 size = sizeof(CFStringRef);
	CFStringRef route = NULL;
	OSStatus result = AudioSessionGetProperty(kAudioSessionProperty_AudioRoute, &size, &route);
	if (result == noErr)
	{
		NSLog(@"audio route %@", route);
		NSString *route2 = (__bridge NSString *)route;
		if ([route2 isEqualToString:@"ReceiverAndMicrophone"])//听筒
		{
			return NO;
		}
		else if ([route2 isEqualToString:@"SpeakerAndMicrophone"])//扬声器
		{
			return YES;
		}
	}
	else
	{
		NSLog(@"AudioSessionGetProperty errorCode: %ld", (long)result);
	}

	return NO;
}

- (BOOL)isBluetoothDeviceConnected
{
    // check the audio route
    UInt32 size = sizeof(CFStringRef);
    CFStringRef route = NULL;
    OSStatus result = AudioSessionGetProperty(kAudioSessionProperty_AudioRoute, &size, &route);
    if (result == noErr)
    {
        NSLog(@"audio route = %@", route);
    }
    else
    {
        NSLog(@"AudioSessionGetProperty errorCode: %ld", (long)result);
    }
    NSString *routeString = (__bridge_transfer NSString *)route;
    NSRange range = [routeString rangeOfString:@"BT"];
    return (range.location != NSNotFound);
}

- (void)setAudioModeVideoChat
{
    if (![self isBluetoothDeviceConnected]) {
        if ([self isHeadphone]) {
            [self setAudioRouteNone];
            return;
        }

        [self setAudioRouteSpeaker];
    }
}

- (void)configAudioRouteWhenCallEstablished
{
    //通话建立时先切为扬声器，再切听筒，规避iphone5s回声问题
   // [[TESDK callService] setAudioRoute:AUDIO_ROUTE_TYPE_REPRODUCER];
    //[[TESDK callService] setAudioRoute:AUDIO_ROUTE_TYPE_HEADPHONES];
}

- (BOOL)checkRecordPermission
{
    __block BOOL canRecord = YES;
    if ([self.audioSession respondsToSelector:@selector(requestRecordPermission:)]) {
        [self.audioSession performSelector:@selector(requestRecordPermission:) withObject:^(BOOL granted) {
            if (granted) {
                // Microphone enabled code
                canRecord = YES;
            }
            else {
                // Microphone disabled code
                canRecord = NO;
                // We're in a background thread here, so jump to main thread to do UI work.
                dispatch_async(dispatch_get_main_queue(), ^{
                    [[[UIAlertView alloc] initWithTitle:NSLocalizedString(@"Microphone Access Denied", @"")
                                                 message:NSLocalizedString(@"This app requires access to your device's Microphone.\n\nPlease enable Microphone access for this app in Settings / Privacy / Microphone", @"")
                                                delegate:nil
                                      cancelButtonTitle:NSLocalizedString(@"OK", @"")
                                       otherButtonTitles:nil] show];
                });
            }
        }];
    }
    return canRecord;
}

@end
