//
//  LLGameSDKPay.h
//  LLGameSDK
//
//  Created by linglei on 2017/7/20.
//  Copyright © 2017年 linglei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LLGamePayment : NSObject

@property (strong) NSString * LLSerialNumber; //订单唯一标识，sdk使用方生成订单唯一标识 必填
@property (strong) NSString * LLItemID;   //商品编号 必填
@property (assign) NSInteger   LLItemPrice;  //单价，整数，以分为单位 必填
@property (strong) NSString * LLReserved;   //透传字段
@property (strong) NSString *LLOrderDesc;  //订单描述eg:屠龙刀

- (LLGamePayment *)initWithLLSerialNumber:(NSString *)LLSerialNumber andWithLLItemID:(NSString *)LLItemID andWithLLItemPrice:(NSInteger)LLItemPrice andWithLLReserved:(NSString *)LLReserved andWithLLOrderDesc:(NSString *)LLOrderDesc;

@end

@interface LLGameSDKPay : NSObject

+ (LLGameSDKPay *)defaultLLGamePay;

/*
 @breif 发起订单
 @param aPayment 订单信息
 @param IAP 苹果内购的产品ID
 @param view 需要添加到的窗口
 @return 返回0正常进入sdk支付界面， 非0表示sdk支付环境异常，不允许支付，－1为登录有问题，－2为订单不合法
 */
- (int)callLLGamePay:(LLGamePayment *)aPayment andIAPProductID:(NSString *)productID  forView:(UIView *)view;

@end
