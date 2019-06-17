//
//  OnsitePatrolShopView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/5/31.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
#import "CommonlyUsedShopsView.h"

@interface OnsitePatrolShopView : WDZBaseFrameView

@property (strong, nonatomic) CommonlyUsedShopsView *commonlyUsedShopsView;

@property (strong, nonatomic) UITableView *tableView;

@end
