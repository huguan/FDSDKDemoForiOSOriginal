//
//  FingerTipManager.h
//  FingerTipSDK
//
//  Created by wenHao Qiu on 2017/9/25.
//  Copyright © 2017年 QiYiNiao. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FingerTipManager : NSObject

/**
 *  注册SDK
 *
 *  @param company   奇异鸟分配的公司ID (渠道码)
 *  !注意: 请在App启动时调用此方法
 */

+ (void)registerAppWithCompany:(NSString *)company success:(void(^)(void))success failure:(void(^)(NSString *message))failure;

/**
 *
 *   登录接口(包含登录,注册)
 *
 */
+ (void)loginAppSuccess:(void(^) (NSString *username,NSString *userId))success failure:(void(^) (NSString *message))failure;

/**
 *  发起支付 (包含苹果支付与微信支付)
 *
 *  @param productId 苹果内购产品ID
 *  @param userId    付费用户id
 *  @param extend    扩展字段 (注: 可作为游戏订单号,或其他自定义内容传输,sdk服务端会原样返回)
 *  @param notifyUrl 服务端接收支付成功回调通知地址
 *
 */

+ (void)buyWithProductId:(NSString *)productId userId:(NSString *)userId extend:(NSString *)extend notifyUrl:(NSString *)notifyUrl success:(void(^) (NSString * buyType, NSString *message))success failure:(void(^) (NSString *message))failure;

/**
 *  审核判断(单独接入微信支付时使用)
 
 *  @return YES:审核通过／NO:正在审核
 */
+ (BOOL)isThroughTheReview;

/**
 *  发起支付 (只限微信支付)
 
 *  @param goodsName 商品名称
 *  @param price     商品价格(注:以分为单位 1元 = 100分)
 *  @param userId    付费用户id
 *  @param extend    扩展字段 (注: 可作为游戏订单号,或其他自定义内容传输,sdk服务端会原样返回)
 *  @param notifyUrl 服务端接收支付成功回调通知地址
 */
+ (void)buyWithGoodsName:(NSString *)goodsName price:(NSString *)price userId:(NSString *)userId extend:(NSString *)extend notifyUrl:(NSString *)notifyUrl success:(void(^) (NSString * buyType, NSString *message))success failure:(void(^) (NSString *message))failure;

/**
 *  回调入口 (回调微信通过url启动App时传递的数据)
 *
 *  @param url url
 */
+ (void)buyResultWithOpenUrl:(NSURL *)url;

@end
