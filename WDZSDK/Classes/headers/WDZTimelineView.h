//
//  WDZTimelineView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/22.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#define maxScreenWidthScale 10
#define DayTimeWitdh (1*SCREEN_WIDTH)
#define HourTimeWitdh (6*SCREEN_WIDTH)
#define OneMinuteWidth (32*SCREEN_WIDTH)

#import <UIKit/UIKit.h>
typedef NS_ENUM(NSInteger, timelineViewStyleType) {
    
    timelineViewStyleTypeDay,
    timelineViewStyleTypeHour,
    timelineViewStyleTypeMinute
};
@interface WDZTimelineView : UIView

@property (nonatomic, assign) timelineViewStyleType styleType;
/**
 时间间隔arr
 */
@property (nonatomic, strong) NSMutableArray *intervalTimesArr;

/**
 pos数据
 */
@property (nonatomic, strong) NSArray *posList;

/**
 是否显示Pos数据
 */
@property (nonatomic, assign) BOOL isShowPosData;

@end
