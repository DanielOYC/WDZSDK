//
//  WDZScrollTimeline.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/22.
//  Copyright © 2017年 Hayder. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "WDZTimelineView.h"

@class WDZScrollTimeline;

@protocol WDZScrollTimelineDelegate <NSObject>

/**
 滑动结束后view
 */
- (void)scrollTimeline:(WDZScrollTimeline *)timeline didEndScrollWithLastTimeString:(NSString *)stratString;

/**
 滑动到了空白处
 */
@optional
- (void)scrollTimelineDidScrollToBlankWithBlankTime;

@end

@interface WDZScrollTimeline : UIView
/**
 业务标志位:是否在回放 解决录像回放时，点击其他天，指针位置会显示在直播的时间，实际仍为回放状态
 */
@property (nonatomic, assign) BOOL isRecord;
@property (nonatomic, copy) NSString *currentYear;
@property (nonatomic, copy) NSString *currentMonth;
@property (nonatomic, copy) NSString *currentDay;

/**
 时间文字显示
 */
@property (nonatomic, strong) UILabel *timeLabel;

/**
 进度条样式
 */
@property (nonatomic, assign) timelineViewStyleType styleType;

/**
 时间间隔arr
 */
@property (nonatomic, strong) NSMutableArray *intervalTimes;

/**
 空白间隔
 */
@property (nonatomic, strong) NSMutableArray *blanks;
/**
 pos数据
 */
@property (nonatomic, strong) NSArray *posDataList;
/**
 是否显示pos数据
 */
@property (nonatomic, assign) BOOL isShowPosData;

/**
 停止滑动的时间
 */
@property (nonatomic, copy ,readonly) NSString *currentScrollTimeStr;

@property (nonatomic, weak) id<WDZScrollTimelineDelegate> delegate;
/**
 根据时间滚动到指定的位置
 */
- (void)scrollToPositionWithData:(NSString *)dataStr;

- (void)startMoving;
- (void)stopMoving;


 
@end
