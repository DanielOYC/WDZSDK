//
//  WDZPointsTasksForCheckerViewController.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/5.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZShopTaskModel.h"

@class WDZPointCheckFrameView;

@interface WDZPointCheckViewController : WDZBaseViewController

@property (strong , nonatomic) WDZPointCheckFrameView *frameView;

@property (strong , nonatomic) WDZShopTaskModel *shopTaskModel;

@property (strong , nonatomic) NSArray *pointTasks;

@property (strong , nonatomic) NSNumber *index;

-(void)httpRequestPoints;

@end
