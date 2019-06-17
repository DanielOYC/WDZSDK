//
//  WDZPictureCheckCenterFrameView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/2.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZShopTaskModel.h"

@protocol WDZShopTasksForCheckerFrameViewDelegate;

@interface WDZShopTasksForCheckerFrameView : WDZBaseFrameView

//state（0.未点检 1.已完成）
@property (assign , nonatomic)  int shopTaskType;

//是否是自己(0自己，1所有)
@property (assign , nonatomic)  int checkMyself;

@property (weak , nonatomic) id<WDZShopTasksForCheckerFrameViewDelegate> delegate;

- (void)addNewTaskWithTaskID:(NSString *)taskID;

- (void)reloadFrameView;

@end

@protocol WDZShopTasksForCheckerFrameViewDelegate <NSObject>

- (void)WDZShopTasksForCheckerFrameOnBackBtnClicked;

- (void)WDZShopTasksForCheckerFrameViewOnCellDidSelectedWithModel:(WDZShopTaskModel *)shopModel;

@end
