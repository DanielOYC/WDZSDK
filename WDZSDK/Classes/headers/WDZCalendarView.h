//
//  WDZCalendarView.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/10/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  最单纯的日历展示视图

#import <UIKit/UIKit.h>
#import <FSCalendar/FSCalendar.h>

@class WDZCalendarView;

@protocol WDZCalendarViewDelegate <NSObject>

@optional
- (void)calendarView:(WDZCalendarView *)calendarView didSelectDate:(NSDate *)date;

@end

@interface WDZCalendarView : UIView <FSCalendarDelegate,FSCalendarDataSource,FSCalendarDelegateAppearance>

/**
 代理
 */
@property (weak, nonatomic) id <WDZCalendarViewDelegate> delegate;

// FSCalendar
@property (strong, nonatomic) FSCalendar *fsCalendar;

#pragma mark ---------------------- calendarView的一些自定义设置 --------------------------
/**
 最大可展示的日期，默认为FSCalendar设置的2099-12-31
 */
@property (strong, nonatomic) NSDate *maximumDate;

/**
 最小可展示的日期，默认为FSCalendar设置的1970-01-01
 */
@property (strong, nonatomic) NSDate *minimumDate;

/**
 语言区域，默认中国locale = [NSLocale localeWithLocaleIdentifier:@"zh-CN"];
 */
@property (copy, nonatomic) NSLocale *locale;

/**
 滚动方向，默认水平滚动
 */
@property (assign, nonatomic) FSCalendarScrollDirection scrollDirection;

/**
 选中某一天时的填充颜色
 默认为FSCalendar设置的蓝色，此属性与selectionBorderColor互斥，且优先级高于selectionBorderColor
 */
@property (strong, nonatomic) UIColor *selectionFillColor;

/**
 选中某一天时的边框颜色
 默认没有，选中时为selectionFillColor作用，此属性与selectionFillColor互斥，且优先级低于selectionFillColor
 */
@property (strong, nonatomic) UIColor *selectionBorderColor;

/**
 选中时的填充图形或者边框的圆角，默认为0.3，取值为0～1，0代表矩形，1代表圆
 */
@property (assign, nonatomic) CGFloat selectionBorderRadius;

/**
 今天日期对应的文字的未选中颜色，默认为红色
 */
@property (strong, nonatomic) UIColor *todayTextDefaultColor;

/**
 是否显示农历，默认不显示,目前没有实现，先不用
 */
@property (readonly,assign, nonatomic) BOOL isShowLunar;

/**
 周末日期和“日，六”字样的颜色，默认跟普通字体一样
 */
@property (strong, nonatomic) UIColor *weekendColor;

#pragma mark ---------------------- calendarView的一些自定义设置 --------------------------

/**
 当前日历停留的月份
 */
@property (strong, nonatomic) NSDate *currentPageDate;
@end
