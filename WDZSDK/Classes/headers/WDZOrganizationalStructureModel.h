//
//  WDZOrganizationModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZOrganizationalStructureModel : NSObject

/**
 组织架构名称
 */
@property (nonatomic , retain)NSString *organizationName;
/**
 图标样式
 */
@property (nonatomic , retain)NSString *iconSkin;
//是否是父节
@property (nonatomic , retain)NSString *isParent;
//节点名
@property (nonatomic , retain)NSString *name;
//父节点id
@property (nonatomic , retain)NSString *pid;
//子节点
@property (nonatomic , retain)NSString *childId;
/**
 子节点数量
 */
@property (nonatomic , retain)NSString *childNum;

//是否展开子节点
@property (nonatomic , retain)NSString *open;
//许可类型
@property (nonatomic , retain)NSString *permissionType;
@property (nonatomic , retain)NSString *isNotGrouped;
@property (nonatomic , retain)NSString *leafOrganize;


@end
