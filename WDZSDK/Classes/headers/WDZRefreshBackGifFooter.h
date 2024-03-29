//
//  WDZRefreshBackGifFooter.h
//  WDZRefreshExample
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "WDZRefreshBackStateFooter.h"

@interface WDZRefreshBackGifFooter : WDZRefreshBackStateFooter
@property (weak, nonatomic, readonly) UIImageView *gifView;

/** 设置state状态下的动画图片images 动画持续时间duration*/
- (void)setImages:(NSArray *)images duration:(NSTimeInterval)duration forState:(WDZRefreshState)state;
- (void)setImages:(NSArray *)images forState:(WDZRefreshState)state;
@end
