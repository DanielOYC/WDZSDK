//
//  WDZSamplingFrameView.h
//  WDZStore
//
//  Created by 郑来贤 on 15/4/20.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
@class WDZProblem;
@class WDZProblemList;

@protocol WDZSamplingFrameViewDelegate;
@interface WDZSamplingFrameView : WDZBaseFrameView

@property (weak , nonatomic) id<WDZSamplingFrameViewDelegate> delegate;


- (void)disPlaySamplingViewWithModel:(WDZProblemList *)pros;

- (void)disPlayHeadViewWithTotal:(NSString *)totals andOnlineDevices:(NSString *)onlineDevices;

/**
 *  摇一摇前的提示
 */
- (void)showTipBeforeSnake;

/**
 *  摇一摇后的提示
 */
- (void)showTipAfterSnake;

- (void)hideTipSnakeView;

@end

@protocol WDZSamplingFrameViewDelegate <NSObject>

- (void)frameViewDidBack:(WDZSamplingFrameView *)view;

- (void)frameViewNextSampling:(WDZSamplingFrameView *)view;

- (void)frameViewdidSelectPlay:(WDZSamplingFrameView *)view withPro:(WDZProblem *)pro;

- (void)frameViewdidSelectDown:(WDZSamplingFrameView *)view withPro:(WDZProblem *)pro;

- (void)frameViewdidSelectShare:(WDZSamplingFrameView *)view withPro:(WDZProblem *)pro;

- (void)frameView:(WDZSamplingFrameView *)view didSelectedCell:(WDZProblem *)pro andIndexPath:(NSIndexPath *)path andProblems:(NSArray *)pros;

@end
