//
//  WDZTableViewRefreshView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/28.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZRefresh.h"
#import "WDZEmptyView.h"

@interface WDZTableRefreshView : UIView <UITableViewDelegate,UITableViewDataSource,UIScrollViewDelegate,WDZEmptyViewDelegate>

@property (nonatomic, strong) WDZEmptyView *emptyView;
/**
 刷新控件部分
 */
@property (nonatomic, assign) NSInteger page;

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *dataSource;

/**
 空白界面描述
 */
@property (nonatomic, copy) NSString *emptyDescription;

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

- (void)beginRefreshing;

- (void)endRefreshing;

/**
 处理返回的数据
 */
- (void)handleData:(NSArray *)data isRefresh:(BOOL) isRefresh;

/**
 处理请求失败的情况
 */
- (void)handleRequestError;

/**
 处理数据错误
 */
- (void)handleErrorWithText:(NSString *)text;

@end
