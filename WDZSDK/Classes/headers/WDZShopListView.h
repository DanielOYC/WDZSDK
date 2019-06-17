//
//  WDZShopList.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/9.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"
#import "WDZShopListViewModel.h"
#import "WDZShopListCell.h"

@class WDZShopListView;
@protocol WDZShopListViewDelegate<NSObject>

- (void)shopListDidRefreshView:(WDZShopListView *)listView;

@end

@interface WDZShopListView : WDZTableRefreshView

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

/**是否收藏*/
@property (nonatomic, assign) BOOL isCollected;

@property (nonatomic, strong) WDZShopListViewModel *viewModel;

@property (nonatomic, weak) id<WDZShopListViewDelegate> delegate;

/**
 处理数据 并刷新
 */
- (void)handleDataAndRefresh;

/**
 请求在界面上可见的门店
 */
- (void)requestShopVisibleOnTableview;

@end
