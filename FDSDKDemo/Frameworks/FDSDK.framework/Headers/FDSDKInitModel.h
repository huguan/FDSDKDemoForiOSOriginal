//
//  FDSDKInitModel.h
//  FDSDK
//
//  Created by 熙文 张 on 2017/01/17.
//  Copyright © 2017年 熙文 张. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FDHgSDKInitModel : NSObject

/**
 *  互冠gameID
 */
@property (nonatomic, strong) NSString *gameID;

/**
 *  互冠payKey
 */
@property (nonatomic, strong) NSString *payKey;

/**
 *  互冠appKey
 */
@property (nonatomic, strong) NSString *appKey;

/**
 *  互冠subID(我方未提供默认可传@"0")
 */
@property (nonatomic, strong) NSString *subID;

/**
 *  微信分享ID
 */
@property (nonatomic, strong) NSString *wxAppId;

/**
 *  互冠tdAppId
 */
@property (nonatomic, strong) NSString *tdAppId;

/**
 *  互冠deAppId
 */
@property (nonatomic, strong) NSString *deAppId;

/**
 *  互冠ttAppId
 */
@property (nonatomic, strong) NSString *ttAppId;

@end

















