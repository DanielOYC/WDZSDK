//
//  WDZOrganizationShopLsitController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/18.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//  标签列表的门店控制器

#import "WDZBaseViewController.h"
#import "WDZNLabelModel.h"
#import "WDZNShoplistFrameView.h"

@interface WDZOrganizationShopListController : WDZBaseViewController

@property (nonatomic, strong) WDZNLabelModel *infoModel;

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

@end
