//
//  GameCatViewMacro.h
//  GameCatSDKDemo
//
//  Created by 西野 on 16/10/24.
//  Copyright © 2016年 西野. All rights reserved.
//
//login：638*580(/2)
#ifndef GameCatViewMacro_h
#define GameCatViewMacro_h
#define IAIOS8 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)

/////
#define WS __weak typeof (self)weakSelf = self
#define SS __strong typeof (self)strongSelf = weakSelf
/////
#define GMWINDOWLOADER [GMWindowLoader sharedObject]
#define GMZFBRIDGE [GMPZFBridge sharedObject]
//#define SCALE_SIZE     (ISIPHONE6_PLUS ? 1.13 : (ISIPHONE6 ? 1 : 0.84))
#define FONT_SIZE 0.95
#define distance_x 50
#define NUM @"0123456789"
#define ALPHA @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"
#define ALPHANUM @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"
#define WINDOW_WIDTH ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.width)):(([[UIScreen mainScreen]bounds].size.height)))
#define WINDOW_HEIGHT ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.height)):(([[UIScreen mainScreen]bounds].size.width)))

#define RATE_WIDTH   (WINDOW_WIDTH>750./2||WINDOW_WIDTH==750./2?1:638.0/750)
#define RATE_HEIGHT (WINDOW_HEIGHT>1334./2||WINDOW_HEIGHT==1334./2?1:580.0/1334)
#define RATE_SUB_HEIGHT (WINDOW_HEIGHT>1334./2||WINDOW_HEIGHT==1334./2?1:.8)


#define SDKWINDOW_WIDTH_PERSENT (638.0/750)
#define SDKWINDOW_HEIGHT_PERSENT (580.0/1334)
#define SDKWINDOW_AUTO_WIDTH_PERSENT (340.0/750)
#define SDKWINDOW_AUTO_HEIGHT_PERSENT (280.0/1334)
#define SDKWINDOW_X (56.0/750)
#define SDKWINDOW_Y (340.0/1334)
//#define SDKVIEW_WIDTHT (([[UIScreen mainScreen]bounds].size.width)*SDKWINDOW_WIDTH_PERSENT)
//#define SDKVIEW_HEIGHTT (([[UIScreen mainScreen]bounds].size.height)*SDKWINDOW_HEIGHT_PERSENT)
#define SDKVIEW_WIDTH ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.width)*SDKWINDOW_WIDTH_PERSENT):(([[UIScreen mainScreen]bounds].size.height)*SDKWINDOW_WIDTH_PERSENT))
#define SDKVIEW_HEIGHT ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.height)*SDKWINDOW_HEIGHT_PERSENT):(([[UIScreen mainScreen]bounds].size.width)*SDKWINDOW_HEIGHT_PERSENT))
/////
#define SDKVIEW_AUTO_WIDTH ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.width)*SDKWINDOW_AUTO_WIDTH_PERSENT):(([[UIScreen mainScreen]bounds].size.height)*SDKWINDOW_AUTO_WIDTH_PERSENT))
#define SDKVIEW_AUTO_HEIGHT ([[UIScreen mainScreen]bounds].size.width<[[UIScreen mainScreen]bounds].size.height?(([[UIScreen mainScreen]bounds].size.height)*SDKWINDOW_HEIGHT_PERSENT):(([[UIScreen mainScreen]bounds].size.width)*SDKWINDOW_HEIGHT_PERSENT))
/////
#define LANDSCAPE_SDKWINDOW_WIDTH_PERSENT (638.0/1334)
#define LANDSCAPE_SDKWINDOW_HEIGHT_PERSENT (580.0/750)
#define LANDSCAPE_SDKWINDOW_X (348/1334.)
#define LANDSCAPE_SDKWINDOW_Y (85.0/750.)
#define LANDSCAPE_SDKVIEW_WIDTH (([[UIScreen mainScreen]bounds].size.width)*LANDSCAPE_SDKWINDOW_WIDTH_PERSENT)
#define LANDSCAPE_SDKVIEW_HEIGHT (([[UIScreen mainScreen]bounds].size.height)*LANDSCAPE_SDKWINDOW_HEIGHT_PERSENT)
//////
#define PAY_X_SCALE (95.0/750)
#define PAY_Y_SCALE (357.0/1334.)
#define PAY_WIDTH_SCALE (560.0/750)
#define PAY_HEIGHT_SCALE (620.0/1334)

#define ENV_TYPE 2
#define SDK_HIT_EVENT @"HIDE_LIST"
#define SDK_OFFLINE @"SDK_NO_ONLINE"
#define FROM_BUNDLE 1
#endif /* GameCatViewMacro_h */
