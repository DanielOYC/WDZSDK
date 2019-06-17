//
//  WDZBaseListViewController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/11/6.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZBaseListViewController : WDZBaseViewController<UITableViewDelegate,UITableViewDataSource>

/**
 刷新控件部分
 */
@property (nonatomic, assign) NSInteger page;

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *datasource;

/**
 添加头部视图刷新
 */
- (void)addHeaderRefresh;
/**
 添加尾部视图刷新
 */
- (void)addFooterRefresh;

- (void)loadData;

- (void)loadMoreData;

@end

NS_ASSUME_NONNULL_END
