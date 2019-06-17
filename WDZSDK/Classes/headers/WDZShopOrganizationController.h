//
//  WDZShopFrameworkController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizationConfig.h"
#import "WDZShopListCell.h"
#import "WDZBaseViewController.h"
@interface WDZShopOrganizationController : WDZBaseViewController

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

/**
 设置模式

 @param isContainDevice 是否包含设备
 @param isAllowMultipleChoice 是否可以多选
 */
- (void)setContaindveices:(BOOL) isContainDevice multipleChoice:(BOOL) isAllowMultipleChoice OrganizationFunc:(OrganizationFunction)func;

@end
