//
//  WDZPointTasksForCkeckerFrameView.h
//  WDZStore
//
//  Created by 郑来贤 on 15/1/4.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZShopTaskModel.h"

@protocol WDZPointTasksForCkeckerFrameViewDelegate;
@interface WDZPointTasksForCkeckerFrameView : WDZBaseFrameView

@property (weak , nonatomic) id<WDZPointTasksForCkeckerFrameViewDelegate> delegate;
@property (strong , nonatomic) WDZShopTaskModel *shopTaskModel;

- (void)displayView;
- (void)reload;

@end

@protocol WDZPointTasksForCkeckerFrameViewDelegate <NSObject>

-(void)WDZPointTasksForCkeckerFrameViewOnBackBtnClicked;
-(void)WDZPointTasksForCkeckerFrameViewOnCellDidSelectedWithShopTaskListModel:(NSArray*)shopTasks andIndex:(NSIndexPath *)indexPath;

@end
