//
//  LYRole.h
//  LYGameSDK
//
//  Created by LG on 17/9/22.
//  Copyright © 2017年 LG. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LYRole : NSObject

@property(nonatomic,retain) NSString *roleName;         //角色名称
@property(nonatomic,retain) NSString *roleLever;        //角色等级
@property(nonatomic,retain) NSString *roleId;           //角色Id
@property(nonatomic,retain) NSString *serverId;         //服务器Id
@property(nonatomic,retain) NSString *serverName;       //服务器名称

//huguan
@property(nonatomic,retain) NSString *roleMoney;        //角色剩余游戏币
@property(nonatomic,retain) NSString *extar;            //扩展信息(可不传)
@property(nonatomic,retain) NSString *payLevel;         //充值等级

//bingniao
@property(nonatomic,retain) NSString *uid;              //二次验证UID
@property(nonatomic,retain) NSString *vipLevel;         //VIP等级
@property(nonatomic,retain) NSString *productCount;     //商品兑换比
@property(nonatomic,retain) NSString *productName;      //商品名称

//yuhouyi（同VIP等级）
@property(nonatomic,retain) NSString *accountId;        //游戏账号ID
@property(nonatomic,retain) NSString *region;           //是否专区(默认为0)

@end
