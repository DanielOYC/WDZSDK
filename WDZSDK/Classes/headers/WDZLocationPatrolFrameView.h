//
//  WDZLocationPatrolFrameView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/13.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
#import "CommonlyUsedShopsView.h"

@interface WDZLocationPatrolFrameView : UIView

/**
 常用门店
 */
@property (nonatomic , strong)CommonlyUsedShopsView *commonlyUsedShopsView;

@property (nonatomic , strong)UITableView *tableView;

@end
