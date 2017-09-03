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

#import "TEBackgroundRunService.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>
#import <UIKit/UIKit.h>
#import "TEMDevice.h"


#define BACKGROUND_RUN_SUPPORT  // 此开关已开启


// background.mp3
#define BackgroundPlayAudioResource @"background"
#define BackgroundPlayAudioType @"mp3"

// 根据苹果应用后台运行规律所制定的值
#define CIRCLE_TIME_INTERVAL       (500)  // 此值应小于600(即10分钟)
#define CIRCLE_TIME_INTERVAL_OS7_0 (150)  // 此值应小于180(即3分钟)


@interface TEBackgroundRunService () <AVAudioPlayerDelegate>
@property (nonatomic) UIBackgroundTaskIdentifier backgroundTaskIdentifier;
@property (nonatomic, strong) AVAudioPlayer *audioPlayer;
@property (nonatomic, strong) NSTimer *restTimer;
@property (nonatomic, strong) UILocalNotification *localNotify;
@property (nonatomic, readwrite) NSInteger commingCallMissCount;


#if __IPHONE_8_0
//@property (nonatomic, strong) CustomAlertView_8 *customAlertViewController;
#endif


- (BOOL)isNeedBackgroundRunService;

- (void)startPlay;
- (void)stopPlay;
- (void)schedulePlay;

@end

static TEBackgroundRunService *gBackgroundRunService;

@implementation TEBackgroundRunService
@synthesize backgroundTaskIdentifier;
@synthesize audioPlayer;
@synthesize restTimer;
@synthesize localNotify;
@synthesize commingCallMissCount;

- (id) init
{
	if (self = [super init]) 
    {
        backgroundTaskIdentifier = UIBackgroundTaskInvalid;
        

	}
	
	return self;
}

- (void)dealloc
{
    [self stopBackgroundTask];
	if (self.audioPlayer
        && self.audioPlayer.playing==NO)
    {
        self.audioPlayer = nil;
    }
}


#pragma mark -
#pragma mark --- --- --- --- ---

// 获取BackgroundRunService单例
+ (TEBackgroundRunService *)shareInstance
{
    if (gBackgroundRunService == nil) 
    {
        gBackgroundRunService = [[TEBackgroundRunService alloc] init];
    }
    
    return gBackgroundRunService;
}

// 启动后台的任务和活动
- (void)startBackgroundTaskAndActivity:(BOOL)bKeepMoreTime
{
    NSLog(@"startBackgroundTaskAndActivity");
	if ([self isMultitaskingSupported]
        && backgroundTaskIdentifier == UIBackgroundTaskInvalid)
    {
        __weak TEBackgroundRunService *blockSelf = self;
		backgroundTaskIdentifier = [[UIApplication sharedApplication] beginBackgroundTaskWithExpirationHandler:^{
			dispatch_async(dispatch_get_main_queue(), ^{
                NSLog(@"backgroud execution too long to continue, system will excute expiration handle!\n --- application exit ---");
                [blockSelf stopBackgroundTask];
            });
		}];
	}
    
#ifdef BACKGROUND_RUN_SUPPORT
    if (bKeepMoreTime)
    {
        [self schedulePlay];
    }
#endif
}

- (void)startBackgroundActivity
{
    if (self.restTimer)
    {
        NSLog(@"restTimer_invalidate");
        [self.restTimer invalidate];
        self.restTimer = nil;
    }
    
    [self startPlay];
}

// 停止后台的任务和活动
- (void)stopBackgroundTaskAndActivity
{
#ifdef BACKGROUND_RUN_SUPPORT
    [self stopBackgroundActivity];
#endif
    
    [self stopBackgroundTask];
}

// 停止后台的任务
- (void)stopBackgroundTask
{
    if (backgroundTaskIdentifier != UIBackgroundTaskInvalid)
    {
        [[UIApplication sharedApplication] endBackgroundTask:backgroundTaskIdentifier];
        backgroundTaskIdentifier = UIBackgroundTaskInvalid;
    }
}

