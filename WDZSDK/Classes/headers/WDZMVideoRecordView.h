//
//  WDZMVideoRecordView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/30.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZRecordPosContentView,WDZMPlayer,WDZScrollTimeline,WDZShopModel;
typedef void(^quitDownloadReocrd)();
@interface WDZMVideoRecordView : UIView
/**
 当前需要显示的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

@property (nonatomic, strong) WDZMPlayer *currentPlayer;

// 时间滑动选择视图
@property (nonatomic, strong) WDZScrollTimeline *timelineView;

/**
 取消下载
 */
@property (nonatomic, copy) quitDownloadReocrd quitDownloadEvent;

/**
 门店模型
 */
@property (nonatomic, strong) WDZShopModel *shopModel;

/**
 pos小票详情View
 */
@property (nonatomic, strong) WDZRecordPosContentView *posAndTicketview;

/**
 设置返回直播的按钮
 */
- (void)setBackToLivebutton;

/**
 加载日历
 */
- (void)loadCalender;

/**
 加载进度条
 */
- (void)loadReocrdTimesIsRecord:(BOOL)isRecord;

/**
 重新请求url加载视频
 */
- (void)reloadRecordUrl;
/**
 返回直播
 */
- (void)backToLive;

/**
 动画隐藏时间按钮
 */
- (void)hiddenRecordView;

/**
 动画
 */
- (void)showRecordView;

@end
