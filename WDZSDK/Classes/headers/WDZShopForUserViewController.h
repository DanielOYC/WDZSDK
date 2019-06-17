//
//  WDZShopSelectViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 17/2/21.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZShopForUserFrameView.h"
@interface WDZShopForUserViewController : WDZBaseViewController

@property (nonatomic ,strong) WDZShopForUserFrameView *frameView;
@property (nonatomic ,strong) NSString *userId;
@property (nonatomic ,strong) NSArray *rolesArr;
@property (nonatomic ,strong) NSString *permissionArr;
@property (nonatomic ,retain) NSString *titleString;
//已经选中的门店
@property (nonatomic , strong) NSMutableArray *selectedArray;

//是否是选择门店进行标签设置
@property (nonatomic ,assign) BOOL isLabel;

@end
