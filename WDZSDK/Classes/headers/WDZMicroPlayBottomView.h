//
//  WDZMicroPlayBottomView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/6/7.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZMicroPlayBottomView;
@protocol WDZMicroPlayBottomViewDelegate<NSObject>

/**
 slider滑动代理
 */
- (void)bottomBarSliderTouchDown:(WDZMicroPlayBottomView *)bottomBar;

/**
 slider滑动代理
 */
- (void)bottomBarSliderTouchUpInside:(WDZMicroPlayBottomView *)bottomBar;
/**
 slider滑动代理
 */
- (void)bottomBar:(WDZMicroPlayBottomView *)bottomBar sliderChanged:(float) value;

/**
 状态栏点击了开关按钮
 */
- (void)bottomBarDidClickSwitchButton:(UIButton *)button;

@end

@interface WDZMicroPlayBottomView : UIView

@property (strong, nonatomic) UILabel *currentTime;

@property (strong, nonatomic) UILabel *totalTime;

@property (strong, nonatomic) UISlider *seekProgress;

@property (strong, nonatomic) UIButton *startButton;

@property (assign, nonatomic) NSTimeInterval duration;

@property (nonatomic, weak) id<WDZMicroPlayBottomViewDelegate> delegate;

+ (instancetype) bottomView;

@end
