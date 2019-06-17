//
//  WDZLocationPatrolViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/13.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

//#import "WDZBaseViewController.h"
#import "UIViewController+NavigationBar.h"
#import "WDZLocationPatrolFrameView.h"
#import "OnsitePatrolShopView.h"
#import "WDZLocationPatrolDoneViewController.h"
#import "WDZBaseViewController.h"

@interface WDZLocationPatrolViewController : WDZBaseViewController

@property (nonatomic , retain)WDZLocationPatrolFrameView *frameView;

/**
 完成巡店的数据
 */
@property (nonatomic , retain)NSDictionary *donePatrolDic;
    
@end