// 停止后台的活动
- (void)stopBackgroundActivity
{
    [self stopPlay];
    
    self.audioPlayer = nil;
    
    if (self.restTimer)
    {
        NSLog(@"restTimer_invalidate");
        [self.restTimer invalidate];
        self.restTimer = nil;
    }
}

// 发送来电的后台提醒
- (void)sendBackgroundNotifyWithCommingCall:(NSString *)contactName withNumber:(NSString *)callNumber
{
    if ([self isNeedBackgroundRunService])
    {
        [self closeBackgroundNotifyWithCommingCall];
		self.commingCallMissCount += 1;
		
        self.localNotify = [[UILocalNotification alloc] init];
        
        localNotify.fireDate = [NSDate dateWithTimeIntervalSinceNow:0];
        localNotify.timeZone = [NSTimeZone defaultTimeZone];
        
        NSString *fromName;
        if (nil == contactName
            || ![contactName isKindOfClass:[NSString class]]
            || [contactName length] == 0)
        {
            fromName = callNumber;
        }
        else
        {
            fromName = contactName;
        }
        
        localNotify.alertBody  = [NSString stringWithFormat:NSLocalizedString(@"tp_call_background", nil),fromName];
        
        localNotify.alertAction = NSLocalizedString(@"tp_call_ViewDetails", nil);
        localNotify.soundName = UILocalNotificationDefaultSoundName;
        localNotify.applicationIconBadgeNumber = self.commingCallMissCount;
        
        if ([UIApplication sharedApplication].enabledRemoteNotificationTypes == UIRemoteNotificationTypeNone)
        {
            [[UIApplication sharedApplication] registerForRemoteNotificationTypes:UIRemoteNotificationTypeSound|UIRemoteNotificationTypeAlert];
            if ([TEMDevice deviceVersion] >= 8.0)
            {
#ifdef __IPHONE_8_0
            [[UIApplication sharedApplication] registerForRemoteNotifications];
#endif
            }
        }
        
        [[UIApplication sharedApplication] scheduleLocalNotification:self.localNotify];
        if ([TEMDevice deviceVersion] >= 8.0)
        {
#ifdef __IPHONE_8_0
        [[UIApplication sharedApplication] registerUserNotificationSettings:[UIUserNotificationSettings settingsForTypes: UIUserNotificationTypeSound | UIUserNotificationTypeAlert categories:nil]];
#endif
        }
    }
}
// 关闭来电的后台提醒
- (void)closeBackgroundNotifyWithCommingCall
{
    NSLog(@"self.commingCallMissCount = %ld",(long)self.commingCallMissCount);
    if (self.localNotify)
    {
        //[[UIApplication sharedApplication] cancelLocalNotification:self.localNotify];
        
		//self.commingCallMissCount += 1;
        
        self.localNotify = nil;
    }
}

- (void)dealBackgroundNotifyData:(BOOL)bWillAlert
{
    NSLog(@"self.commingCallMissCount = %ld",(long)self.commingCallMissCount);
    if ([UIApplication sharedApplication].applicationIconBadgeNumber != 0)
    {
        [[UIApplication sharedApplication] setApplicationIconBadgeNumber:0];
    }
    
   /* self.localNotify = nil;
    BOOL callNotExist = ![[TESDK callService] ifCallSessionExist];
    if (0 < self.commingCallMissCount && callNotExist)
    {
        if (bWillAlert)
        {
            NSString *msg = nil;
            switch (self.commingCallMissCount)
            {
                case 1:
                    msg = NSLocalizedString(@"tp_call_YouHaveMissedCall", @" ");
                    break;
                case 2:
                    msg = NSLocalizedString(@"tp_call_YouHaveMissedCall", @" ");
                    break;
                    
                default:
                    msg = NSLocalizedString(@"tp_call_YouHaveMissedCall", @" ");
                    break;
            }
            if ([TEMDevice deviceVersion] >= 8.0)
            {
#ifdef __IPHONE_8_0
//                CustomAlertView_8 *customAlert = [[CustomAlertView_8 alloc]initWithTitle:NSLocalizedString(@"remind", nil) message:msg style:UIAlertControllerStyleAlert];
//                [customAlert addAlertAction:NSLocalizedString(@"OK", nil) handler:nil];
//                self.customAlertViewController = customAlert;
//                [[[[UIApplication sharedApplication] keyWindow] rootViewController] presentViewController:customAlert.alertController animated:YES completion:nil];
#endif
            }
            else
            {
//                CustomAlertView *alertView = [[CustomAlertView alloc] initWithTitle:NSLocalizedString(@"remind",nil) message:msg delegate:nil cancelButtonTitle:NSLocalizedString(@"OK", @"OK") otherButtonTitles:nil];
//                [alertView showWithDuration:20.0];
            }
            
        }
        
        self.commingCallMissCount = 0;
    }*/
}

