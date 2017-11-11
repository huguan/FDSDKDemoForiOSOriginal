//
//  LYPayModel.h
//  LYGameSDK
//
//  Created by LG on 17/9/22.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYPayModel : NSObject

@property(nonatomic,retain) NSString *itemName;         //商品名称
@property(nonatomic,retain) NSString *itemId;           //商品id
@property(nonatomic,assign) int amount;                 //商品金额
@property(nonatomic,retain) NSString *callBackInfo;     //透传信息
@property(nonatomic,retain) NSString *detail;           //商品描述

@property(nonatomic,retain) NSString *roleName;         //角色名称
@property(nonatomic,retain) NSString *roleId;           //角色Id
@property(nonatomic,retain) NSString *serverId;         //服务器Id
@property(nonatomic,retain) NSString *serverName;       //服务器名称

@property(nonatomic,assign) int itemCount;              //商品对换数量
@property(nonatomic,retain) NSString *level;            //角色等级
@property(nonatomic,retain) NSString *vipLevel;         //角色VIP等级

@end
