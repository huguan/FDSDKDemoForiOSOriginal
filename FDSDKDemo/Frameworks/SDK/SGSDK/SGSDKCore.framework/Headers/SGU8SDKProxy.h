//
//  SGU8Proxy.h
//  SGU8Proxy
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SGU8ProductInfo;
@class SGU8DeviceInfo;
@class SGU8UserExtraData;

typedef void (^SGU8RequestCallback)(NSURLResponse* response, id data, NSError* connectionError);

// SGU8SDK回调接口
@protocol SGU8SDKDelegate <NSObject>

-(UIView*) GetView;
-(UIViewController*) GetViewController;

@optional

-(void) OnPlatformInit:(NSDictionary*)params;
-(void) OnUserLogin:(NSDictionary*)params;
-(void) OnUserLogout:(NSDictionary*)params;
-(void) OnPayPaid:(NSDictionary*)params;
-(void) OnEventCustom:(NSString*)eventName params:(NSDictionary*)params;

@end

// SGU8SDK的代理类，用于处理SGU8SDK的回调事件，数据统计，和SGU8Server的通讯
@interface SGU8Proxy : NSObject

@property (strong, nonatomic) NSString* userID;

-(id) init;

-(UIView*) GetView;
-(UIViewController*) GetViewController;

-(void) doPlatformInit:(NSDictionary*)param;
-(void) doUserLogin:(NSDictionary*)param;
-(void) doUserLogout:(NSDictionary*)param;
-(void) doPayPaid:(NSDictionary*)param;
-(void) doCustomEvent:(NSString*)eventName params:(NSDictionary*)param;

// 提交设备统计数据
-(void) submitDeviceInfo:(SGU8DeviceInfo*)device responseHandler:(SGU8RequestCallback)handler;

// 提交用户统计数据
-(void) submitUserInfo:(SGU8UserExtraData*)userlog responseHandler:(SGU8RequestCallback)handler;
 
// 账号验证方法
-(void) AccountValidate:(NSDictionary*)params responseHandler:(SGU8RequestCallback) handler;

-(void) requestOrder:(SGU8ProductInfo*)params responseHandler:(SGU8RequestCallback)handler;

// 充值验证
-(void) PayValidate:(NSDictionary*)params responseHandler:(SGU8RequestCallback)handler;

/// NSDictionary转换为Http的URL参数
+(NSString*) encodeHttpParams:(NSDictionary*)params encode:(NSStringEncoding)encoding;

- (NSURL*) getSGU8ServerUrl:(NSString*)relativePath;

/**
 * @brief 向SGU8Server发送http请求
 * @param httpParams 请求参数
 * @param requestPath 请求的路径
 * @param handler 回调函数
 * @param showprogress 是否显示Loading菊花
 */
-(void) sendHttpRequest:(NSDictionary *)httpParams toSGU8Server:(NSString *)requestPath responseHandler:(SGU8RequestCallback)handler showProgess:(Boolean)showprogress;

@end
