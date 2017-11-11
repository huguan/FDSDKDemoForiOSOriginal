//
//  LYGameProxy.h
//  LYDemoSDK
//
//  Created by LG on 16/8/23.
//  Copyright (c) 2016年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "LYGameDelegate.h"
#import "LYRole.h"
#import "LYPayModel.h"

@class LYUser;
@class LYGameConfig;


@interface LYGameProxy : NSObject
@property (nonatomic, retain) id<LYGameDelegate> platformDelegate;

+ (LYGameProxy*) instance;

/**
 *	平台初始化方法（初始化为异步操作，请在收到初始化通知后继续后续操作）
 *	@param	config  游戏参数配置项
 */
-(void) startSetConfig:(LYGameConfig*)config;


/**
 @brief 登录平台,进入登录或者注册界面入口
 @param para 预留参数，默认为nil
 @note  异步接口，需实现LYGameDelegate的onLogin接口处理用户登录结果
 */
-(void) login:(NSDictionary*)para;


/**
 @brief 注销
 @param para 预留参数，默认为nil
 */
-(void) logout:(NSDictionary*)para;

/**
 @brief 设置uid
 @param uid 登录成功 api/index会返回uid 将uid填写此处
 @note  设置uid调用时机是在游戏服务器验证登录成功后设置
 */
-(void) setSdkUid:(NSString*)uid;

/**
 *	初始化服务器 (进入游戏处调用)
 *	@param	roleData   角色相关参数（具体参考接入文档或demo）
 *  @note   异步接口，需实现LYGameDelegate的onServerInit接口处理服务器初始化结果
 */
-(void) initServer:(LYRole *)roleData;

/**
 *  创建角色
 *	@param	roleData   角色相关参数（具体参考接入文档或demo）
 */
-(void) createRole:(LYRole *)roleData;

/**
 *	角色升级
 *	@param	roleData   角色相关参数（具体参考接入文档或demo）
 */
-(void) upgradesRole:(LYRole *)roleData;

/**
 *  定额消费接口，进行购买虚拟货币或者指定物品（需登录并成功初始化服务器才可进行消费操作）
 *
 *  @param payModel        商品参数
 *  @note  异步接口，需实现LYGameDelegate接口处理消费结果
 */
-(void) payPlatform:(LYPayModel *)payModel;

- (void) application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void) applicationDidEnterBackground:(UIApplication *)application;
- (void) applicationWillEnterForeground:(UIApplication *)application;
- (void) applicationWillTerminate:(UIApplication *)application;
- (void) applicationDidReceiveMemoryWarning:(UIApplication *)application;
- (void) applicationDidBecomeActive:(UIApplication *)application;
- (BOOL) application:(UIApplication *)application handleOpenURL:(NSURL *)url;
- (BOOL) application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;
- (BOOL) application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options;
- (NSUInteger) application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;
- (LYUser*) getUserInfo;
//设置rootView
-(void)setRootView:(UIView *)view;
@end
