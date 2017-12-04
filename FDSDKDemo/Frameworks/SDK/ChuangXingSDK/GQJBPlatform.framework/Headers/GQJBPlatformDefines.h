//
//  GQJBPlatformDefines.h
//  GQJBUserLogin
//
//  Created by Ferryman on 16/9/19.
//  Copyright © 2016年 GQJBia. All rights reserved.
//

#ifndef GQJBPlatformDefines_h
#define GQJBPlatformDefines_h
#import <UIKit/UIKit.h>
#pragma mark - Notification -----------------------------------------------

UIKIT_EXTERN NSString* const GQJBPlatformInitDidFinishedNotification;   //初始化成功
UIKIT_EXTERN NSString* const GQJBPlatformInitFinishedFailNotification;  // 初始化失败
UIKIT_EXTERN NSString* const GQJBPlatformLogoutNotification;            //注销
UIKIT_EXTERN NSString* const GQJBPlatformChoseViewCloseNotification;    //选择关闭
UIKIT_EXTERN NSString* const GQJBPlatformLoginNotification;             //登录

UIKIT_EXTERN NSString* const GQJBPlatformPaySuccessfulNotification;     // 成功
UIKIT_EXTERN NSString* const GQJBPlatformPayFailNotification;           // 失败
UIKIT_EXTERN NSString* const GQJBPlatformGameConnectChanged;

#endif /* GQJBPlatformDefines_h */
