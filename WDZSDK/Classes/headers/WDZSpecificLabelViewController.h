//
//  WDZSpecificLabelViewController.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/2/16.
//  Copyright © 2017年 zhenglaixian. All rights reserved.

#import "WDZBaseViewController.h"
#import "WDZSpecificLabelFrameView.h"
#import "WDZProblem.h"

@interface WDZSpecificLabelViewController : WDZBaseViewController

@property (retain , nonatomic)WDZSpecificLabelFrameView *frameView;
@property (retain , nonatomic)WDZProblem *problem;

@property (retain , nonatomic)NSString *type;

@end
