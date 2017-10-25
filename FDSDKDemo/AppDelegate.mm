//
//  AppDelegate.m
//  FDSDKDemo
//
//  Created by 熙文 张 on 2017/01/11.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import "AppDelegate.h"
#import <FDSDK/FDSDK.h>


@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [self.window makeKeyAndVisible];
    
    //设置聚合参数
    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"50"];
    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"ea718a559b4a825e5481afc695ee2abb"];
    
    // 互冠-风云传说
    //    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"129"];
    //    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"b4a4a084589802ee8ed7e0af75afda32"];
    
    // 悠扬-刀刀屠龙
    //    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"171"];
    //    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"f879050c41043623c54e3d6eec269aac"];
    
    [[FDSDKParameters sharedHGSDKParameters] setLogData:NO];
    [[FDSDKParameters sharedHGSDKParameters] setDebug:NO];
    
    //设置悠扬SDK参数
    FDMKSDKInitModel *mkSDKInitModel = [FDMKSDKInitModel new];
    [mkSDKInitModel setGameId:@"12"];
    [mkSDKInitModel setSubGameId:@"42"];
    [mkSDKInitModel setSecretKey:@"7547b57caec4e47a7c9d867f00278fd6"];
    [mkSDKInitModel setRyAppId:@"89f737db46c5f22a4b7d0d4872b3b29b"];
    [mkSDKInitModel setRyKey:@"b8d028d4a7e6dc3f4b41bd42f91153d0"];
    [mkSDKInitModel setRyChannelID:@"default"];
    [[FDSDKParameters sharedHGSDKParameters] setMkSDKInitModel:mkSDKInitModel];
    
    //设置29游SDK参数（测试）注意初始化参数测试为NO
    FDEYSDKInitModel *eySDKInitModel = [FDEYSDKInitModel new];
    [eySDKInitModel setAppId:@"1086"];
    [eySDKInitModel setAppKey:@"4ef167e7ff94ab4dde018e"];
    [eySDKInitModel setSubChannelId:@"10020370"];
    [[FDSDKParameters sharedHGSDKParameters] setEySDKInitModel:eySDKInitModel];
    
    //设置奇天SDK参数
    FDQTSDKInitModel *qtSDKInitModel =[FDQTSDKInitModel new];
    [qtSDKInitModel setAppId:@"2652"];
    [qtSDKInitModel setAppKey:@"3cdb79be66262043cd8c29eb7ebfaf6d"];
    [[FDSDKParameters sharedHGSDKParameters] setQtSDKInitModel:qtSDKInitModel];
    
    // 设置互冠SDK参数
    FDHgSDKInitModel *hgSDKInitModel = [FDHgSDKInitModel new];
    [hgSDKInitModel setGameId:@"156"];
    [hgSDKInitModel setSecretKey:@"c4101654d52ca9907e4a889a8430afe5"];
    [hgSDKInitModel setChannelId:@"0"];
    [hgSDKInitModel setCpId:@"4"];
    [hgSDKInitModel setWxAppId:@"wx799c5867ea4dddd3"];
    [hgSDKInitModel setTdAppId:@"B2F7C9A41E8F4DBBB2A2C8B128DE2407"];
    [hgSDKInitModel setDeAppId:@"CAF2DA765A79D0A2794BD842457DB1648"];
    [[FDSDKParameters sharedHGSDKParameters] setHgSDKInitModel:hgSDKInitModel];
    
    //设置麟游SDK参数
    FDLySDKInitModel *lySDKInitModel = [FDLySDKInitModel new];
    [lySDKInitModel setProductId:@"lyftios"];
    [lySDKInitModel setLinnyouKey:@"996b6b37aa4473c5"];
    [[FDSDKParameters sharedHGSDKParameters] setLySDKInitModel:lySDKInitModel];
    
    //设置94玩SDK参数
    FDLoSDKInitModel *loSDKInitModel = [FDLoSDKInitModel new];
    [loSDKInitModel setAppId:@"1000240"];
    [loSDKInitModel setAppKey:@"9461bf79c40aa3e6b36b3e1bb629295b"];
    [loSDKInitModel setHotKey:@"120dbc21e748f17030d42b967a3b8c8a"];
    [[FDSDKParameters sharedHGSDKParameters] setLoSDKInitModel:loSDKInitModel];
    
    //设置银狐SDK参数
    //在GameInfo.plist中填写相关参数
    
    //设置另类SDK参数
    FDLLSDKInitModel *llSDKInitModel = [FDLLSDKInitModel new];
    [llSDKInitModel setAppId:@"1019"];
    [[FDSDKParameters sharedHGSDKParameters] setLlSDKInitModel:llSDKInitModel];
    
    //设置游戏猫SDK参数
    FDYXMSDKInitModel *yxmSDKInitModel = [FDYXMSDKInitModel new];
    yxmSDKInitModel.yxmEnvironment = @"5";
    yxmSDKInitModel.yxmGameID = @"henmeng_lieyanfengtian_1";
    yxmSDKInitModel.yxmAesKey = @"eW91eGltYW80MTAwMDF4cw==";
    yxmSDKInitModel.yxmAppKey = @"4100001";
    yxmSDKInitModel.yxmChlID = @"4101";
    [[FDSDKParameters sharedHGSDKParameters] setYxmSDKInitModel:yxmSDKInitModel];
    
    //设置数果SDK参数
    //在Info.plist中填写相关参数
    
    //根据Type初始化不同的SDK
    [[FDSDKParameters sharedHGSDKParameters] setFdPlatformType:FDHGPlatform];
    [[FDSDK sharedInstance] fdInitWithSDKParameters:[FDSDKParameters sharedHGSDKParameters]];
    
    [[FDSDK sharedInstance] fdApplication:application didFinishLaunchingWithOptions:launchOptions];
    return YES;
}


- (BOOL)application:(UIApplication *)application handleOpenURL:(NSURL *)url {
    [[FDSDK sharedInstance] fdApplication:application handleOpenURL:url];
    return YES;
}
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url options:(NSDictionary<NSString*, id> *)options{
    [[FDSDK sharedInstance] fdApplication:application openURL:url options:options];
    return YES;
}
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation {
    [[FDSDK sharedInstance] fdApplication:application openURL:url sourceApplication:sourceApplication annotation:annotation];
    return YES;
}
- (void)applicationWillEnterForeground:(UIApplication *)application {
    [[FDSDK sharedInstance] fdApplicationWillEnterForeground:application];
}

- (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window {
    return [[FDSDK sharedInstance] supportedInterface];
}

- (void)applicationWillResignActive:(UIApplication *)application {
    [[FDSDK sharedInstance] fdApplicationWillResignActive:application];
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    [[FDSDK sharedInstance] fdApplicationDidEnterBackground:application];
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    [[FDSDK sharedInstance] fdApplicationDidBecomeActive:application];
}

- (void)applicationWillTerminate:(UIApplication *)application {
    [[FDSDK sharedInstance] fdApplicationWillTerminate:application];
}




// 推送通知相关事件
- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken {
    [[FDSDK sharedInstance] fdApplication:application didRegisterForRemoteNotificationsWithDeviceToken:deviceToken];
}

- (void)fdApplication:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error {
    [[FDSDK sharedInstance] fdApplication:application didFailToRegisterForRemoteNotificationsWithError:error];
}

- (void)fdApplication:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification {
    [[FDSDK sharedInstance] fdApplication:application didReceiveLocalNotification:notification];
}

- (void)fdApplication:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo {
    [[FDSDK sharedInstance] fdApplication:application didReceiveRemoteNotification:userInfo];
}


@end
