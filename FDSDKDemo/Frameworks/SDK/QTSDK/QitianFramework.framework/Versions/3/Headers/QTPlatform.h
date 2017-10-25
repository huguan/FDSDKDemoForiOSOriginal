//
//  QTPlatform.h
//  DownjoySDK20
//
//  Created by tech on 13-2-28.
//  Copyright (c) 2013年 downjoy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface MyHttpUrl : NSObject


+(id)shard;

@end



@interface QTPlatform : UIViewController<UITextFieldDelegate>

-(void) setAppId : (NSString *) appId;
-(void) setAppKey : (NSString *) appKey;
-(void) setServerId : (NSString *) serverId;
-(void) setTapBackgroundHideView : (BOOL) hidden;
-(void) setAppUrlScheme: (NSString *) appUrlScheme;

-(void) setReYunKey : (NSString *) appKey;

-(void) setSdkDebug : (BOOL) debug;
//-(BOOL) isSdkDebug;

-(void) QTDebug;

/**
 *  QTSDK*登录*
 */
-(void) QTLogin;
/**
 *  获取用户Mid
 *
 *  @return mid
 */
-(NSNumber *) getCurrentMemberId;

/**
 *  获取用户token号
 *
 *  @return token值
 */
-(NSString *) getCurrentToken;
/**
 *  读取用户信息
 */
-(void) QTReadMemberInfo;
/**
 *  注销登录
 */
-(void) QTLogout;
-(void)isShowQTHelper:(BOOL)isShow;

//- (void)QTShow;

/**
 *  判断用户的登录状态
 *
 *  @return YES OR NO
 */
-(BOOL) QTIsLogin;

/**
 *  展示实名认证界面
 */
- (void)showCertificationView;


// save current game and server id
-(void) saveCurrentGameInfo;


/**
 *
 *  @param money      商品价格（float类型，RMB）
 *  @param productid  内购申请的商品ID（内购重要凭证）
 *  @param extInfo    自定义信息，计费结果通知时原样返回（多为CP订单号）
 *  @param playerid   账号uid，角色唯一标识
 *  @param serverid   当前游戏区服ID（即在平台方报备的服务器ID）
 *  @param servername 当前游戏名称
 *  @param rate       单位数商品/价格（如：商品为100钻石 10元，rate= 100/10 = 10）
 */
-(void) NewQTPayment:(float) money appStoreProductid: (NSString *) productid exInfo :(NSString *) extInfo playerid:(NSString *) playerid serverid:(NSString *) serverid servername:(NSString *) servername rate:(int)rate;

//QT平台
+(QTPlatform *) defaultQTPlatform;

/**
 *  状态栏竖向显示
 */
-(void)tranks;


@property(strong,nonatomic) id temp;
@property(strong,nonatomic) UIImage *screen;
@property(nonatomic,assign) BOOL isShowPopView;

//@property(assign,nonatomic) NSArray *dataArrays;


@end
