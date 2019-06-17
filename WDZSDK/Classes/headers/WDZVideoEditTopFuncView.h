//
//  WDZVideoEditTopFuncView.h
//  Test
//
//  Created by Daniel on 2018/7/25.
//  Copyright © 2018年 Daniel. All rights reserved.
//  视频编辑界面顶部功能容器视图（取消，完成按钮）,高度44

#import <UIKit/UIKit.h>

@interface WDZVideoEditTopFuncView : UIView

// 取消事件回调
@property (copy, nonatomic) void (^cancelBlock)();
// 完成事件回调
@property (copy, nonatomic) void (^completeBlock)();


@end
