//
//  GMSdkInfo.h
//  GameCatSDK
//sdk 信息
//  Created by tangzhilin on 11/8/16.
//  Copyright © 2016 西野. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GMForumData.h"
#import "GMMenuItemSwitchModel.h"

typedef NS_ENUM(NSInteger, GMLoginMode)
{
    GMAutoLoginMode=1,//自动登陆
    GMInputPwdMode,//账号密码登陆
    GMHybirdLoginMode//QQ登陆
};

typedef NS_ENUM(NSInteger, GMRootMode)
{
    GMRootLoginMode=1,//登陆根视图
    GMRootPayMode//支付根视图
};

typedef NS_ENUM(NSInteger, GMSdkPayMode)
{
    SDK_PAY_IAP_MODE = 10,//内支付
    SDK_PAY_OPPOSITE_MODE//第三方支付
};

/*
 object:附加信息
 code：成功的消息码
 desc:成功消息说明
 */
typedef void(^paySuccess)(id object,NSUInteger code,NSString* desc);
/*
 object:附加信息
 error:错误消息
 */
typedef void(^payFail)(id object,NSError* error);

/*
 object:JSON格式,存储openId,{"openId":"sbfsfberhfbk2346234"}
 */

typedef void(^loginOutBlock)(id object);

@interface GMSdkInfo : NSObject

@property (nonatomic,strong) NSString *mock_BaseUrl;//mock
@property (nonatomic,strong) NSString *ucenter_BaseUrl;//用户中心
@property (nonatomic,strong) NSString *ucenter2_BaseUrl;//用户中心2，论坛专用域名
@property (nonatomic,strong) NSString *paycener_BaseUrl;//用户中心2，论坛专用域名
@property (nonatomic,strong) NSString *bbsUrl;//论坛链接
@property (nonatomic,strong) NSString *giftPackageUrl;//礼包链接
@property (nonatomic,strong) NSString *gamecatsdk_BaseUrl;//gamecatsdk
@property (nonatomic,strong) NSString *paysdk_BaseUrl;//paysdk
@property (nonatomic,strong) NSString *wechat_BaseUrl;//wechat
@property (nonatomic,strong) NSString *qq_BaseUrl;//wechat
@property (nonatomic,strong) NSString *aliPay_BaseUrl;//支付宝支付域名
@property (nonatomic,strong) NSString *staticResurce_BaseUrl;//静态资源
@property (nonatomic,strong) NSString *domainDistribution_BaseUrl;//域名下发
@property (nonatomic,strong) NSString *token;//用户token
@property (strong,nonatomic) NSArray* valueArr;//充值
@property (strong,nonatomic) NSDictionary* customValueArr;//充值
@property (nonatomic,strong) NSString *qqAccessToken;//qq授权成功后返回的token
@property (nonatomic,strong) NSDictionary *tokenDic;//用户token字典
@property (nonatomic,strong) NSDictionary *openIdDic;//用户openId字典
@property (nonatomic,assign) GMLoginMode loginMode;//登陆类型
@property (nonatomic,assign) NSString* swichStr;//qq自动登录中是否点击了切换账号,1000表示被点击，1001表示未被点击
@property (nonatomic,strong) NSString *gameId;//游戏id
@property (nonatomic,strong) GMForumData *forumData;//论坛连接所需数据
@property (nonatomic,assign) BOOL floatWindowIsHidden;//浮窗是否隐藏
@property (nonatomic,strong) GMMenuItemSwitchModel *menueItemSwitchModel;//浮窗菜单项相关开关
@property (nonatomic,strong) NSString *externalGameId;//外部初始化接口提供过来的游戏ID
@property (assign,nonatomic) CGFloat keyBoardHeight_por; //键盘的高度
@property (assign,nonatomic) CGFloat keyBoardHeight_land; //键盘的高度
@property (assign,nonatomic) BOOL isShowKeyBoard;//键盘显示
@property (copy,nonatomic) NSString* loginOutStr;//退出登录
@property (copy,nonatomic) NSString* tempLoginOutStr;//退出登录备份

@property (copy,nonatomic) loginOutBlock switchBlock;//切换账号回调

//*****************************************//
@property (nonatomic, copy) NSString *aes_key;
@property (nonatomic, copy) NSString *app_key;
@property (nonatomic, copy) NSString *chlId;

+ (GMSdkInfo *)shareInstance;

/**
 *  修改环境类型
 *
 *  @param servertype 将要设置的环境类型（1、开发；2、测试；3、连调；4、预生产；5、生产）
 */
- (void)modifySeverUrl:(NSInteger)servertype;

/**
 *  返回环境类型
 *
 *  @return 当前环境类型（1、开发；2、测试；3、连调；4、预生产；5、生产）
 */
+ (NSInteger)getServerType;
/**
 *  获取当前token
 *
 *  @return 当前token
 */

- (NSString *)getCurrentUserToken;
/**
 *  获取当前userId
 *
 *  @return 当前userId
 */

- (NSString *)getCurrentUserId;

/**
*  获取当前活动链接地址
*
*  @return 活动链接地址
*/

+ (NSString *)getActicityUrlString;
/**
 *  获取当前游戏的状态
 */
+ (void)getGameState:(loginOutBlock)loginOutBlock;

@end
