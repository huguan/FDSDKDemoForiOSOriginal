//
//  SGU8User.h
//  SGU8User
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//SGU8User 账号登录相关接口
@protocol ISGU8User

- (void) logout;
- (void) switchAccount;

- (BOOL) hasAccountCenter;

@optional
- (void) loginCustom:(NSString*)customData;
- (void) showAccountCenter;

@end

__attribute__ ((deprecated))
@protocol SGU8User
@end
