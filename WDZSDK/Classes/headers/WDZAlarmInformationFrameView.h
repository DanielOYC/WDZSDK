//
//  WDZAlarmInformationFrameView.h
//  WanDianZhang
//  报警->主页
//  Created by  ovopark_iOS1 on 16/6/6.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZAlarmModel.h"
@protocol WDZAlarmInformationFrameViewDelegate;

@interface WDZAlarmInformationFrameView : WDZBaseFrameView

@property (weak , nonatomic) id<WDZAlarmInformationFrameViewDelegate> delegate;

- (void)reloadOfNetwork;

- (void)reloadOfNative;

@end

@protocol WDZAlarmInformationFrameViewDelegate <NSObject>

- (void)frameViewDidBack:(WDZAlarmInformationFrameView *)view;
- (void)frameViewDidShowAllPros:(WDZAlarmInformationFrameView *)view;


- (void)frameView:(WDZAlarmInformationFrameView *)view didSelectedAlarm:(WDZAlarmModel *)AlarmModel    andAllAlarm:(NSArray *)alarms andIndex:(NSIndexPath *)selectedIndexPath;


@end
