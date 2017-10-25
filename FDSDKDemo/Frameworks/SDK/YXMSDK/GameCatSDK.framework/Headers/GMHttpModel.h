//
//  GMHttpModel.h
//  GMNetWorking
//
//  Created by tangzhilin on 10/18/16.
//  Copyright © 2016 tangzhilin. All rights reserved.
//

#import "GMBaseObject.h"

@interface GMHttpModel : GMBaseObject

//如果需要手动解析需要在子类重写该方法
-(id)initWithDataDic:(NSDictionary*)data;

@end

@interface GMHttpData : GMHttpModel

@property (nonatomic,assign) NSInteger code;//000代表成功，非0代表失败，是3位数，
@property (nonatomic,strong) NSString *message;//当code非0时，有值
@property (nonatomic,strong) id data;//返回的数据内容，这个会传到派生类去解析。

@end

