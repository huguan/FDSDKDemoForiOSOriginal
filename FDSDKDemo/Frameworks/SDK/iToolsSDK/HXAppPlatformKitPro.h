//
//  HXAppPlatformKitPro.h
//  HXAppPlatformKitPro
//
//  Created by teng looyao on 13-5-20.
//
//  V1.5 modified by nigel on 14-3-12
//
//  Copyright (c) 2013年 teng looyao. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef  NS_ENUM(NSUInteger, TSAssistiveTouchViewPlace)
{
    TSAssistiveTouchViewAtMiddleLeft = 0,
    TSAssistiveTouchViewAtMiddleRight,
    TSAssistiveTouchViewAtTopLeft,
    TSAssistiveTouchViewAtTopRight,
    TSAssistiveTouchViewAtBottomLeft,
    TSAssistiveTouchViewAtBottomRight
};

#define TS_DEPRECATED(_version) __attribute__((deprecated("接口已不可用,版本号:"#_version)))

#pragma mark - Notif

/*用户注册完成的通知
 */
#define HX_NOTIFICATION_REGISTER @"HX_NOTIFICATION_REGISTER"                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   

/*用户登录成功的通知，用户自动登录后亦会发此通知
 */
#define HX_NOTIFICATION_LOGIN @"HX_NOTIFICATION_LOGIN"

/*用户注销的通知
 */
#define HX_NOTIFICATION_LOGOUT @"HX_NOTIFICATION_LOGOUT"

/*SDK界面关闭的通知
 */
#define HX_NOTIFICATION_CLOSEVIEW @"HX_NOTIFICATION_CLOSEVIEW"

/*V1.5新增 SDK界面在接入充值界面后，用户选择右上角关闭视图后会先触发HX_NOTIFICATION_CLOSEVIEW的通知，接着会触发以下支付界面关闭的通知
 */
#define HX_NOTIFICATION_CLOSE_PAYVIEW @"HX_NOTIFICATION_CLOSE_PAYVIEW"

/*V1.7 app有可更新的通知
 */
#define HX_NOTIFICATION_UPDATE_APP @"HX_NOTIFICATION_UPDATE_APP"

/*V2.1.0 钱包支付不成功的通知,包含钱包支付失败(余额充足时)以及用户手选 “否” 两种情况
 */
#define HX_NOTIFICATION_WALLET_PAY_FAILED @"HX_NOTIFICATION_WALLET_PAY_FAILED"


@interface HXAppPlatformKitPro : NSObject

#pragma mark - Operate Method

/*! 设置游戏的appId 和 appKey, 合作接入时分配, 可以找联系对接运营获取, 银联支付默认使用银联SDK
 * \param   appId     合作时申请到的应用id
 * \param   appKey    合作时申请到的应用id对应的key
 * 默认developMode为NO
 */
+ (void)setAppId:(int)appId appKey:(NSString *)appKey;


/*! 显示登录界面
 */
+ (void)showLoginView;


/*! 显示平台界面
 */
+ (void)showPlatformView;


/*! 注销登录
 */
+ (void)logout;

+ (void)logoutWithoutNotif;

/*! 消费接口，用于在游戏中购买道具
 * \param   productName  道具名称
 * \param   amount  充值金额 (元)
 * \param   orderIdCom  厂商订单号
 */
+ (void)payProductWithProductId:(NSString *)productId productName:(NSString*)productName Amount:(float)amount OrderIdCom:(NSString *)orderIdCom;


/*! 支付宝钱包回调方法
 * \param   dict     支付宝钱包回传参数
 */
+ (void)alipayCallBack:(NSDictionary *)dict;

/*! 避免引擎将游戏中部分view误加到SDK的window
 *
 */
+ (void)autoAdjustView;

#pragma mark - Setter Method


/*! 设置登录窗口是否可以被关闭
 * \param   enabled 为YES时,登录窗口可被关闭,NO时不允许关闭,此值默认为YES(可以被关闭), 如果不允许关闭登录窗口, 请设置为NO
 */
+ (void)setLoginViewClosedEnabled:(BOOL)enabled;


