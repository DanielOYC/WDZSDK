//
//  WDZOnsiteHistoryFrameView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/17.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZLocationPatrolDoneViewController.h"
#import "WDZOnsiteHistoryModel.h"
@protocol WDZOnsiteHistoryFrameViewDeleagte;
@interface WDZOnsiteHistoryFrameView : WDZBaseFrameView

@property (nonatomic , assign)id<WDZOnsiteHistoryFrameViewDeleagte>deleagte;

@property (nonatomic , retain)WDZOnsiteHistoryModel *historyModel;
@property (nonatomic , retain)UISearchBar *searchBar;
@property (nonatomic , retain)UIButton *deleteButton;//searchBar 全删

/**
 是否是远程巡店  默认为NO 现场巡店
 */
@property (nonatomic , assign)BOOL isRemote;
@property (nonatomic , retain)NSString *dateString;
/**
 开始时间
 */
@property (nonatomic , retain)NSString *startTime;
/**
 结束时间
 */
@property (nonatomic , retain)NSString *endTime;

@property (nonatomic , retain)NSString *status;//当前的状态

@end

@protocol WDZOnsiteHistoryFrameViewDeleagte <NSObject>

/**
 返回上层
 */
-(void)frameViewDidBackWithFrameView:(WDZOnsiteHistoryFrameView *)frameView;

/**
 选择日期
 */
-(void)frameViewDidChooseDateWithFrameView:(WDZOnsiteHistoryFrameView *)frameView;

@end
