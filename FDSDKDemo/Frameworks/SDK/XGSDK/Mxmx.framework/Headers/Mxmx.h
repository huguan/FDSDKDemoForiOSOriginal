//
//  GameSDK.h
//  GameSDK
//
//  Created by TianFei on 17/4/11.
//  Copyright © 2017年 TianFei. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for GameSDK.
FOUNDATION_EXPORT double MxmxVersionNumber;

//! Project version string for GameSDK.
FOUNDATION_EXPORT const unsigned char MxmxVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <GameSDK/PublicHeader.h>
typedef void(^InitCallBack)(NSDictionary *result);

@interface Mxmx : NSObject<UITableViewDelegate,UITableViewDataSource
        ,UIPickerViewDataSource,UIPickerViewDelegate> {
    UIView *curView;
    UIView *msgView;
    UIView *msgMaskView;
    UIView *maskView;
    NSString *host;
    
    NSString *appId;
    NSString *appKey;
    NSString *channel;
    NSString *bundleId;
    NSString *version;
    NSString *platform;
    
    NSString *token;
    NSString *accountId;
    NSString *isBindPhone;
    
    bool isPhoneLogin;
    int pMode;
    
    NSString *curAccount;
    NSString *curPhone;
    NSString *curPassword;
    
    InitCallBack      callBack;
    
    NSString* accountKey;
    NSString* accountKeyPhone;
    NSString* loginType;
    
    NSString* loginKey1;
    NSString* loginKey2;
    NSString* loginKey3;
    
    // 170804 added by wsl
    NSString* languageKey;
    NSString* typeKey1;
    NSString* typeKey2;
    NSString* fontKey;
    
    NSArray* showAccountData;
    NSMutableDictionary* accountList;
    NSMutableDictionary* accountListPhone;
    
    IBOutlet UITextField *tfAccount;
    IBOutlet UITextField *tfPassWord;
    
    IBOutlet UITextField *tfPhoneNumber;
    IBOutlet UITextField *tfPhonePassWord;
    IBOutlet UITextField *tfPhonePassWordConfirm;
    IBOutlet UITextField *tfPhoneToken;
    IBOutlet UILabel *txtMessage;
    
    IBOutlet UITextField *tfLoginAccount;
    IBOutlet UITextField *tfLoginPassword;
    
    IBOutlet UILabel *labOneKeyAccount;
    IBOutlet UILabel *labOneKeyPassword;
    IBOutlet UILabel *labAccount;
    
    IBOutlet UITableView *tvAccountList;
    IBOutlet UILabel *labServerName;
    IBOutlet UILabel *labRoleName;
    IBOutlet UILabel *labProductName;
    IBOutlet UILabel *labAmount;
    
    IBOutlet UIButton *bt1;
    IBOutlet UIButton *bt2;
    IBOutlet UIButton *bt3;
    
    IBOutlet UIButton *btGoPhoneRegister;
    IBOutlet UIButton *btGoPhoneLogin;
    IBOutlet UIButton *btGoBindPhone;
    IBOutlet UILabel *labBindPhone2;
    IBOutlet UILabel *labBindPhone;
    
    IBOutlet UIButton *btGetToken;
    IBOutlet UIButton *btLoginClose;
    IBOutlet UIButton *btLogout;
    
    IBOutlet UILabel *labInfo;
    IBOutlet UIWebView *myWeb;
    IBOutlet UILabel *labVersion;
    
    // 170807 added by wsl
    IBOutlet UIPickerView *pvLanguage;
    IBOutlet UIImageView *ivBackGround;
    IBOutlet UILabel *labAccoutTitle;
    IBOutlet UILabel *labPasswordTitle;
    
    NSMutableData *receivedData;
    
    NSString* productId;
    NSString* orderId;
    NSString* notify_url;
    NSString* extraParam;
    
    NSString* productName;
    NSString* amount;
    NSString* serverName;
    NSString* roleName;
    NSString* sdk_trade_no;
    NSString* mapping;
    
    NSString* curLayerName;
    NSString* curTel;
    NSString* curToken;
}


+ (Mxmx *)defaultService;

-(void) initSDK:(NSString*)_channel withAppId:(NSString*)_appId withKey:(NSString*)_appKey withVersion:(NSString*)_version callback:(InitCallBack)initCbk;
-(void) showLogin;

-(void) logout;
-(void) showUserCenter;
-(void) hideUserCenter;
-(void) showUserCenterInfo;

-(void) enableLog:(bool)enable;
-(void) logInfo:(NSString *)format, ...;

-(void) setLandscape;
-(void) setLoginCloseButtonHide:(bool)hide;
-(void) setLogoutButtonHide:(bool)hide;
-(void) setLogoutNeedConfirm:(bool)need;

-(void)onWorkOk:(NSString *)status;
-(bool)checkReceipt:(NSString*)receipt withBillNo:(NSString*)billNo;

-(void) work:(NSString*)_mapping withProductName:(NSString*)_productName withServerName:(NSString*)_serverName withRoleName:(NSString*)_roleName withOrderId:(NSString*)_orderId withNotifyUrl:(NSString*)_notify_url withExtraParam:(NSString*)_extraParam;

-(UIImage*)getImage:(NSString*)imgName;
@end
