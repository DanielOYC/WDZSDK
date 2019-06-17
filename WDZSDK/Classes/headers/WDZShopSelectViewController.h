//
//  WDZShopSelectViewController.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/10.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//


#import <UIKit/UIKit.h>
#import "WDZBaseViewController.h"
#import "WDZShopModel.h"

@protocol WDZShopSelectViewControllerDelegate <NSObject>

- (void)didSelectedShop:(WDZShopModel *)shop;

@end

@class WDZShopSelectFrameView;
@interface WDZShopSelectViewController : WDZBaseViewController

@property (nonatomic , assign)BOOL isHaveNoAllBtn;

@property (strong , nonatomic) WDZShopSelectFrameView *frameView;

@property (strong , nonatomic) WDZShopModel *shop;

@property (assign , nonatomic) BOOL isHaveAll;

@property (nonatomic, weak) id<WDZShopSelectViewControllerDelegate> delegate;

@end
