//
//  WDZMPlayer.h
//  WDZVideoPlayer
//
//  Created by 王振海 on 2017/5/16.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZMPlayerManager.h"
#import "WDZMPBottomBar.h"

@class WDZVideoModel;

typedef NS_ENUM(NSInteger, operationType) {
    
    operationTypeNeeds,//可以操作
    operationTypeNone //只能观看
};

typedef NS_ENUM(NSInteger, sceneType) {
    
    sceneTypeDefault,//默认
    sceneTypeRemote //远程巡店进入
};

@class WDZMPlayer;

@protocol WDZMPlayerDelegate <NSObject>

/**
 播放器播放成功
 */
@optional
- (void)mplayer:(WDZMPlayer *)player startPlaySuccess:(UIImage *)keyImage isLive:(BOOL)isLive;

/**
 播放器播放失败
 */
@optional
- (void)mplayer:(WDZMPlayer *)player withError:(NSDictionary *)error isHiddenStateView:(BOOL)stateView;

/**
 切换了视频
 */
- (void)mplayer:(WDZMPlayer *)player didChangedVideo:(WDZVideoModel *)videoModel;

/**
 达到上限的回调
 
 limitDevice: 达到最上限  关闭切换视频按钮
 
 */
- (void)mplayerDidChangedVideoLimitMaxDevice:(BOOL) limitDevice;

@end

@interface WDZMPlayer : UIView

@property (nonatomic, strong) WDZMPBottomBar *bottomBar;

@property (nonatomic, weak) id<WDZMPlayerDelegate> delegate;

/**
 当前需要显示的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 videoModels数组
 */
@property (nonatomic, strong) NSArray *videoList;

/**
 正在播放使用的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *currentVideoModel;

/**
 用来展示图片的scrollView
 */
@property (nonatomic, strong) UIScrollView *showImageScrollView;


@property (nonatomic, assign) operationType type;
/**
 场景类型
 */
@property (nonatomic, assign) sceneType scenetype;
/**
 获取正在播放的帧图片
 */
@property (nonatomic, strong, readonly) UIImage *keyImage;

/**
 是否接收到了录像
 */
@property (nonatomic, assign) BOOL isReceiveRecord;
/**
 是否是直播
 */
@property (nonatomic, assign, readonly) BOOL isMPlayLive;
/**
 针对  锐利从门店入口控制播放中按钮参数
 */
@property (nonatomic, assign) BOOL isFromShopList;

/**
 拼接直播url
 */
- (void)getURLWithvideo:(WDZVideoModel *)videoModel;

/**
 录像url
 */
- (void)playRecordingWithUrl:(NSString *)recordUrl;

/**
 播放直播
 */
- (void)mplay;

/**
 停止播放直播
 */
- (void)mstop;

/**
 隐藏工具栏
 */
- (void)hiddenBottonViewAndPtzView;

@end
