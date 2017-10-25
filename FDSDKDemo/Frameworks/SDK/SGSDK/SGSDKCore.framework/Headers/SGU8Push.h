//
//  SGU8Push.h
//  SGU8SDKCore
//
//  Created by xiezhiyong on 2017/1/10.
//  Copyright © 2017年 SGU8sdk. All rights reserved.
//

#ifndef SGU8Push_h
#define SGU8Push_h

#import <Foundation/Foundation.h>

//分享接口
@protocol ISGU8Push

//  执行通知
-(void)scheduleNotification:(NSString*)args;

//  开始推送
-(void)startPush;

//  停止推送
-(void)stopPush;

//  添加tag
-(void)addTags:(NSString*)tags;

//  删除tag
-(void)removeTags:(NSString*)tag;

//  添加别名
-(void)addAlias:(NSString*)alias;

//  删除别名
-(void)removeAlias:(NSString*)alias;

@end

@interface SGU8Push : NSObject<ISGU8Push>

/// 分享接口实现
@property (strong, nonatomic) NSObject<ISGU8Push>* push;

/// 获取SGU8SDKShare的单例
+(instancetype) sharedInstance;

@end

#endif /* SGU8Push_h */
