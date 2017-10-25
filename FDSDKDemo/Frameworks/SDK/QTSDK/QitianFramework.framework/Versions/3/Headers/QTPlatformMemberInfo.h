//
//  QTPlatformResult.h
//  DownjoySDK20
//
//  Created by tech on 13-3-6.
//  Copyright (c) 2013年 downjoy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QTPlatformMemberInfo : NSObject<NSCopying>{
//    NSString *_userName;
//    NSString *_nickName;
//    NSString *_token;
//    NSNumber *_memberId;
//    NSNumber *_errorCode;
//    NSString *_errorMsg;
//    NSString *_avatarUrl;
//    NSString *_level;
//    NSString *_gender;
    
}

@property(nonatomic, retain) NSString *userName;
@property(nonatomic, retain) NSString *nickName;
@property(nonatomic, retain) NSString *phoneNumber;
@property(nonatomic, retain) NSString *token;
@property(nonatomic, retain) NSNumber *memberId;
@property(nonatomic, retain) NSNumber *errorCode;
@property(nonatomic, retain) NSString *errorMsg;
@property(nonatomic, retain) NSString *avatarUrl;
@property(nonatomic, retain) NSString *level;
@property(nonatomic, retain) NSString *gender;
@property(nonatomic, retain) NSNumber *isBandNum;

// 1 : login
// 2 : register
// N : others
@property(nonatomic, retain) NSNumber *enterType;

-(QTPlatformMemberInfo *) initWithDict : (NSDictionary *) dict strType : (NSString *) strType;





@end
