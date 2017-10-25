//
//  GMHttpServer.h
//  GameCatSDK
//
//  Created by wsw on 2017/7/20.
//  Copyright © 2017年 西野. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GMSDKHttpServer : NSObject
/**
 *  同步游戏角色信息
 *
 *  @param roleName         角色名称，必传
 *  @param roleServer       角色区服
 *  @param roleGrade        角色等级
 *  @param roleCamp         角色阵营
 *  @param roleId         角色Id
 *
 *  @param success         成功
 *  @param failure         失败
 */
+ (void)yxm_syncGameRoleInfoWithRoleName:(NSString *)roleName
                              roleServer:(NSString *)roleServer
                               roleGrade:(NSString *)roleGrade
                                roleCamp:(NSString *)roleCamp
                                roleId:(NSString *)roleId
                                 success:(void(^)(id obj))success
                                 failure:(void(^)(id obj))failure;

@end
