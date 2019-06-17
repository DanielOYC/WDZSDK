//
//  WDZNUserListOrganizerModel.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNUserListOrganizerModel : NSObject

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

/*
id = "O_784",
permissionType = "0",
iconSkin = "uncountry",
childNum = 0,
child =     (
),
open = 0,
attributes =     {
},
isNotGrouped = 0,
leafOrganize = 0,
isParent = 0,
pid = <null>,
name = "万店掌",
*/

@end
