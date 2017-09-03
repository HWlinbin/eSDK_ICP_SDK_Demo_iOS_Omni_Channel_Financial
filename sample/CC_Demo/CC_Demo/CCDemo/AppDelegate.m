//
//  AppDelegate.m
//  CCDemo
//
//  Created by mwx325691 on 16/3/31.
//  Copyright © 2016年 mwx325691. All rights reserved.
//

#import "AppDelegate.h"
#import "LoginViewController.h"
#import <AVFoundation/AVFoundation.h>
//

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    self.window = [[UIWindow alloc] initWithFrame:kSCREEN];
    self.window.backgroundColor = [UIColor whiteColor];
    
    NSString *sdkVersion = [[CCSDK shareInstance] getVersion];
    NSLog(@"sdk version:%@",sdkVersion);
    
    NSString *path = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0];
    NSString *logPath = [path stringByAppendingPathComponent:@"TUP_LOG"];
    NSLog(@"path = %@",path);
    [[CCSDK shareInstance] setLogPath:logPath level:LOG_DEBUG];
    
    [[CCSDK shareInstance] initSDK];
    
    LoginViewController *loginCtrl = [[LoginViewController alloc] initWithNibName:@"LoginViewController" bundle:nil];
    
    UINavigationController *navCtrl = [[UINavigationController alloc] initWithRootViewController:loginCtrl];
    self.window.rootViewController = navCtrl;
    
    [[AVAudioSession sharedInstance] requestRecordPermission:^(BOOL granted) {
        
        if (granted) {
            
            // 用户同意获取麦克风
            
        } else {
            
            // 用户不同意获取麦克风
            
        }
        
    }];
    
    [self.window makeKeyAndVisible];
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
     logDbg(@"applicationWillResignActive");
    
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
     logDbg(@"applicationDidEnterBackground");
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
    logDbg(@"applicationWillEnterForeground");
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
    logDbg(@"applicationDidBecomeActive");
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [[CCSDK shareInstance] unInitSDK];
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end

