//
//  GTSPGameCommonApi.h
//  GTSPGameSDKDemo
//
//  Created by iOS on 17/5/14.
//  Copyright © 2017年 iOS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GTSPGameCommonApi : NSObject

//账号内部按钮注销成功通知
extern NSString * const GTSPGame_Account_LogoutSuccess;

//新用户注册成功通知
extern NSString * const GTSPGame_Account_RegisSuccess;

+(void)isBang:(void(^)(int isbang))block;

/**
 *  @brief  初始化SDK
 *  @param initCallback    回调
 */
+(void)Initialization:(void(^)())initCallback;


/**H5游戏特殊需求*/
+(void)getH5GameInfo:(void(^)(NSDictionary* infoDict))block;

/**
 *  @brief  初始化SDK  动态改变游戏基本信息
 *  @param initCallback    回调
 */
+(void)Initialization:(NSDictionary*)infoDict InitCallback:(void(^)())initCallback;

/**
 *  @brief  设置服务区号
 *  @param server 服务区号
 */
+(void)setServer:(NSString *)server;


/**
 *  @brief  登录
 *  @param vc                  当前控制器
 *  @param animated      是否执行页面切换动画
 *  @param block              登录回调block         userName:用户名      sessionID:用户认证ID
 *  @param dismissblock    登录页面消失回调
 */
+(void)connectionLoginForController:(UIViewController *)vc animated:(BOOL)animated block:(void(^)(NSString * userName,NSString *sessionID,NSString *timeStamp,NSString *Token))block dismissSuccess:(void(^)())dismissblock;

/**
 *  @brief  登录验证
 *  @param sessionId 用户登录成功获取的SessionId
 *  @param block     YES:还在登录状态  NO:已不在登录状态
 */
+(void)loginValidationWithSessionID:(NSString *)sessionId block:(void(^)(BOOL loginState))block;

/**
 *  @brief     注销
 *  @param   block 注销回调
 */
+(void)connectionLogoutWithBlock:(void(^)(BOOL state))block;

/**
 *  @brief  显示悬浮窗
 */
+(void)setFloatButtonHide:(BOOL)hide;

/**
 *  @brief  进入游戏服日志所需参数，游戏激活数据采集
 */
+(void)EnterData;

/**
 *  @brief  进入游戏服日志所需参数，游戏激活数据采集(自传用户名)
 *
 *  @param userName 用户名
 */
+(void)EnterDataUserName:(NSString *)userName;


/**
 *  @brief  内购
 *  @param objectID 内购ID
 *  @param amount 内购rmb金额
 *  @param extrainStr 透传字符串
 *  @param block (void(^)(BOOL state,NSString *error)block  state内购是否完成，error未完成时，错误信息
 */
+(void)IAPShareBuyObject:(NSString *)objectID Amount:(NSString*)amount ExtraInfo:(NSString *)extrainStr block:(void(^)(BOOL state,NSString *error))block;

/**
 *  @brief 支付完成通知
 *  @param pay_time		String	充值时间 时间格式yyyy-mm-dd hh:mm:ss
 *  @param order_id		String	订单号
 *  @param pay_way		String	充值方式，请咨询数据接收方
 *  @param pay_money		Float	充值金额/元
 *  @param game_coin		Float	充值所获得的游戏币总额
 *  @param pay_ip		String	充值IP
 *  @param block    是否发送成功
 */
+(void)connectionGamePaymentWithPayTime:(NSString *)pay_time OrderID:(NSString*)order_id PayWay:(NSString*)pay_way PayMoney:(float)pay_money GameCoin:(float)game_coin PayIP:(NSString *)pay_ip block:(void(^)(BOOL state,NSString *error))block;

@end
