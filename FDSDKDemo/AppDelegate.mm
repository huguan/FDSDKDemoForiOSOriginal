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
    // 通用SDK聚合参数
    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"50"];
    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"ea718a559b4a825e5481afc695ee2abb"];
    
    // 互冠SDK
    //    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"129"];
    //    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"b4a4a084589802ee8ed7e0af75afda32"];
    
    // 悠扬SDK
    //    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"171"];
    //    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"f879050c41043623c54e3d6eec269aac"];
    
    // 29游SDK
//    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"162"];
//    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"fd98c4cf15be3e2f508c3c1315c25b8c"];
    
    // 麟游SDK
//    [[FDSDKParameters sharedHGSDKParameters] setAppId:@"195"];
//    [[FDSDKParameters sharedHGSDKParameters] setAppKey:@"b3e992cca99a85da24e2821a89778b6b"];
    
    [[FDSDKParameters sharedHGSDKParameters] setLogData:NO];
    [[FDSDKParameters sharedHGSDKParameters] setDebug:NO];
    
    //设置悠扬SDK参数
//    FDMKSDKInitModel *mkSDKInitModel = [FDMKSDKInitModel new];
//    [mkSDKInitModel setGameId:@"12"];
//    [mkSDKInitModel setSubGameId:@"42"];
//    [mkSDKInitModel setSecretKey:@"7547b57caec4e47a7c9d867f00278fd6"];
//    [mkSDKInitModel setRyAppId:@"89f737db46c5f22a4b7d0d4872b3b29b"];
//    [mkSDKInitModel setRyKey:@"b8d028d4a7e6dc3f4b41bd42f91153d0"];
//    [mkSDKInitModel setRyChannelID:@"default"];
//    [[FDSDKParameters sharedHGSDKParameters] setMkSDKInitModel:mkSDKInitModel];
    
    //设置29游SDK参数（测试）注意初始化参数测试为NO
//    FDEYSDKInitModel *eySDKInitModel = [FDEYSDKInitModel new];
//    [eySDKInitModel setAppId:@"1086"];
//    [eySDKInitModel setAppKey:@"4ef167e7ff94ab4dde018e"];
//    [eySDKInitModel setSubChannelId:@"10020370"];
//    [eySDKInitModel setAbAppId:@"301508258"];
//    [[FDSDKParameters sharedHGSDKParameters] setEySDKInitModel:eySDKInitModel];
    
    //设置奇天SDK参数
//    FDQTSDKInitModel *qtSDKInitModel =[FDQTSDKInitModel new];
//    [qtSDKInitModel setAppId:@"2652"];
//    [qtSDKInitModel setAppKey:@"3cdb79be66262043cd8c29eb7ebfaf6d"];
//    [[FDSDKParameters sharedHGSDKParameters] setQtSDKInitModel:qtSDKInitModel];
    
    // 设置互冠SDK参数
    FDHgSDKInitModel *hgSDKInitModel = [FDHgSDKInitModel new];
    [hgSDKInitModel setGameID:@"8"];
    [hgSDKInitModel setPayKey:@"bb4a3c615e02ffe2caef444177e9b87f"];
    [hgSDKInitModel setSubID:@"0"];
    [hgSDKInitModel setAppKey:@""];
    
    [hgSDKInitModel setWxAppId:@"wx799c5867ea4dddd3"];
    [hgSDKInitModel setTdAppId:@"6B5AF5F6144848089896AA02F44D9991"];
    [hgSDKInitModel setDeAppId:@"CDCBED5A6F5B3CD7DCC2EA53D98A66BEC"];
    [hgSDKInitModel setTtAppId:@"10036"];
    [[FDSDKParameters sharedHGSDKParameters] setHgSDKInitModel:hgSDKInitModel];
    
    //设置麟游SDK参数
//    FDLySDKInitModel *lySDKInitModel = [FDLySDKInitModel new];
//    [lySDKInitModel setProductId:@"hazmios"];
//    [lySDKInitModel setLinnyouKey:@"f642ab59b1ce042f"];
//    [[FDSDKParameters sharedHGSDKParameters] setLySDKInitModel:lySDKInitModel];
    
    //设置94玩SDK参数
//    FDLoSDKInitModel *loSDKInitModel = [FDLoSDKInitModel new];
//    [loSDKInitModel setAppId:@"1000240"];
//    [loSDKInitModel setAppKey:@"9461bf79c40aa3e6b36b3e1bb629295b"];
//    [loSDKInitModel setHotKey:@"120dbc21e748f17030d42b967a3b8c8a"];
//    [[FDSDKParameters sharedHGSDKParameters] setLoSDKInitModel:loSDKInitModel];
    
    //设置银狐SDK参数
    //在GameInfo.plist中填写相关参数
    
    //设置另类SDK参数
