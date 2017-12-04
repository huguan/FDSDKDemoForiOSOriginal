//
//  KCManager.h
//  KCFramework
//
//  Created by huangsite on 16/9/7.
//  Copyright © 2016年 kc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KCManager : NSObject

+ (KCManager *)sharedInstance;

- (void)kCLogin;

/*
 此接口请在 创角 进入游戏 升级 三种情况下调用
 gameccount         游戏账号
 service            服务器名称
 type               游戏类型
 rolename           角色名
 rolelevel          角色等级
 */
- (void)KCRolemeberWithGameaccount:(NSString *)gameccount
                        andService:(NSString *)service
                           andType:(NSString *)type
                       andRolename:(NSString *)rolename
                      andRolelevel:(NSString *)rolelevel;

/*
 gameName       游戏角色
 money          订单金额（单位：元）
 serverid       区服名称
 productname    商品名字
 describe       商品描述
 information    产品内购ID
 attach         扩展参数
*/
- (void)KCPayWithBill:(NSString *)gameName
             andmoney:(NSString *)money
          andserverid:(NSString *)serverid
       andproductname:(NSString *)productname
          anddescribe:(NSString *)describe
       andinformation:(NSString *)information
            andattach:(NSString *)attach;

@end
