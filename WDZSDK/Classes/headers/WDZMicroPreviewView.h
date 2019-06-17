//
//  WDZMicro previewPreviewView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/6/6.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "WDZAVKitOption.h"

@class WDZMicroPreviewView;
@protocol WDZMicroPreviewViewDelegate <NSObject>

@optional
- (void)microPreviewViewDidClickBackBtn:(WDZMicroPreviewView *)microPreviewView;
@optional
- (void)microPreviewViewDidClickSureBtn:(WDZMicroPreviewView *)microPreviewView;
@optional
- (void)microPreviewViewDidClickEditBtn:(WDZMicroPreviewView *)microPreviewView;

@end

@interface WDZMicroPreviewView : UIView
{
    NSURL   *_videoURL;
    AVPlayerItem    *_playItem;
    AVPlayerLayer   *_playerLayer;
    BOOL            _isPlaying;
    
    CGRect          _selfFrame;
}

@property (nonatomic, strong) AVPlayerLayer *playerLayer;

@property (strong, nonatomic) AVPlayer *player;

@property (nonatomic, strong) WDZAVKitOption *option;
/**
 视频的路径
 */
@property (nonatomic, strong) NSString *filePath;

/**视频的实际秒数*/
@property (nonatomic, assign) NSInteger currentTime;

@property (nonatomic, weak) id<WDZMicroPreviewViewDelegate> delegate;

/**
 布局按钮
 */
- (void)layoutBtns;

- (void)hideBottomBtns;

- (void)showBottomBtns;

- (void)stop;
- (void)resume;

@end
