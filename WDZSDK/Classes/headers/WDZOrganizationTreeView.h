//
//  WDZOrganizationTreeView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"
#import "WDZOrganizationNode.h"
#import "WDZShopListCell.h"

@interface WDZOrganizationTreeView : WDZTableRefreshView

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;
/**
 是否是跟层级
 */
@property (nonatomic, assign) BOOL isRoot;

@property (nonatomic, strong) WDZOrganizationNode *node;

- (void)loadOrangizationTreeRootNode;

@end
