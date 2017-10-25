//
//  SGU8Share.h
//  SGU8Share
//
//  Created by dayong on 15-1-21.
//  Copyright (c) 2015年 SGU8sdk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SGU8ShareInfo : NSObject

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSString*) title;
-(NSString*) content;
-(NSString*) url;
-(NSString*) imgUrl;

-(id)valueForKey:(NSString *)key;
-(void)setValue:(id)value forKey:(NSString *)key;

@end

//分享接口
@protocol ISGU8Share

-(void)share:(SGU8ShareInfo*)params;

@end

//分享组件
@protocol ISGU8ShareComponent

-(NSArray*)supportPlatforms;
-(void)shareTo:(NSString*)platform shareParams:(SGU8ShareInfo*)params;

@end

@interface SGU8Share : NSObject<ISGU8Share>

/// 分享接口实现
@property (strong, nonatomic) NSObject<ISGU8Share>* share;

/// 获取SGU8SDKShare的单例
+(instancetype) sharedInstance;

-(void) registerShareComponent:(NSObject<ISGU8ShareComponent>*)shareComponent;

-(void)share:(SGU8ShareInfo*)params;
-(NSArray*)supportPlatforms;
-(void)shareTo:(NSString*)platform shareParams:(SGU8ShareInfo*)params;

@end
