//
//  GameCatViewMacro.h
//  GameCatSDKDemo
//
//  Created by 西野 on 16/10/24.
//  Copyright © 2016年 西野. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "GMLoginViewController.h"
#import "GMSdkInfo.h"

/*
 object:附加信息
 code：成功的消息码
 desc:成功消息说明
 */
typedef void(^loginSuccess)(id object,NSUInteger code,NSString* desc);
/*
 object:附加信息
 error:错误消息
 */
typedef void(^loginFail)(id object,NSError* error);


@interface GMWindowLoader : NSObject

@property (nonatomic, assign)GMRootMode rootMode;
@property (nonatomic, strong) UIWindow *SDKWindow;
@property(nonatomic,strong)UIWindow* backgroundView;
@property (nonatomic, weak) GMLoginViewController *loginViewController;
@property (nonatomic, copy)loginSuccess loginSuccess;//对外接口，登录成功回调
@property (nonatomic, copy)loginFail loginFail;//对外接口，登录失败回调
@property(strong, nonatomic) UIImageView* logoImageView; //屏幕logo

+ (instancetype)sharedObject;

+ (void)loadWindow;
//加载任意VC，显示闪屏
+ (void)showBusinessViewController:(UIViewController *)viewController;

//加载任意VC，不显示闪屏
+ (void)showGMViewController:(UIViewController *)viewController;

//关闭SDK窗体
+ (void)dismissBusinessViewController;

+ (void)hide;

+ (void)showBackGroundView;

+ (void)dismissBackGroundView;
//+ (void)adapteScreem;
+ (CGRect)getSDKWindowRectForTransfor;

+ (CGSize)getSDKWindowSizeForTransfor;

+ (CGPoint)getSDKWindowPointForTransfor;

+ (void)setWindowForTestFlag:(BOOL)isTest;
/**
 *  显示闪屏
 */
- (void)showLogoImageView;
/**
 *  删除闪屏
 */
- (void)removeLogoImageView;
/**
 *  是否显示登录窗口
 */
- (void)setShowloadWindow:(BOOL)showload;
/**
 *  获取是否显示窗口
 */
- (BOOL)getShowloadWindow;
/**
 *  隐藏GameWindow
 */
- (void)hideGameWindow:(BOOL)hidden;

@end