#pragma mark -
#pragma mark --- --- --- --- ---

- (BOOL)isMultitaskingSupported
{
	BOOL multiTaskingSupported = NO;
	if ([[UIDevice currentDevice] respondsToSelector:@selector(isMultitaskingSupported)])
    {
		multiTaskingSupported = [[UIDevice currentDevice] isMultitaskingSupported];
	}
	return multiTaskingSupported;
}

- (BOOL)isNeedBackgroundRunService
{
    NSLog(@"applicationState = %ld",(long)[UIApplication sharedApplication].applicationState);
    
    return ([UIApplication sharedApplication].applicationState != UIApplicationStateActive);
}

-(void)startPlay
{
    [self stopPlay];
    
    if ([self isNeedBackgroundRunService])
    {
        NSString *musicPath = [[NSBundle mainBundle] pathForResource:BackgroundPlayAudioResource ofType:BackgroundPlayAudioType];
        if (!musicPath) {
            return;
        }
        NSURL *url = [[NSURL alloc] initFileURLWithPath:musicPath];
        
        if (self.audioPlayer == nil)
        {
            NSError *error = nil;
            AVAudioPlayer *player = [[AVAudioPlayer alloc] initWithContentsOfURL:url error:&error];
            self.audioPlayer = player;
            
            self.audioPlayer.delegate = self;
        }
        
        if(self.audioPlayer)
        {
            [self.audioPlayer  prepareToPlay];
            
#if _SDK_LOG_ENABLED_
            BOOL playResult = [self.audioPlayer play];
            if (playResult == NO)
            {
                UILOG_ERROR(@"playResult=NO");
            }
#else
            [self.audioPlayer play];
#endif
        }
    }
}

- (void)stopPlay
{
    if (self.audioPlayer
        && self.audioPlayer.playing)
    {
        NSLog(@"audioPlayer_stop");
        [self.audioPlayer stop];
    }
}

- (void)schedulePlay
{
    NSLog(@"enter");
    
    NSInteger timeInterval = 0;
    
    if ([[[UIDevice currentDevice] systemVersion] floatValue] < 7.0)
    {
        timeInterval = CIRCLE_TIME_INTERVAL;
    }
    else
    {
        timeInterval = CIRCLE_TIME_INTERVAL_OS7_0;
    }
    
    self.restTimer = [NSTimer scheduledTimerWithTimeInterval:timeInterval
                                                      target:self
                                                    selector:@selector(startPlay)
                                                    userInfo:nil
                                                     repeats:NO]; // 定时器不重复
}

#pragma mark -
#pragma mark AVAudioPlayerDelegate

- (void)audioPlayerDidFinishPlaying:(AVAudioPlayer *)player successfully:(BOOL)flag
{
    NSLog(@"enter");
    [self schedulePlay];
}

/* if an error occurs while decoding it will be reported to the delegate. */
- (void)audioPlayerDecodeErrorDidOccur:(AVAudioPlayer *)player error:(NSError *)error
{
    NSLog(@"enter");
    [self schedulePlay];
}

@end
