//
//  WDZCollectionRefreshView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/8/28.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZEmptyView.h"
#import "WDZRefresh.h"

@interface WDZCollectionRefreshView : UIView <UICollectionViewDelegate,UICollectionViewDataSource,UICollectionViewDelegateFlowLayout,WDZEmptyViewDelegate,UIScrollViewDelegate>

@property (nonatomic, strong) WDZEmptyView *emptyView;
/**
 刷新控件部分
 */
@property (nonatomic, assign) NSInteger page;

@property (nonatomic, strong) UICollectionView *collectionView;

@property (nonatomic, strong) NSMutableArray *dataSource;
/**空白界面描述*/
@property (nonatomic, copy) NSString *emptyDescription;

- (instancetype)initWithFrame:(CGRect)frame withLayout:(UICollectionViewLayout *)layout;

/**增加拖拽  子类需要实现collectioView的代理*/
- (void)addDropGestureRecognizer;

/**
 为collection添加头部自定义的View
 */
- (void)addHeaderView:(UIView *)customView Size:(CGSize)customViewSize;

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

- (void)endRefreshing;
- (void)beginRefreshing;
/**
 处理返回的数据
 */
- (void)handleData:(NSArray *)data isRefresh:(BOOL) isRefresh;

/**
 处理请求失败的情况
 */
- (void)handleRequestError;

- (void)handleErrorWithText:(NSString *)text;
@end
