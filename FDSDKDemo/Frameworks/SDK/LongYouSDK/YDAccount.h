//
//  HuiDongLogin.h
//  HuiDongLogin
//
//  Created by xqwang on 2016/11/7.
//  Copyright © 2016年 xqwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YDUserAccount : NSObject

//账号ID，账号惟一标识
@property(nonatomic, assign)long long accountId;
//用户名
@property(nonatomic, copy)NSString* accountName;
//用户绑定手机号
@property(nonatomic, copy)NSString* phoneNumber;

@end

@protocol YDAccountDelegate <NSObject>

@optional
-(void)accountLogin:(YDUserAccount*)model;
-(void)accountLogout;
-(void)accountRegist:(YDUserAccount*)model;

@end

@interface YDAccount : NSObject

+(void)initWithAppId:(NSString*)appId openKey:(NSString*)openKey;

+(void)setDelegate:(id<YDAccountDelegate>)delegate;

+(void)showWindow;

//接口用于将优点的账户体系与接入商自己的账号体系关联起来，将优点账户ID与用户账户ID关联到一起
+(void)bindGameUserId:(NSString*)userId;

+(void)logout;

+(YDUserAccount*)currentAccount;

@end
