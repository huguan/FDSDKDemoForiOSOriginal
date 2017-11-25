//
//  FDSDKParameters.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/12.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FDSDKInitModel.h"

typedef NS_ENUM(NSInteger, FDPlatformType) {
    FDPlatformUnknown = 0,
    FDHGPlatform      = 1,          //互冠
    FDLYPlatform      = 2,          //麟游
    FDYHPlatform      = 3,          //银狐
    FDLOPlatform      = 4,          //94玩
    FDLLPlatform      = 5,          //另类
    FDQTPlatform      = 6,          //奇天
    FDEYPlatform      = 7,          //29游
    FDMKPlatform      = 8,          //悠扬
    FDYXMPlatform     = 9,          //游戏猫
    FDSGPlatform      = 10,         //数果
    FDXGPlatform      = 11,          // 雪糕
    FDWoAiWanPlatform = 12           // 我爱玩
};

@interface FDSDKParameters : NSObject

/**
 *  获取HGSDK参数单例
 *
 *  @return HGSDK参数单例对象
 */
+ (FDSDKParameters *)sharedHGSDKParameters;

/**
 *  互冠SDK初始化参数对象
 */
@property (nonatomic, strong) FDHgSDKInitModel *hgSDKInitModel;

/**
 *  麟游SDK初始化参数对象
 */
@property (nonatomic, strong) FDLySDKInitModel *lySDKInitModel;
/**
 *  94玩SDK初始化参数对象
 */
@property (nonatomic, strong) FDLoSDKInitModel *loSDKInitModel;

/**
 *  另类SDK初始化参数对象
 */
@property (nonatomic, strong) FDLLSDKInitModel *llSDKInitModel;
/**
 *  奇天SDK初始化参数对象
 */
@property (nonatomic, strong) FDQTSDKInitModel *qtSDKInitModel;

/**
 *  29游SDK初始化参数对象
 */
@property (nonatomic, strong) FDEYSDKInitModel *eySDKInitModel;
/**
 *  悠扬SDK初始化参数对象
 */
@property (nonatomic, strong) FDMKSDKInitModel *mkSDKInitModel;

/**
 *  游戏猫SDK初始化参数对象
 */
@property (nonatomic, strong) FDYXMSDKInitModel *yxmSDKInitModel;

/**
 *   雪糕SDK初始化参数对象
 */
@property (nonatomic, strong)  FDXGSDKInitModel *xgSDKInitModel;


/**
 *  SDK初始化渠道
 */
@property (nonatomic, assign) FDPlatformType fdPlatformType;

/**
 *  合作商编号
 */
@property (nonatomic, strong) NSString *appId;

/**
 *  游戏密钥
 */
@property (nonatomic, strong) NSString *appKey;



/**
 *  设置为 YES 时，控制台会显示网络请求的数据；设置为 NO 时，控制台不会有网络请求的数据显示
 */
@property (nonatomic, assign) BOOL      debug;


/**
 * @brief 支付宝支付，SSO回调到游戏， 该字段必传，游戏方需要在plist文件中定义 URL Scheme, 传入appScheme
 */

@property (nonatomic, copy) NSString *appScheme;


/**
 *  设置为 YES 时，控制台会显示网络请求的数据；设置为 NO 时，控制台不会有网络请求的数据显示
 */
@property (nonatomic, assign) BOOL      logData;

/**
 *  设置为 YES 时，关闭充值功能；设置为 NO 时，打开充值功能
 */
@property (nonatomic, assign) BOOL closeRecharge;

/**
 *  设置为 YES 时，为充值并兑换道具，平台服务器会给游戏方服务器发送兑换道具成功或失败的消息；设置为 NO 时，为先打开充值页面，给账户充值，将人民币兑换为道具
 */
@property (nonatomic, assign) BOOL longComet;


/**
 *  关闭充值功能的提示语
 */
@property (nonatomic, retain) NSString *closeRechargeAlertMessage;

/**
 *  检查游戏版本更新升级，若检查更新失败（网络错误或因后台报错）是否继续游戏，建议传YES(即：继续游戏，可能跳过强制更新），可根据版本需要传
 */
@property (nonatomic, assign) BOOL  isContinueWhenCheckUpdateFailed;



@end
