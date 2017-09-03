//
//  SettingViewController.h
//  Meeting
//
//  Created by huawei on 16/3/10.
//  Copyright © 2016年 huawei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SettingViewController : UIViewController





@property (weak, nonatomic) IBOutlet UITextField *chatAcodeFiled;

@property (weak, nonatomic) IBOutlet UITextField *audioAcodeFiled;

@property (weak, nonatomic) IBOutlet UITextField *callDataFiled;
@property (weak, nonatomic) IBOutlet UILabel *chatAcodeLab;
@property (weak, nonatomic) IBOutlet UILabel *audioAcodeLab;
@property (weak, nonatomic) IBOutlet UILabel *callDataLab;


@end
