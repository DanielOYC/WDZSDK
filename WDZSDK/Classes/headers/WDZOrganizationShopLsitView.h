//
//  WDZOrganizationShopLsitView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/18.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"
#import "WDZNLabelModel.h"
#import "WDZNShoplistFrameView.h"
@interface WDZOrganizationShopLsitView : WDZTableRefreshView
/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

@property (nonatomic, strong) WDZNLabelModel *model;


@end
