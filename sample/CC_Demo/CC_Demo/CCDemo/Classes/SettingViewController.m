//
//  SettingViewController.m
//  Meeting
//
//  Created by huawei on 16/3/10.
//  Copyright © 2016年 huawei. All rights reserved.
//

#import "SettingViewController.h"
#import "LoginViewController.h"


@interface SettingViewController ()

@end

@implementation SettingViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.chatAcodeLab setText:[[NSString alloc] initWithFormat:@"%@%@",NSLocalizedString(@"Chat", ""),NSLocalizedString(@"accessCode", "")]];
    [self.audioAcodeLab setText:[[NSString alloc] initWithFormat:@"%@%@",NSLocalizedString(@"Audio", ""),NSLocalizedString(@"accessCode", "")]];
    [self.callDataLab setText:NSLocalizedString(@"callData", "")];
    self.chatAcodeFiled.text = [LoginInfo sharedInstance].MSChatACode;
    self.audioAcodeFiled.text = [LoginInfo sharedInstance].MSAudioACode;
    self.callDataFiled.text = [LoginInfo sharedInstance].MSCallData;
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [self.view endEditing:YES];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
