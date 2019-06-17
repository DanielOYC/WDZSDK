//
//  WDZMPBottomBar.h
//  WDZVideoPlayer
//
//  Created by 王振海 on 2017/5/16.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZMPBottomBar;

@protocol WDZMPBottomBarDelegate <NSObject>

- (void)didClickPlayButton:(UIButton *)button isPlay:(BOOL) isPlay;

/**
 切换视频源
 */
- (void)didClickChangeSalveButtonWithTitle:(NSString *)title;

/**
 开关音频按钮
 */
- (void)didClickOpenOrCloseAudioButton:(UIButton *)audioButton;


@end

@interface WDZMPBottomBar : UIView

@property (strong, nonatomic)  UIButton *voiceSwicth;

@property (strong, nonatomic)  UIButton *startButton;

@property (strong, nonatomic)  UISwitch *digtaillargerSwitch;

@property (strong, nonatomic)  UILabel *digtailLabel;
/**
 分辨率按钮
 */
@property (strong, nonatomic)  UIButton *videoResolution;

@property (strong, nonatomic)  UIButton *captureButton;

/**
 锐利体育
 */
@property (nonatomic, strong) UIButton *ruiliButton;

@property (nonatomic, weak) id<WDZMPBottomBarDelegate> delegate;

/**
 隐藏Menu
 */
- (void)dismissMenu;

@end
