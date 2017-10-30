//
//  EYSDK.h
//  EYSDK
//
//  Created by User on 15/10/16.
//  Copyright (c) 2015年 User. All rights reserved.
//



#import <UIKit/UIKit.h>

#define HFSDK_U3D_SCRIPT_NAME @"HFSDKGameObject"
#define HFSDK_U3D_FUNCTION_INIT_NAME @"HFSDKInitFunction"
#define HFSDK_U3D_FUNCTION_LOGIN_NAME @"HFSDKLoginFunction"
#define HFSDK_U3D_FUNCTION_LOGOUT_NAME @"HFSDKLogoutFunction"
#define HFSDK_U3D_FUNCTION_PAYSIGN_NAME @"HFSDKPaySignFunction"

#define HFSDK_U3D_FUNCTION_GET_CHANNELID @"HFSDKGetChannelId"
#define HFSDK_U3D_FUNCTION_GET_SUBCHANNELID @"HFSDKGetSubChannelId"
#define HFSDK_U3D_FUNCTION_GET_APPID @"HFSDKGetAppId"
#define HFSDK_U3D_FUNCTION_GET_CHANNEL @"HFSDKGetChannel"
#define HFSDK_U3D_FUNCTION_GET_VERSION @"HFSDKGetVersion"

#define EYSDK_PayResult @"EYSDK_PayResult" //支付结果通知，


extern NSString *const K_HF_LOGIN_SID;
extern NSString *const K_HF_LOGIN_UID;

typedef enum{
    HFSDKInterfaceOrientationMaskLandscape, //横屏
    HFSDKInterfaceOrientationMaskPortrait, //竖屏
}HF_INTERFACE_ORIENTATION_MASK_E;

@protocol EYSDKDelegate <NSObject>
@required
-(void)SDKinitCallBack;
-(void)LoginCallBack:(NSDictionary *)dict;
-(void)LogOutCallBack:(NSDictionary *)dict; //此参数有可能为空
@end

@interface EYSDK : NSObject

@property (nonatomic,assign) id<EYSDKDelegate>delegate;
@property (nonatomic,assign) BOOL isRelease;
/**
 *@brief 初始化SDK信息
 *@return 生成一个EYSDK的单例对象
*/
+(EYSDK*)getInstance;


-(void)initSDKWithDelegate:(id<EYSDKDelegate>)delegate
                      appId:(NSString *)appId
                     appKey:(NSString *)appKey
               subChannelId:(NSString*)subChannelId
                  isRelease:(BOOL)isRelease;


/**
 * @brief     弹出登录页面
*/
-(void)login;

/**
 * @brief     注销
*/
-(void)logOut;

/**
 * @brief     获取appKey
 */
-(NSString*)getAppKey;
/**
 * @brief     获取当前用户sid
 * @return    返回当前用户sid
*/
 
-(NSString*)getSID;

/**
 * @brief     获取当前用户suid
 * @return    返回当前用户uid
 */

-(void)getUid:(void (^)(NSString *uid))completionBlock;


-(NSString*)getUserId;
/**
 * @brief     获取channelId
 * @return    channelId
*/
-(int)getChannelId;

/**
 * @brief     获取subChannelId
 * @return    subChannelId
*/
-(int)getSubChannelId;

-(NSString*)getHandleChannle;
/**
 * @brief     获取appId
 * @return    appId
*/
-(NSString *)getAppId;
/**
 * @brief     获取channel
 * @return    channel
*/
-(NSString *)getChannel;

/**
 * @brief     获取version
 * @return    version
*/
-(NSString *)getVersion;

/**
 * @brief     获取登录状态
 * @return    Bool
 */
-(BOOL)getLoginState;




/**
 @brief 获取z774410aa54484a3d2197b17274a390d2m
*/
-(NSString *)z30e28df9f0bb09043f753b3678acc2efm;

/**
 @brief 获取zcdd67ab5b1cc974e0eafe3571976fba9m
*/
-(NSString *)z5b73acf1b19cc7003ecf2ce9a3ea57ffm;

-(void)ejinitGameInfoWithRoleId:(NSString*)roleId roleName:(NSString*)roleName roleLevel:(NSString*)roleLevel zoneId:(NSString*)zoneId  zoneName:(NSString*)zoneName dataType:(NSString*)dataType  ext:(NSString*)ext;



-(void)ejWithIiibbbeeiiUserId:(NSString*)userId roleId:(NSString*)appUserID roleName:(NSString*)roleName waresId:(NSString*)waresId price:(NSString*)price number:(NSString*)number waresName:(NSString*)waresName cpPrivateInfo:(NSString*)cpPrivateInfo;

@end
