//
//  MLGameCore.h
//  MLGameCore
//
//  Created by 陈平峰 on 2017/10/9.
//  Copyright © 2017年 陈平峰. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol MLCoreDelegate<NSObject>
//登录结果，登录成功后回调
-(void)loginResult:(NSNotification *_Nullable)result;
//支付结果,注意：不一定有回调
-(void)payResult:(NSNotification *_Nullable)result;
//退出结果，退出成功后回调
-(void)logoutResult:(NSNotification *_Nullable)result;
//初始化结果，初始化完成后回调
-(void)initFinishResult:(NSNotification *_Nullable)result;
//自定义事件,自定义事件回调，没有特别要求可以忽略
-(void)cusEventResult:(NSNotification *_Nullable)result;
@end

@interface MLGameCore : NSObject
//共享单例
+(MLGameCore *_Nonnull)sharedInstance;
//版本
+(NSString *_Nonnull)version;
//参数设置
-(void)setAppId:(int)appId withAppKey:(NSString *_Nonnull)appKey withChannelId:(int)channelId;
//事件委托设置
-(void)setDelegate:(id<MLCoreDelegate>_Nonnull)target;
//sdk初始化
-(void)sdkInit;
//登录
-(void)login;
//注销
-(void)logout;
//支付
-(void)pay:(NSDictionary *_Nonnull)productInfo;

@end


/**
 以下方法需在AppDelegate类中对应方法中调用
 */
@interface MLGameCore(AppDelegate)
- (BOOL)application:(UIApplication*_Nullable)application handleOpenURL:(NSURL *_Nullable)url;
- (void)applicationWillEnterForeground:(UIApplication *_Nullable)application;
- (void)applicationDidBecomeActive:(UIApplication *_Nullable)application;
- (BOOL)application:(UIApplication *_Nullable)application continueUserActivity:(NSUserActivity *_Nullable)userActivity restorationHandler:(void (^_Nullable)(NSArray *_Nullable))restorationHandler;
@end

