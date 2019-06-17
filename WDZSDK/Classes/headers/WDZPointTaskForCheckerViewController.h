//
//  WDZPointTaskForCheckerViewController.h
//  WDZStore
//
//  Created by 郑来贤 on 15/1/4.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZShopTaskModel.h"

@class WDZPointTasksForCkeckerFrameView;
@interface WDZPointTaskForCheckerViewController : WDZBaseViewController

@property (strong , nonatomic) WDZPointTasksForCkeckerFrameView *frameView;

@property (strong , nonatomic) WDZShopTaskModel *shopTaskModel;

@property (strong , nonatomic) NSArray *pointTasks;

@end
