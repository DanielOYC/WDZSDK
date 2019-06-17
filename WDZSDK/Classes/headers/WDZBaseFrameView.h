//
//  WDZBaseView.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-6.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZErrorView.h"
@class WDZNavigationBar;

@interface WDZBaseFrameView : UIView <UITableViewDelegate,UITableViewDataSource>

@property (strong , nonatomic) WDZNavigationBar *WDZ_NavigationBar;

//获取当前控制器
- (UIViewController *)getCurrentVC;

@property (nonatomic, strong) NSMutableArray *refreshImages;

/**
 刷新控件部分
 */
@property (nonatomic, assign) NSInteger page;

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) NSMutableArray *datasource;

@property (nonatomic, strong) WDZErrorView *errorView;
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

/**
 处理返回的数据
 */
- (void)handleData:(NSArray *)data isRefresh:(BOOL) isRefresh;


/**
 自定义label

 @param frame frame
 @param color color
 @param text label文字
 @param alignment 文字的位置，居中、居左、居右
 @param font label文字大小
 */
-(UILabel *)getLabelWithFrame:(CGRect)frame withColor:(UIColor *)color withText:(NSString *)text withAlignment:(NSTextAlignment)alignment withFont:(CGFloat)font;

@end
