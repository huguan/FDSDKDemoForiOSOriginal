//
//  GMMenuItemSwitchModel.h
//  GameCatSDKDemo
//
//  Created by tangzhilin on 12/27/16.
//  Copyright © 2016 西野. All rights reserved.
//

#import "GMHttpModel.h"

@interface GMMenuItemSwitchModel : GMHttpModel

@property(nonatomic,strong) NSString *active;//活动(1开启，2关闭)
@property(nonatomic,strong) NSString *bbs;//论坛(1开启，2关闭)
@property(nonatomic,strong) NSString *giftPackage;//礼包(1开启，2关闭)
@property(nonatomic,strong) NSString *qqLogin;//qq(1开启，2关闭)

@end
