//
//  GMGameCatSDKStart.h
//  GameCatSDKDemo
//
//  Created by 西野 on 16/10/25.
//  Copyright © 2016年 西野. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMWindowLoader.h"

@interface GMGameCatSDKStart : NSObject
/**
 *  SDK初始化，初始化时必须调用该方法
 *
 *  @param environmentType 服务器环境类型（3、连调；5、生产）。必传
 *  @param gameId          游戏Id。必传
 *  @param aes_key         aes加密（3、连调；5、生产）。必传
 *  @param app_key         appKey。必传
 */
+ (void)startGameCatSDK:(NSString *)environmentType gameId:(NSString *)gameId aesKey:(NSString *)aes_key appKey:(NSString *)app_key chlId:(NSString *)chlId;

/**
 *  SDK登录
 *
 * @param isAutoLogin  true：若使用过SDK账号登陆过服务，则不进入登录首页；false:进入登录首页，支持重新输入账号和密码
 * @param loginSuccess   登录成功时回调,必传，通过此代码块获取登录的相关信息，如openId,token
 * @param loginFail      登录失败时回调,可为nil
 * @param switchBlock  //切换账号时，通知游戏退出时回调,不为nil;

 */

+ (void)login:(BOOL)isAutoLogin success:(loginSuccess)loginSuccess fail:(loginFail) loginFail switchBlock:(loginOutBlock)switchBlock;
/**
 *  SDK登出并通知游戏,必须调用，可以在登录后调用
 * @param loginOutBlock 不为nil
 */

+ (void)loginOut:(loginOutBlock)loginOutBlock;

/**
 *  SDK支付，购买道具调用
 *
 * @param productPrice  价格,必填，大于0.1,只有一位小数
 * @param description   产品名称  必填
 * @param codeNo        订单号，与游戏方对账使用，必填
 * @param notifyUrl     支付成功通知地址，必填
 * @param extend        扩展字段，可为nil
 * @param productId     内支付对应的产品ID,必填 //@"SDKProduct6006";
 * @param paySuccess    支付成功时回调
 * @param payFail       支付失败时回调
 */

+ (void)initBaseParameterForProp:(double)productPrice description:(NSString*)description codeNo:(NSString*)codeNo url:(NSString*)notifyUrl ext:(NSString*)extend product:(NSString*)productId success:(paySuccess)paySuccess fail:(payFail)payFail;

@end
