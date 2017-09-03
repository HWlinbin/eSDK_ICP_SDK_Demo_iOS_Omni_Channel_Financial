//
//  LoginInfo.h
//  AGDemo
//
//  Created by mwx325691 on 2016/10/14.
//  Copyright © 2016年 huawei. All rights reserved.
//

#import "LoginInfo.h"


static NSString * const DEFAULT_TPLOGINIP = @"172.22.8.99";
static NSString * const DEFAULT_TPLOGINPORT = @"8243";
NSString *const keyTPLoginIP = @"TP_LOGIN_IP";
NSString *const keyTPLoginPort = @"TP_LOGIN_PORT";

static NSString * const DEFAULT_TPACCESSCODE = @"1007";
NSString *const keyTPACode = @"TP_ACCESSCODE";

static NSString * const DEFAULT_TPCALLDATA = @"";
NSString *const keyTPCALLDATA = @"TP_CALL_DATA";

//172.22.8.99 8243
static NSString * const DEFAULT_MSLOGINIP = @"10.170.197.219";
static NSString * const DEFAULT_MSLOGINPORT = @"8243";
NSString *const keyMSLoginIP = @"MS_LOGIN_IP";
NSString *const keyMSLoginPort = @"MS_LOGIN_PORT";

//172.22.10.73 5060
static NSString * const DEFAULT_SIPIP = @"10.170.197.220";
static NSString * const DEFAULT_SIPPORT = @"5063";
NSString *const keyMSSipIP = @"MS_SIP_IP";
NSString *const keyMSSipPort = @"MS_SIP_PORT";

static NSString * const DEFAULT_MSCHATACODE = @"2001";
static NSString * const DEFAULT_MSAUDIOACODE = @"1001";
NSString *const keyMSCHATACODE = @"MS_CHAT_ACODE";
NSString *const keyMSAUDIOACODE = @"MS_AUDIO_ACODE";

static NSString * const DEFAULT_MSCALLDATA = @"";
NSString *const keyMSCALLDATA = @"MS_CALL_DATA";


@implementation LoginInfo

static LoginInfo *loginInfo = nil;

+(LoginInfo *)sharedInstance
{
    @synchronized(self){
        if (loginInfo == nil)
        {
            loginInfo = [[LoginInfo alloc] init];
        }
    }
    return loginInfo;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.isTPHTTPS = YES;
        self.isMSHTTPS = YES;
        self.isTLS = YES;
        self.VCode = @"";
    }
    return self;
}


-(void)loadConfig
{
    NSString *filePath = [self configFilePath];
    NSFileManager *defultManager = [NSFileManager defaultManager];
    NSDictionary *configDic = [NSDictionary dictionary];
    if ([defultManager fileExistsAtPath:filePath]) {
        configDic = [NSDictionary dictionaryWithContentsOfFile:filePath];
    }
    if (configDic)
    {
        self.TPLoginIp = [configDic objectForKey:keyTPLoginIP];
        self.TPLoginPort = [configDic objectForKey:keyTPLoginPort];
        
        self.MSLoginIp = [configDic objectForKey:keyMSLoginIP];
        self.MSLoginPort = [configDic objectForKey:keyMSLoginPort];
        self.MSChatACode = [configDic objectForKey:keyMSCHATACODE];
        self.MSAudioACode = [configDic objectForKey:keyMSAUDIOACODE];
        self.MSSipIp = [configDic objectForKey:keyMSSipIP];
        self.MSSipPort = [configDic objectForKey:keyMSSipPort];
        self.MSCallData = [configDic objectForKey:keyMSCALLDATA];
    }
    else
    {
        self.TPLoginIp = DEFAULT_TPLOGINIP;
        self.TPLoginPort = DEFAULT_TPLOGINPORT;
        
        self.MSLoginIp = DEFAULT_MSLOGINIP;
        self.MSLoginPort = DEFAULT_MSLOGINPORT;
        self.MSChatACode = DEFAULT_MSCHATACODE;
        self.MSAudioACode = DEFAULT_MSAUDIOACODE;
        self.MSSipIp = DEFAULT_SIPIP;
        self.MSSipPort = DEFAULT_SIPPORT;
        self.MSCallData = DEFAULT_MSCALLDATA;
    }
    self.TPACode = DEFAULT_TPACCESSCODE;
    
    BOOL isNil1 = (self.TPLoginIp.length == 0 && self.TPLoginPort.length == 0);
    BOOL isNil2 = (self.TPCallData.length == 0 && self.MSLoginIp.length == 0 && self.MSLoginPort == 0);
    BOOL isNil3 = (self.MSChatACode.length == 0 && self.MSAudioACode.length == 0 && self.MSSipIp.length == 0);
    BOOL isNil4 = (self.MSSipPort.length == 0 && self.MSCallData.length == 0);
    if (isNil1 && isNil2 && isNil3 && isNil4) {
        self.TPLoginIp = DEFAULT_TPLOGINIP;
        self.TPLoginPort = DEFAULT_TPLOGINPORT;
        
        self.MSLoginIp = DEFAULT_MSLOGINIP;
        self.MSLoginPort = DEFAULT_MSLOGINPORT;
        self.MSChatACode = DEFAULT_MSCHATACODE;
        self.MSAudioACode = DEFAULT_MSAUDIOACODE;
        self.MSSipIp = DEFAULT_SIPIP;
        self.MSSipPort = DEFAULT_SIPPORT;
        self.MSCallData = DEFAULT_MSCALLDATA;
    }

}

-(void)saveConfig
{
    NSMutableDictionary *currentConfigDict = [NSMutableDictionary dictionary];
    [currentConfigDict setObject:[self getNotNilStr:self.TPLoginIp] forKey:keyTPLoginIP];
    [currentConfigDict setObject:[self getNotNilStr:self.TPLoginPort] forKey:keyTPLoginPort];
    
    [currentConfigDict setObject:[self getNotNilStr:self.MSLoginIp] forKey:keyMSLoginIP];
    [currentConfigDict setObject:[self getNotNilStr:self.MSLoginPort] forKey:keyMSLoginPort];
    [currentConfigDict setObject:[self getNotNilStr:self.MSSipIp] forKey:keyMSSipIP];
    [currentConfigDict setObject:[self getNotNilStr:self.MSSipPort] forKey:keyMSSipPort];
    [currentConfigDict setObject:[self getNotNilStr:self.MSChatACode] forKey:keyMSCHATACODE];
    [currentConfigDict setObject:[self getNotNilStr:self.MSAudioACode] forKey:keyMSAUDIOACODE];
    [currentConfigDict setObject:[self getNotNilStr:self.MSCallData] forKey:keyMSCALLDATA];
    
    NSString *configFilePath = [self configFilePath];
    [currentConfigDict writeToFile:configFilePath atomically:YES];
}
- (NSString*)getNotNilStr:(NSString*)orignalStr
{
    NSString *resultStr = @"";
    if ([orignalStr length] > 0)
    {
        resultStr = [NSString stringWithString:orignalStr];
    }
    return resultStr;
}
-(NSString*)configFilePath
{
    NSArray * docPathArray = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES);
    NSString *docPath = [docPathArray objectAtIndex:0];
    NSString *filePath = [docPath stringByAppendingPathComponent:@"userConfig.plist"];
    return filePath;
}
@end