//    FDLLSDKInitModel *llSDKInitModel = [FDLLSDKInitModel new];
//    [llSDKInitModel setAppId:@"1019"];
//    [[FDSDKParameters sharedHGSDKParameters] setLlSDKInitModel:llSDKInitModel];
    
    //设置游戏猫SDK参数
//    FDYXMSDKInitModel *yxmSDKInitModel = [FDYXMSDKInitModel new];
//    yxmSDKInitModel.yxmEnvironment = @"5";
//    yxmSDKInitModel.yxmGameID = @"henmeng_lieyanfengtian_1";
//    yxmSDKInitModel.yxmAesKey = @"eW91eGltYW80MTAwMDF4cw==";
//    yxmSDKInitModel.yxmAppKey = @"4100001";
//    yxmSDKInitModel.yxmChlID = @"4101";
//    [[FDSDKParameters sharedHGSDKParameters] setYxmSDKInitModel:yxmSDKInitModel];
    
    //设置数果SDK参数
    //在Info.plist中填写相关参数
    
    // 设置雪糕SDK参数
//    FDXGSDKInitModel *xgSDKInitModel = [FDXGSDKInitModel new];
//    xgSDKInitModel.xgChannel = @"zfdz";
//    xgSDKInitModel.xgAppid = @"10187";
//    xgSDKInitModel.xgKey = @"JoC2aJ0vH1XUs9kSKQFtZ3TY8ME2GacS";
//    xgSDKInitModel.xgVersion = @"1.0.0";
//    [[FDSDKParameters sharedHGSDKParameters] setXgSDKInitModel:xgSDKInitModel];
    
    // 设置创星SDK参数
//    FDChuangXingInitModel *chuangXingInitModel =  [FDChuangXingInitModel new];
//    chuangXingInitModel.appId = @"219";
//    chuangXingInitModel.appKey = @"b0d0bd1f96528044b0751ca54b1cff58";
//    [[FDSDKParameters sharedHGSDKParameters] setChuangXingSDKInitModel:chuangXingInitModel];

    
    // 设置指尖SDK初始化参数
//    FDZhiJianSDKInitModel *zhiJianInitModel = [FDZhiJianSDKInitModel new];
//    zhiJianInitModel.zhiJianCompany = @"huguancylc";
//    [[FDSDKParameters sharedHGSDKParameters] setZhiJianSDKInitModel:zhiJianInitModel];
    
    //设置思璞SDK参数
    //在GTSPGame.plist中填写相关参数
    
    // 设置酬勤SDK参数
//    FDChouQinSDKInitModel *chouQinSDKInitModel = [FDChouQinSDKInitModel new];
//    chouQinSDKInitModel.chouQinGameID = 52004;
//    chouQinSDKInitModel.chouQinAppKey = @"16A443597452BAA964AD071FBC35203F";
//    chouQinSDKInitModel.chouQinChannelID = 520040902;
//    [[FDSDKParameters sharedHGSDKParameters] setChouQinSDKInitModel:chouQinSDKInitModel];
    
    // 设置iToolsSDK参数
//    FDiToolsSDKInitModel *iToolsSDKInitModel = [FDiToolsSDKInitModel new];
//    [iToolsSDKInitModel setIToolsAppID:2949];
//    [iToolsSDKInitModel setIToolsAppKey:@"2DF795B877659AF1AE73BC3607472CB0"];
//    [[FDSDKParameters sharedHGSDKParameters] setIToolsSDKInitModel:iToolsSDKInitModel];
    
    // 设置龙游SDK参数
//    FDLongYouSDKInitModel *longYouSDKInitModel = [FDLongYouSDKInitModel new];
//    longYouSDKInitModel.longYouAppID = @"AC18F649C5BDAA91336ACE03A9A6AAAB7";
//    longYouSDKInitModel.longYouOpenKey = @"328e48d99490514d6c4b5cdc8ec32cc8";
//    [[FDSDKParameters sharedHGSDKParameters] setLongYouSDKInitModel:longYouSDKInitModel];
    
    //根据Type初始化不同的SDK
    [[FDSDKParameters sharedHGSDKParameters] setFdPlatformType:FDHGPlatform];
    [[FDSDK sharedInstance] fdInitWithSDKParameters:[FDSDKParameters sharedHGSDKParameters]];
    
    // 下面这个接口需在设置完FdPlatformType后调用
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

//- (BOOL)application:(UIApplication *)application continueUserActivity:(NSUserActivity *)userActivity restorationHandler:(void (^)(NSArray * _Nullable))restorationHandler {
//    return [[FDSDK sharedInstance] fdApplication:application continueUserActivity:userActivity restorationHandler:restorationHandler];
//}


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
