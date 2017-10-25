//
//  SGU8Pay.h
//  SGU8充值／支付接口
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SGU8ProductInfo : NSObject

@property (strong, nonatomic)NSString* orderID;
@property (strong, nonatomic)NSString* productId;
@property (strong, nonatomic)NSString* productName;
@property (strong, nonatomic)NSString* productDesc;

@property (strong, nonatomic)NSNumber* price;
@property NSInteger buyNum;
@property NSInteger coinNum;

@property (strong, nonatomic)NSString* roleId;
@property (strong, nonatomic)NSString* roleName;
@property (strong, nonatomic)NSString* roleLevel;
@property (strong, nonatomic)NSString* vip;
@property (strong, nonatomic)NSString* serverId;
@property (strong, nonatomic)NSString* serverName;
@property (strong, nonatomic)NSString* notifyUrl;
@property (strong,nonatomic)NSString* payUrl;

@property (strong, nonatomic)id extension;

+(instancetype) productFromJsonString:(NSString*)js;
-(instancetype) initWithDict:(NSDictionary*)dict;
-(NSString*) toJsonString;
-(NSDictionary*) toDict;

@end

//SGU8Pay 应用内购接口
@protocol ISGU8Pay

-(void) pay:(SGU8ProductInfo*) profuctInfo;

@optional
-(void) openIAP:(NSDictionary*) params;
-(void) closeIAP;
-(void) finishTransactionId:(NSString*)transactionId;

@end

__attribute__ ((deprecated))
@protocol SGU8Pay
@end
