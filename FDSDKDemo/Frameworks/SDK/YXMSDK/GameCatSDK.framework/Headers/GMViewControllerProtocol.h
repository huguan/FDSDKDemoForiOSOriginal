//
//  GMViewControllerProtocol.h
//  EWPLib
//
//  Created by tangzhilin on 11/9/16.
//  Copyright © 2016 andy. All rights reserved.
//

#import <Foundation/Foundation.h>
@class GMBaseViewController;

@protocol GMViewControllerProtocol <NSObject>

@required

/*传递到当前视图的参数函数*/
- (void)argumentForCanvas:(id)argumentData;
@optional

/*Canvas切换接口*/
- (GMBaseViewController *)pushCanvas:(NSString *) canvasName withArgument:(id)argumentData;
- (GMBaseViewController *)popCanvasWithArgment:(id)argument;
- (GMBaseViewController *)popToCanvas:(NSString *) canvasName withArgument:(id)argumentData;
- (GMBaseViewController *)popToRootCanvasWithArgment:(id)argumentData;

@end

