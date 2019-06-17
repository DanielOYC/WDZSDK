//
//  WDZAlarmAllFrameView.h
//  WanDianZhang
//  报警->全部
//  Created by  ovopark_iOS1 on 16/6/12.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZAlarmModel.h"

@protocol WDZAlarmAllFrameViewDelegate;
@interface WDZAlarmAllFrameView : WDZBaseFrameView

@property (weak , nonatomic) id<WDZAlarmAllFrameViewDelegate> delegate;

@property (nonatomic , retain)UIButton *cancleButton;

- (void)reloadOfNetwork;

- (void)reloadOfNative;
@end

@protocol WDZAlarmAllFrameViewDelegate <NSObject>
- (void)frameViewDidBack:(WDZAlarmAllFrameView *)view;
- (void)frameViewDidCancleButton:(WDZAlarmAllFrameView *)view;
- (void)frameView:(WDZAlarmAllFrameView *)view didSelectedAlarm:(WDZAlarmModel *)alarmModel andAllAlarms:(NSArray *)alarms andIndex:(NSIndexPath *)selectedIndexPath;

@end
