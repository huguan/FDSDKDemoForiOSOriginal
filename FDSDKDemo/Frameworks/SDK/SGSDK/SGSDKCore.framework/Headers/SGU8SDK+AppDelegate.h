//
//  SGU8SDK+AppDelegate.h
//  SGU8SDK+AppDelegate
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SGU8SDK.h"

// SGU8SDK的核心类
// 负责插件管理和事件分发
@interface SGU8SDK (AppDelegate)

// UIApplicationDelegate事件
- (void)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;

// 推送通知相关事件
- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;
- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification;
- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo;

// url处理
- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation;
- (BOOL)application:(UIApplication*)application handleOpenURL:(NSURL *)url;

@end
