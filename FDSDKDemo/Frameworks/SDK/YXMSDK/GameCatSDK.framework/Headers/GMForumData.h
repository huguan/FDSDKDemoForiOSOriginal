//
//  GMForumData.h
//  GameCatSDKDemo
//
//  Created by 西野 on 16/12/17.
//  Copyright © 2016年 西野. All rights reserved.
//

#import "GMBaseObject.h"

@interface GMForumData : GMBaseObject

@property(nonatomic,strong) NSString * auth	;//授权token	string
@property(nonatomic,strong) NSString * cookiepre	;//cookie前缀	string
@property(nonatomic,strong) NSString * formhash	;//	string
@property(nonatomic,strong) NSString * saltkey		;//string

@end
