//
//  WDZOrganizationNode.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZShopFrameModel.h"

@interface WDZOrganizationNode : NSObject
/**
 id = "O_162",
	permissionType = "1",
	iconSkin = "country",
	childNum = 0,
	child = 	(
	),
	open = 0,
	attributes = 	{
	},
	isNotGrouped = 0,
	leafOrganize = 0,
	isParent = 1,
	pid = <null>,
	name = "Shoptest",
 */

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, copy) NSString *permissionType;
@property (nonatomic, copy) NSString *iconSkin;
@property (nonatomic, copy) NSString *childNum;
@property (nonatomic, strong) NSArray *child;
@property (nonatomic, assign) BOOL open;
@property (nonatomic, strong) NSArray *attributes;
@property (nonatomic, assign) BOOL isNotGrouped;
@property (nonatomic, assign) BOOL leafOrganize;
@property (nonatomic, assign) BOOL isParent;
@property (nonatomic, copy) NSString *pid;
@property (nonatomic, copy) NSString *name;

/**
 是否是根节点
 */
@property (nonatomic, assign) BOOL isRoot;

/**
 门店
 */
@property (nonatomic, strong) WDZShopModel *shop;

/**
 新门店的展示页
 */
@property (nonatomic, strong) WDZShopFrameModel *frameModel;
/**
 是否子节点真实为空
 */
@property (nonatomic, assign) BOOL isChildEmptyReally;

/**
 组织架构门店选择选择
 */
@property (nonatomic, assign) BOOL organizationSelected;

@end
