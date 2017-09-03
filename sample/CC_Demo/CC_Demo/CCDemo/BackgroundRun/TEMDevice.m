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

#import "TEMDevice.h"
#import <UIKit/UIKit.h>


NSInteger  g_DeviceIndex;

@implementation TEMDevice
+(CGFloat)deviceVersion
{
    static CGFloat version;
    version =  [[[UIDevice currentDevice]systemVersion]floatValue];
    return version;
}

+(void)setDeviceIndexAction
{
    if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && [UIScreen mainScreen].bounds.size.height == 480)
    {
        g_DeviceIndex = DEVICE_IPHONE4_4S;
    }
    else if([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && [UIScreen mainScreen].bounds.size.height == 568)
    {
        g_DeviceIndex = DEVICE_IPHONE5_5S_6;
    }
    else if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && [UIScreen mainScreen].bounds.size.height == 667)
    {
        g_DeviceIndex = DEVICE_IPHONE5_5S_6;
    }
    else if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPhone && [UIScreen mainScreen].bounds.size.height == 736)
    {
        g_DeviceIndex = DEVICE_IPHONE6S;
    }
    else if ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
    {
        g_DeviceIndex = DEVICE_IPAD;
    }
    
}

@end
