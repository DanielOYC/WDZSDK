//
//  WDZMPlayerImageView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/7.
//  Copyright © 2017年 Hayder. All rights reserved.
//  万店掌视频播放的View

#import <UIKit/UIKit.h>

@class WDZMPlayerImageView,WDZMPlayer,WDZMPWaitingview;
@protocol WDZMPlayerImageViewDelegate <NSObject>

/**
 正在进行数字放大
 */
- (void)playerImageView:(WDZMPlayerImageView *)playerImageView ScaleScrollViewDidZoom:(UIScrollView *)scrollView;

@end

@interface WDZMPlayerImageView : UIView
/**
 当前正在播放的视频对象
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 展示播放图片的view
 */
@property (nonatomic, strong) UIImageView *playerView;

@property (nonatomic, strong) WDZMPWaitingview *waitView;

/**
 数字放大的scrollView
 */
@property (nonatomic, strong) UIScrollView *scaleScrollview;

/**
 进行ptz操作的触摸view
 */
@property (nonatomic, strong) UIView *touchView;

@property (nonatomic, weak) id<WDZMPlayerImageViewDelegate> deleagte;

- (void)showWaitingAnimation;

- (void)hiddenWaitingAnimation;

@end
