//
//  WDZShopSelectFrameView.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/10.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WDZNavigationBar.h"
#import "WDZRefresh.h"
#import "WDZBaseFrameView.h"
#import "WDZShopModel.h"


@protocol WDZShopSelectFrameViewDelegate;
@interface WDZShopSelectFrameView : WDZBaseFrameView

@property (weak , nonatomic) id <WDZShopSelectFrameViewDelegate >delegate;

@property (strong , nonatomic) WDZShopModel *selectedShop;
/**
 是否有全部门店
 */
@property (nonatomic , assign)BOOL isHaveAll;

@end

@protocol WDZShopSelectFrameViewDelegate <NSObject>

- (void)frameViewDidCancle:(WDZShopSelectFrameView *)v;
- (void)frameViewDidDone:(WDZShopSelectFrameView *)v withShop:(WDZShopModel *)shop;
@end
