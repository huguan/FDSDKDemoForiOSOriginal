//
//  FDSDK.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/11.
//  Copyright © 2017年 熙文 张. All rights reserved.
//



#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "FDSDKParameters.h"
#import "FDPayParamsModel.h"
#import "FDSDKInitModel.h"
#import "FDUserModel.h"
#import "FDRoleModel.h"
#import "FDNormalResultModel.h"

//! Project version number for FDSDK.
FOUNDATION_EXPORT double FDSDKVersionNumber;

//! Project version string for FDSDK.
FOUNDATION_EXPORT const unsigned char FDSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FDSDK/PublicHeader.h>

typedef NS_ENUM(NSInteger, FDPayResultCode) {
    /**
     * 购买成功
     */
    FDPayResultCodeSucceed	= 0,
    /**
     * 购买失败
     */
    FDPayResultCodeFailed = 1,
    
    /**
     * 登录状态有问题
     */
    FDPayResultCodeFailedWithLogin = 2,
    /**
     * 订单不合法
     */
    FDPayResultCodeFailedWithOrderIllegal = 3,
    /**
     * 支付结果未知，需要去服务端查询
     */
    FDPayResultCodeUnknown	= 6
};


typedef void (^fdLoginSuccessBlock)(FDUserModel *userModel);
typedef void (^fdLogoutBlock)(FDNormalResultModel *result);
typedef void (^fdPayBlock)(FDPayResultCode payResultCode);



@class FDPayParamsModel;

@interface FDSDK : NSObject
/**
 *  客服屏幕旋转
 */
@property (nonatomic, assign) NSUInteger supportedInterface;

/**
 *  登陆之后当前用户对象
 */
@property (nonatomic, strong) FDUserModel   *fdCurrUserModel;
/**
 *  渠道编号
 */
@property (nonatomic, readonly) NSString *fdChannelId;

/**
 * SDK初始化参数对象
 */
@property (nonatomic, strong) FDSDKParameters *sdkParameters;

/**
 *  登陆成功回调
 */
@property (nonatomic, copy) fdLoginSuccessBlock fdLoginSuccessBlock;

/**
 *  注销回调
 */
@property (nonatomic, copy) fdLogoutBlock fdLogoutBlock;

/**
 *  支付回调
 */
@property (nonatomic, copy) fdPayBlock fdPayBlock;


/**
 *  返回一个静态单例对象
 *
 *  @return 单例对象
 */
+ (FDSDK *)sharedInstance;

/**
 *  初始化SDK
 *
 *  @param sdkParameters SDK参数对象
 */
- (void)fdInitWithSDKParameters:(FDSDKParameters *)sdkParameters;

/**
 *  登陆
 *
 *  @param view     所添加的视图
 *  @param complete 登陆成功回调
 */
- (void)fdLogin:(UIView *)view
       complete:(fdLoginSuccessBlock)complete;

/**
 *  用户中心
 */
- (void)fdCenter;

/**
 *  注销
 */
- (void)fdLogout;

/**
 *  支付
 *
 *  @param payParamsModel 订单对象
 *  @param complete       支付回调
 */
- (void)fdPay:(FDPayParamsModel *)payParamsModel
        complete:(fdPayBlock)complete;

/**
 *	初始化服务器
 *	@param	serverId  游戏参数配置项（区服）
 *  @note   异步接口，初始化服务器 该方法请在选择区服确定后调用
 */
- (void)fdInitServer:(NSString *) serverId;

/**
 *更新商品信息,请在初始化平台信息后购买商品前调用该方法，更新商品信息以便内购可以顺利进行,该方法只需调用一次.
 * @param	productsId 品信息列表
 * <returns>无返回</returns>
 */
- (void)fdUpdateProducts:(NSArray<NSString *> *) productsId;

/**
 * 上报玩家信息
 *
 */
- (void)updateRoleInfo:(FDRoleModel *) roleModel;

/**
 UIApplicationDelegate事件
 */
- (void)fdApplication:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)fdApplicationWillResignActive:(UIApplication *)application;
- (void)fdApplicationDidEnterBackground:(UIApplication *)application;
- (void)fdApplicationWillEnterForeground:(UIApplication *)application;
- (void)fdApplicationDidBecomeActive:(UIApplication *)application;
- (void)fdApplicationWillTerminate:(UIApplication *)application;

// 推送通知相关事件
- (void)fdApplication:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
- (void)fdApplication:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
- (void)fdApplication:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification;
- (void)fdApplication:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo;

// url处理
- (BOOL)fdApplication:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation;
- (BOOL)fdApplication:(UIApplication*)application handleOpenURL:(NSURL *)url;
- (BOOL)fdApplication:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;

@end
