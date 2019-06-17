//
//  WDZTranspondViewController.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/5/18.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZTranspondFrameView.h"
#import "WDZProblem.h"
@interface WDZTranspondViewController : WDZBaseViewController

@property (strong , nonatomic) WDZTranspondFrameView *frameView;
@property (strong , nonatomic) WDZProblem *problem;
@property (strong , nonatomic) NSIndexPath *cellIndexPath;

@property (nonatomic, strong) void(^commitProblemTranspondBlock)(UIButton *btn, NSString *commitStr);

@end
