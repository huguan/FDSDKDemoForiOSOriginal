//
//  SGU8Plugin.h
//  SGU8插件定义
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import "SGU8SDK.h"

@class SGU8UserExtraData;

// SGU8Plugin 插件接口
@protocol SGU8PluginProtocol

-(instancetype) initWithParams:(NSDictionary*)params;

@optional

-(BOOL) isInitCompleted;
-(void) setupWithParams:(NSDictionary*)params;
-(void) submitExtraData:(SGU8UserExtraData*)data;

// UIApplicationDelegate事件
- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation;
- (BOOL)application:(UIApplication*)application handleOpenURL:(NSURL *)url;
- (void)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (void)applicationWillResignActive:(UIApplication *)application;
- (void)applicationDidEnterBackground:(UIApplication *)application;
- (void)applicationWillEnterForeground:(UIApplication *)application;
- (void)applicationDidBecomeActive:(UIApplication *)application;
- (void)applicationWillTerminate:(UIApplication *)application;

- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError*)error;

- (void)didReceiveLocalNotification:(UILocalNotification*)notification;
- (void)didReceiveRemoteNotification:(NSDictionary*)userInfo;

@end

@interface SGU8Plugin : NSObject<SGU8PluginProtocol>

@property (nonatomic, copy) NSDictionary* params;

-(instancetype) initWithParams:(NSDictionary*)params;

-(BOOL) getBoolForParam:(NSString*)key default:(BOOL)defaultValue;

-(UIView*) view;
-(UIViewController*) viewController;

-(id) getInterface:(Protocol *)aProtocol;

-(void) eventPlatformInit:(NSDictionary*) params;
-(void) eventUserLogin:(NSDictionary*) params;
-(void) eventUserLogout:(NSDictionary*) params;
-(void) eventPayPaid:(NSDictionary*) params;
-(void) eventCustom:(NSString*)name params:(NSDictionary*)params;

@end