/*! 设置游戏是否支持自动登录
 * \param   enabled 为YES时,打开游戏则可自动登录,NO时将弹出登陆视图,此值默认为YES(可以被关闭), 如果不允许自动登录, 请设置为NO
 */
+ (void)setSupportAutoLoginEnbled:(BOOL)enabled;


/*! 设置游戏是否支持SDK浮标
 * \param   enabled 为YES时,游戏支持浮标,NO时不支持,此值默认为YES(可以被关闭), 如果不允许支持浮标, 请设置为NO
 */
+ (void)setSupportSDKAssistiveTouchEnbled:(BOOL)enabled;


/*! 设置SDK assistive touch初始化时的位置
 * \param   place为TSAssistiveTouchViewAtMiddleLeft时，位于屏幕中间左侧
 *          place为TSAssistiveTouchViewAtMiddleRight时，位于屏幕中间右侧
 *          place为TSAssistiveTouchViewAtTopLeft时，位于屏幕左上方
 *          place为TSAssistiveTouchViewAtTopRight时，位于屏幕右上方
 *          place为TSAssistiveTouchViewAtBottomLeft时，位于屏幕左下方
 *          place为TSAssistiveTouchViewAtBottomRight时，位于屏幕右下方
 */
+ (void)setSDKAssistiveTouchAtScreenPlace:(TSAssistiveTouchViewPlace)place;

#pragma mark - Getter Method
/*! 获取当前用户ID
 * \return  返回当前用户ID
 */
+ (NSString *)getUserId;


/*! 获取当前用户名
 * \return  返回当前用户名
 */
+ (NSString *)getUserName;


/*! 获取当前用户的SessionId
 * \return 返回当前用户的SessionId
 */
+ (NSString *)getSessionId;


/*! 获取SDK版本号
 * \return SDK版本号
 */
+ (NSString *)getVersion;


#pragma mark - Deprecated Method

/*! 设置视图支持的旋转方向
 * \param   portrait  为YES时支持默认竖屏方向,NO时不支持
 * \param   portraitUpsideDown   为YES时支持向下竖屏方向,NO时不支持
 * \param   landscapeLeft   为YES时支持向左横屏屏方向,NO时不支持
 * \param   landscapeRight  为YES时支持向右横屏屏方向,NO时不支持
 */
+ (void)setSupportOrientationPortrait:(BOOL)portrait portraitUpsideDown:(BOOL)portraitUpsideDown landscapeLeft:(BOOL)landscapeLeft landscapeRight:(BOOL)landscapeRight TS_DEPRECATED(2.5.1);


/*! 设置用户在初次登录或注册页面，是否对应出现显示推荐人信息的输入框，默认为YES
 * \param   show YES时，当初次登录或注册时会显示填写推荐人信息的输入框，登录成功后，以后将不再出现此输入框，即便此值被设置为YES亦不会再次出现; NO时，不会显示填写推荐人信息的相关输入框
 */
+ (void)setRecommendSupportToShow:(BOOL)show TS_DEPRECATED(1.7);


/*! 取消SDK控制App更新功能，改为后台控制
 * \param   enabled YES时开启自动检查更新,NO时关闭自动检查更新
 */
+ (void)setAutoCheckAppUpdateEnabled:(BOOL)enabled TS_DEPRECATED(1.7);


/*! 取消SDK控制App更新功能，改为后台控制
 * \param   enabled YES时开启自动检查更新,NO时关闭自动检查更新
 * \param   force   YES时更新提示窗口仅有确认更新选择项,NO时用户可选择即时更新或稍候更
 */
+ (void)setAutoCheckAppUpdateEnabled:(BOOL)enabled force:(BOOL)force TS_DEPRECATED(1.7);


/*! 手动检查App更新
 */
+ (void)checkAppUpdate TS_DEPRECATED(1.7);


/*! 充值
 * \param   amount  充值金额 (元)
 * \param   orderIdCom  厂商订单号
 */
+ (void)setPayViewAmount:(float)amount orderIdCom:(NSString *)orderIdCom TS_DEPRECATED(2.0);

@end
