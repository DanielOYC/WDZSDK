//
//  WDZRangePickerCalendarCell.h
//  Test
//
//  Created by Daniel on 2018/11/26.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import <FSCalendar/FSCalendar.h>

@interface WDZRangePickerCalendarCell : FSCalendarCell

// 开始/结束选中时的显示layer
@property (weak, nonatomic) CALayer *selectionLayer;

// 开始，结束中间段的显示layer
@property (weak, nonatomic) CALayer *middleLayer;

@end
