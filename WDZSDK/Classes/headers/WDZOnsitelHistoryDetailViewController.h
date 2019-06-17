//
//  WDZOnsitelHistoryDetailViewController.h
//  WDZForAppStore
//  历史详情界面
//  Created by JaryPan on 2017/11/3.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZOnsiteHistoryDetailFrameView.h"
#import "WDZOnsiteHistoryModel.h"
#import "WDZBaseListViewController.h"

@interface WDZOnsitelHistoryDetailViewController : WDZBaseListViewController

@property (nonatomic , retain)WDZOnsiteHistoryDetailFrameView *frameView;

@property (nonatomic , retain)WDZOnsiteHistoryModel *historyModel;

/**
 sourceType=5 在线考评
 */
@property (nonatomic , retain)NSString *sourceType;

@end
