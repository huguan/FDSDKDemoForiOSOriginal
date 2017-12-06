//
//  ViewController.m
//  FDSDKDemo
//
//  Created by 熙文 张 on 2017/01/11.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import "ViewController.h"
#import <FDSDK/FDSDK.h>

@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view setBackgroundColor:[UIColor grayColor]];
    
    UIImage *buttonImage = [UIImage imageNamed:@"FD_SDK_Button"];
    
    UIButton *loginButton = [UIButton new];
    [loginButton setFrame:CGRectMake(40, 140, 100, 40)];
    [loginButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [loginButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [loginButton setTitle:@"登陆" forState:UIControlStateNormal];
    [loginButton addTarget:self action:@selector(loginButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:loginButton];
    
    UIButton *payButton = [UIButton new];
    [payButton setFrame:CGRectMake(40, 200, 100, 40)];
    [payButton setTitle:@"支付一块" forState:UIControlStateNormal];
    [payButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [payButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [payButton addTarget:self action:@selector(payButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:payButton];
    
    
    UIButton *logoutButton = [UIButton new];
    [logoutButton setFrame:CGRectMake(200, 140, 100, 40)];
    [logoutButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [logoutButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [logoutButton setTitle:@"注销" forState:UIControlStateNormal];
    [logoutButton addTarget:self action:@selector(logoutButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:logoutButton];
    
    UIButton *centerButton = [UIButton new];
    [centerButton setFrame:CGRectMake(200, 200, 100, 40)];
    [centerButton setTitle:@"用户中心" forState:UIControlStateNormal];
    [centerButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [centerButton setBackgroundImage:buttonImage forState:UIControlStateNormal];
    [centerButton addTarget:self action:@selector(centerButtonClick) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:centerButton];
    
    [[FDSDK sharedInstance] setFdLogoutBlock:^(FDNormalResultModel *result){
        NSLog(@"注销回调");
    }];
    
}

- (void)loginButtonClick
{
    [[FDSDK sharedInstance] fdLogin:self.view complete:^(FDUserModel *userModel) {
        NSLog(@"%@",[userModel description]);
        
        [[FDSDK sharedInstance] fdUpdateProducts:@[@"com.rxgs.600",@"com.rxgs.3000",@"com.rxgs.6800",@"com.rxgs.12800",@"com.rxgs.32800",@"com.rxgs.64800"]];
        
        [[FDSDK sharedInstance] fdInitServer:@"1"];
        
        //上传角色信息
        FDRoleModel *roleModel = [FDRoleModel new];
        [roleModel setRoleName:@"GG20思密达"];
        [roleModel setRoleLever:999];
        [roleModel setRoleMoney:10000];
        [roleModel setServerName:@"蜀山传奇"];
        [roleModel setRoleId:@"001"];
        [roleModel setServerId:@"1"];
        [roleModel setPayLevel:@"v15"];
        [roleModel setExtar:@"扩展信息"];
        [roleModel setSpeciallySuit:@"0"];
        
        // 模拟玩家选择服务器事件
        [roleModel setFdDataType:FD_EXTRADATA_TYPE_SELECT_SERVER];
        [[FDSDK sharedInstance] updateRoleInfo:roleModel];
        
        // 模拟玩家创建角色事件
        [roleModel setFdDataType:FD_EXTRADATA_TYPE_CREATE_ROLE];
        [[FDSDK sharedInstance] updateRoleInfo:roleModel];
        
        // 模拟玩家进入游戏事件
        [roleModel setFdDataType:FD_EXTRADATA_TYPE_ENTER_GAME];
        [[FDSDK sharedInstance] updateRoleInfo:roleModel];
    }];
}

- (void)logoutButtonClick {
    [[FDSDK sharedInstance] fdLogout];
}

- (void)centerButtonClick {
    [[FDSDK sharedInstance] fdCenter];
}

- (void)payButtonClick {
    FDPayParamsModel *payParamsModel = [FDPayParamsModel new];
    [payParamsModel setPrice:6];
    [payParamsModel setProductNumber:1];
    [payParamsModel setProductCount:60];
    [payParamsModel setServerId:@"1"];
    [payParamsModel setServerName:@"蜀山传奇"];
    [payParamsModel setRoleId:@"001"];
    [payParamsModel setRoleName:@"GG20思密达"];
    [payParamsModel setOrderId:[self getOrderStringByTime]];
    [payParamsModel setProductId:@"com.qqby.cng06"];
    [payParamsModel setMappingId:@"P000449"];
    [payParamsModel setProductName:@"元宝"];
    [payParamsModel setProductDesc:@"花费6人民币购买600元宝"];
    [payParamsModel setExtension:@"Test_extension"];
    [[FDSDK sharedInstance] fdPay:payParamsModel complete:^(FDPayResultCode payResultCode) {
        if (payResultCode == FDPayResultCodeSucceed) {
            NSLog(@"支付成功");
        }
    }];
}

- (NSString *)getOrderStringByTime
{
    NSDate *date = [NSDate date];
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"YYYYMMddhhmmssSS"];
    NSString *dateString = [dateFormatter stringFromDate:date];
    NSString *orderId = [NSString stringWithFormat:@"hg_%@", dateString];
    NSLog(@"order:%@", orderId);
    return orderId;
}

//- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation
//{
//
//    return (toInterfaceOrientation == UIInterfaceOrientationLandscapeLeft || toInterfaceOrientation == UIInterfaceOrientationLandscapeRight);
//}
//
//

- (UIInterfaceOrientationMask)supportedInterfaceOrientations
{
    
    //    return UIInterfaceOrientationMaskLandscape;
    return UIInterfaceOrientationMaskAll;
}

//
//- (BOOL)shouldAutorotate
//{
//    return YES;
//}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event
{
    NSLog(@"游戏界面touchesBegan");
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
