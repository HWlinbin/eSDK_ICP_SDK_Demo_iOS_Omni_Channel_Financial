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

#import <Foundation/Foundation.h>


@interface TEBackgroundRunService : NSObject
{
}

// 来电错过总次数
@property (nonatomic, readonly) NSInteger commingCallMissCount;

/***********************************************************************
 Function:      shareInstance:
 Description:   获取BackgroundRunService单例
 Input:         无
 Output:        无
 Return:        BackgroundRunService实例
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
+ (TEBackgroundRunService *)shareInstance;

/***********************************************************************
 Function:      startBackgroundTaskAndActivity
 Description:   启动后台的任务和活动
 >              应可在函数applicationDidEnterBackground:中调用
 Input:         无
 Output:        无
 Return:        NA
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)startBackgroundTaskAndActivity:(BOOL)bKeepMoreTime;

/***********************************************************************
 Function:      startBackgroundActivity
 Description:   启动后台的活动
 >              进入后台后登录成功之时需调用此函数
 Input:         无
 Output:        无
 Return:        NA
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)startBackgroundActivity;

/***********************************************************************
 Function:      stopBackgroundTask
 Description:   停止后台的任务和活动
 >              应可在函数applicationWillEnterForeground:和applicationWillTerminate:中调用
 Input:         无
 Output:        无
 Return:        NA
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)stopBackgroundTaskAndActivity;

/***********************************************************************
 Function:      sendBackgroundNotifyWithCommingCall
 Description:   发送来电的后台提醒
 Input:         无
 Output:        无
 Return:        NA
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)sendBackgroundNotifyWithCommingCall:(NSString *)contactName withNumber:(NSString *)callNumber;

/***********************************************************************
 Function:      closeBackgroundNotifyWithCommingCall
 Description:   关闭来电的后台提醒
 Input:         无
 Output:        无
 Return:        NA
 Others:        NA
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)closeBackgroundNotifyWithCommingCall;

/***********************************************************************
 Function:      dealBackgroundNotifyData
 Description:   处理来电的后台提醒数据
 Input:         bWillAlert (是否需要提醒)
 Output:        无
 Return:        NA
 Others:        目前是已登录(不管在线/离线)的状态则需要提醒
 Author:        chengjianghong wx180684
 ***********************************************************************/
- (void)dealBackgroundNotifyData:(BOOL)bWillAlert;

@end
