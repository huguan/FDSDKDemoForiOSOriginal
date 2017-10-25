//
//  GMBaseViewController.h
//  GameCatSDK
//
//  Created by 西野 on 16/10/24.
//  Copyright © 2016年 西野. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GameCatViewMacro.h"
#import "GMViewControllerProtocol.h"
#import "GMDialog.h"

@protocol dismissViewController <NSObject>
- (void)dismissVC;
@end

@interface GMBaseViewController : UIViewController<GMViewControllerProtocol>

@property(assign, nonatomic) CGRect rect;
@property(strong, nonatomic) GMDialog *netAlertView;
@property(strong, nonatomic) GMDialog *shopAlertView;
@property(strong, nonatomic) UIWindow* backgroundView;
@property(strong, nonatomic) UIVisualEffectView *effectView;

- (void)fitSubViewsFrame:(UIView*)view;

- (CGRect)fitAppFrame:(CGRect)frame;

- (void)fitViewFrame:(UIView*)view str:(NSString*)bitStr;

- (NSString*)convertToString:(id)str;

- (void)showZFAlertView:(NSString*)alertStr;

- (void)showZFSuccessAlertView:(NSString*)alertStr;

- (void)showZFSuccessAlertH5View:(NSString*)alertStr;

- (void)showOderSuccessAlertView:(NSString*)alertStr;

- (void)showTicketAlertView:(NSString*)alertStr;

- (void)dismissTicketView;

- (NSString*)encode:(NSString*)encodeStr;

- (NSString*)decode:(NSString*)decodeStr;

- (NSString *)md5:(NSString *)str;

- (NSArray*)sortAccountByTime:(NSDictionary*)accountDic;

- (NSArray*)sortDictionaryByTime:(NSDictionary*)accountDic;

//保存用户的时间戳
- (void)savePhoneListToFile:(NSString*)phoneStr password:(NSString*)pwd;

//保存用户的token
- (void)savePasswordToDictionary:(NSString*)phoneStr password:(NSString*)pwd;

//保存用户的类型（一键注册类型、QQ类型、安全手机类型、喵号类型）
- (void)saveUserTypeToDictionary:(NSString*)phoneStr password:(NSString*)pwd;

- (void)saveTokenTypeToDictionary:(NSString*)phoneStr password:(NSString*)pwd;

- (void)postTokenNotition:(NSString*)token;

//保存用户的userId
- (void)saveUserIdentifyToFile:(NSString*)phoneStr password:(NSString*)pwd;

//保存用户的openId
- (void)saveOpenIdToFile:(NSString*)phoneStr password:(NSString*)pwd;

- (void)postOpenIdNotition:(NSString*)openId;

- (void)showBackGroundView;

- (void)dismissBackGroundView;

@end
