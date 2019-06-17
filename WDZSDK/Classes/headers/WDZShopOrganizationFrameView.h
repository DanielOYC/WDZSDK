//
//  WDZShopFrameworkView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZShopListCell.h"
@interface WDZShopOrganizationFrameView : WDZBaseFrameView

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

/**
 是否是门店列表主页使用
 */
@property (nonatomic, assign) BOOL isShopListHome;

- (void)loadOrangizationTree;

@end
