//
//  FDSDKInitModel.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDHgSDKInitModel : NSObject

/**
 *  互冠gameId
 */
@property (nonatomic, strong) NSString *gameId;

/**
 *  互冠secretKey
 */
@property (nonatomic, strong) NSString *secretKey;

/**
 *  互冠cpId
 */
@property (nonatomic, strong) NSString *cpId;

/**
 *  互冠channelId
 */
@property (nonatomic, strong) NSString *channelId;

/**
 *  微信分享ID
 */
@property (nonatomic, strong) NSString *wxAppId;

/**
 *  互冠tdAppId
 */
@property (nonatomic, strong) NSString *tdAppId;

/**
 *  互冠deAppId
 */
@property (nonatomic, strong) NSString *deAppId;

@end

@interface FDLySDKInitModel : NSObject

/**
 *  麟游产品id
 */
@property(nonatomic, strong) NSString*      productId;

/**
 *  麟游互动signkey
 */
@property(nonatomic, strong) NSString*  linnyouKey;

/**
 *  麟游channelId
 */
@property (nonatomic, strong) NSString *channelId;


@end

@interface FDLoSDKInitModel : NSObject
/**
 *  94玩Appid
 */
@property(nonatomic, strong) NSString *appId;
/**
 *  94玩Appkey
 */
@property(nonatomic, strong) NSString *appKey;
/**
 *  94玩hotKey
 */
@property (nonatomic, strong) NSString *hotKey;

@end

@interface FDLLSDKInitModel : NSObject
/**
 *  另类appId
 */
@property(nonatomic, strong) NSString *appId;


@end

@interface FDQTSDKInitModel : NSObject
/**
 *  奇天appId
 */
@property(nonatomic, strong) NSString *appId;
/**
 *  奇天appKey
 */
@property(nonatomic, strong) NSString *appKey;

@end
@interface FDEYSDKInitModel : NSObject
/**
 *  29游appId
 */
@property(nonatomic, strong) NSString *appId;
/**
 *  29游appKey
 */
@property(nonatomic, strong) NSString *appKey;
/**
 *  29游subChannelId
 */
@property(nonatomic, strong) NSString *subChannelId;

/**
 *  29游 爱贝appid
 */
@property(nonatomic, strong) NSString *abAppId;

@end

@interface FDMKSDKInitModel : NSObject
/**
 *  悠扬gameId
 */
@property(nonatomic, strong) NSString *gameId;
/**
 *  悠扬subGameId
 */
@property(nonatomic, strong) NSString *subGameId;
/**
 *  悠扬secretKey
 */
@property(nonatomic, strong) NSString *secretKey;
/**
 *  悠扬 热云运营ID
 */
@property(nonatomic, strong) NSString *ryAppId;
/**
 *  悠扬 热云广告KEY
 */
@property(nonatomic, strong) NSString *ryKey;
/**
 *  悠扬 热云渠道ID
 */
@property(nonatomic, strong) NSString *ryChannelID;

@end

/**
 *  游戏猫初始化参数
 */
@interface FDYXMSDKInitModel : NSObject

// 游戏猫 环境标识（@"3" = 联调，@"5" = 线上）
@property(nonatomic, copy) NSString *yxmEnvironment;

// 游戏猫 游戏ID
@property(nonatomic, copy) NSString *yxmGameID;

// 游戏猫 aesKey
@property(nonatomic, copy) NSString *yxmAesKey;

// 游戏猫 appKey
@property(nonatomic, copy) NSString *yxmAppKey;

// 游戏猫 chlId
@property(nonatomic, copy) NSString *yxmChlID;
@end


/**
 *   雪糕SDK初始化参数对象
 */
@interface FDXGSDKInitModel : NSObject

// 雪糕 xgChannel
@property(nonatomic, copy) NSString *xgChannel;

// 雪糕 xgAppid
@property(nonatomic, copy) NSString *xgAppid;

// 雪糕 xgKey
@property(nonatomic, copy) NSString *xgKey;

// 雪糕 xgVersion
@property(nonatomic, copy) NSString *xgVersion;
@end

/**
 *   酬勤（红文SDK）初始化参数对象
 */
@interface FDChouQinSDKInitModel : NSObject

// 酬勤 GameID
@property(nonatomic) int chouQinGameID;

// 酬勤 AppKey
@property(nonatomic, copy) NSString *chouQinAppKey;

// 酬勤 ChannalID
@property(nonatomic) int chouQinChannelID;

@end















