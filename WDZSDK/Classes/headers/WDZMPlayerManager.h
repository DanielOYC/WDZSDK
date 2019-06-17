//
//  WDZVideoPlayer.h
//  WDZVideoPlayer
//
//  Created by Hayder on 2017/5/2.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>
#define stepSize 3
#define scaleStepSize 5
typedef NS_OPTIONS(NSUInteger, WDZSwipeGestureRecognizerDirection) {
    WDZSwipeGestureRecognizerDirectionRight = 1 << 0,
    WDZSwipeGestureRecognizerDirectionLeft  = 1 << 1,
    WDZSwipeGestureRecognizerDirectionUp    = 1 << 2,
    WDZSwipeGestureRecognizerDirectionDown  = 1 << 3
};


@class WDZMPlayerManager;

@protocol WDZMPlayerManagerDelegate <NSObject>
/**
 播放成功回调
 */
- (void)minitorPlayer:(WDZMPlayerManager *) manager startPlaySuccess:(UIImage *) keyImage isLive:(BOOL)isLive;

/**
 播放失败回调
 */
- (void)minitorPlayer:(WDZMPlayerManager *) manager withError:(NSDictionary *)error isHiddenStateView:(BOOL) stateView;

@end

@interface WDZMPlayerManager : NSObject
//视频url
@property (nonatomic, strong) NSString *url;

/**
 是否允许声音播放
 */
@property (nonatomic, assign) BOOL isAllowAudio;

/**
 录像的url
 */
@property (nonatomic, strong) NSString *recordUrl;
/**
 每針动画
 */
@property (nonatomic, strong) UIImage *keyImage;

/**
 自动切换频道
 */
@property (nonatomic, getter=isAutoChangeChannel) BOOL autoChangeChannel;

@property (nonatomic, weak) id<WDZMPlayerManagerDelegate> delegate;

- (instancetype)init;

- (void)startLivePlayVideo;

- (BOOL)stopPlayVideo;

- (void)startRecordVideo;

- (BOOL)stopRecordVideo;

//旧PTZ方法
- (void)swipeAndScaleCamerWithUIGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer andStep:(NSArray *)steps;
- (void)swipeAndScaleCamerWithSwipeDirection:(WDZSwipeGestureRecognizerDirection )swipeDirection andStep:(NSArray *)steps;

//移除自动切换频道的定时器
- (void)removeChangeChannelTimer;
@end
