#import "GQJBPackageHeader.h"

#ifdef GQJB_PGD

#ifndef GQJBPlatform
#define GQJBPlatform                                              GQJBProgC
#endif

#ifndef GQJBPlatformInitDidFinishedNotification
#define GQJBPlatformInitDidFinishedNotification                   GQJBProgCInitDidFinished
#endif

#ifndef GQJBPlatformInitFinishedFailNotification
#define GQJBPlatformInitFinishedFailNotification                  GQJBProgCInitFinishedFail
#endif

#ifndef GQJBPlatformLoginNotification
#define GQJBPlatformLoginNotification                             GQJBProgCLogin
#endif

#ifndef GQJBPlatformLogoutNotification
#define GQJBPlatformLogoutNotification                            GQJBProgCLogout
#endif

#ifndef GQJBPlatformChoseViewCloseNotification
#define GQJBPlatformChoseViewCloseNotification                    GQJBProgCChoseViewClose
#endif

#ifndef GQJBPlatformPaySuccessfulNotification
#define GQJBPlatformPaySuccessfulNotification                     GQJBProgCPaySuccessful
#endif


#ifndef GQJBPlatformPayFailNotification
#define GQJBPlatformPayFailNotification                           GQJBProgCPayFail
#endif

#ifndef GQJBPlatformGameConnectChanged
#define GQJBPlatformGameConnectChanged                            GQJBProgCGameConnectChanged
#endif

#ifndef GQJBSelfPlatformLoginNotification
#define GQJBSelfPlatformLoginNotification                         GQJBProgCSelfPlatformLogin
#endif

#ifndef GQJBSelfPlatformRegisterSuccessfulNotification
#define GQJBSelfPlatformRegisterSuccessfulNotification            GQJBProgCSelfPlatformRegisterSuccess
#endif

#ifndef GQJBPlatformPayFailNotification
#define GQJBPlatformPayFailNotification                           GQJBProgCPayFail
#endif

#define GQJBInitializeWithAppId                                     initAppID_gq
#define GQJBIsShowLog                                             isPrintLog_gq
#define GQJBUserLogin                                             login_gq
#define GQJBUserChangeLogin                                       changelogin_gq
#define GQJBUserLogout                                            logout_gq
#define GQJBToken                                                 token_gq
#define GQJBUserUID                                               userID_gq
#define GQJBLoginUserName                                         userName_gq
#define GQJBShowFloatWindow                                         showWindow_gq
#define GQJBDismissFloatWindow                                      dismissWindow_gq
#define GQJBSubmitRoleInfoWithServerid                              submitRole_gq
#define GQJBPayWithMoney                                          doHeleEffect_gq
#define GQJBCheckShowFloat                                          checkFloat_gq
#define GQJBOnClickItem                                           onClickItem_gq

#endif


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GQJBPlatformDefines.h"
#import "GQJBMMObject.h"
#import "GQJBMMRole.h"
//#import <GQJBBaseCode/GQJBBaseCode.h>


@interface GQJBPlatform : NSObject
{
    UIViewController* _tmpFloatUc;
}

+ (GQJBPlatform *)defaultPlatform;

@end

#pragma mark    GQJBPlatform 初始化配置
@interface GQJBPlatform (GQJBConfiguration)

- (void)GQJBInitializeWithAppId:(NSString *)appId appKey:(NSString *)appKey appScheme:(NSString *)appScheme;

- (void)GQJBIsShowLog:(BOOL)isShowLog;
@end

#pragma mark-- 用户部分，登录、注销
@interface GQJBPlatform (GQJBUserCenter)

- (void)GQJBUserLogin;

- (void)GQJBUserChangeLogin;

- (void)GQJBUserLogout;

- (NSString*)GQJBToken;

- (NSString*)GQJBUserUID;

- (NSString *)GQJBLoginUserName;

- (void)GQJBSubmitRoleInfoWithServerid:(GQJBMMRole*)role;


@end

#pragma mark
@interface GQJBPlatform (GQJBHelper)

- (void)GQJBPayWithMoney:(GQJBMMObject*)obj;

- (void)GQJBOnClickItem:(NSString *)title urlStr:(NSString*)urlStr;

- (void)GQJBShowFloatWindow;

- (void)GQJBDismissFloatWindow;

- (BOOL)GQJBCheckShowFloat;

@end
