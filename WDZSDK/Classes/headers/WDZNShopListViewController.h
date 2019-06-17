//
//  WDZNShopListViewController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNShoplistFrameView.h"
#import "WDZBaseViewController.h"
@class WDZNShopListViewController,WDZVideoModel;
@protocol WDZNShopListViewControllerDelegate<NSObject>

@optional
- (void)nShopListViewController:(WDZNShopListViewController *)shoplistvc didChooseDevice:(WDZVideoModel *)video;

@end

@interface WDZNShopListViewController : WDZBaseViewController

@property (nonatomic, weak) id<WDZNShopListViewControllerDelegate> delegate;

/**
 是否需要跳到收藏界面
 */
@property (nonatomic, assign) BOOL isNeedToCollection;
/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;
/**
 选择收藏界面
 */
- (void)collectionSelected;

@end
