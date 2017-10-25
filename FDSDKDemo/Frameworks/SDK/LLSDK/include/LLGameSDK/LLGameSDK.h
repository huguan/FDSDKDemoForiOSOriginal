//
//  LLGameSDK.h
//  LLGameSDK
//
//  Created by linglei on 2017/7/10.
//  Copyright © 2017年 linglei. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum
{
    LLGInitErrorCodeNone = 0,    //初始化成功
    LLGInitErrorCodeNet = 1, //网络异常
    LLGInitErrorCodeConig = 2,   //appid配置错误
    LLGInitErrorCodeUpdating = 3 //游戏更新中
}LLGInitErrorCode;

typedef void (^LLGInitErrorCodeBlock)(LLGInitErrorCode result);

@interface LLGameSDK : NSObject

@property (strong,nonatomic,readonly)NSString *APPID;

/*
 @brief 获取GPGameSDK单例
 */
+ (LLGameSDK *)defaultLLGame;

/*
 @brief GPGameSDK应用初始化函数,异步函数，result 0表示成功，1表示网络异常，2表示appid、secret错误
 @param appid 申请的APPID
 */
- (void)LLGameSDKInitWithAPPID:(NSString *)appid Completion:(LLGInitErrorCodeBlock)completion;

/*
 @breif 调用登录, 登录结果会以通知形式返回，若登录成功，将自动退出登录页面
 @param view 当前view 可填nil
 @return 返回0正常进入sdk登录界面， 非0表示sdk登录环境异常
 */
- (int)LLLoginInView:(UIView *)view;

/*
 @brief 判断是否已登录并且有效
 */
- (BOOL)isLogined;

/*
 @brief 注销，同步方法
 */
- (void)LLLogout;


#pragma mark -

/*
 @brief 本次登录token
 */
- (NSString *)loginToken;

@end
