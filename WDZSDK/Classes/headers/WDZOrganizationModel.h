//
//  WDZOrganizationModel.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/2/24.
//  Copyright © 2017年 zhenglaixian. All rights reserved.

#import "WDZBaseModel.h"
#import "WDZOrganizationModel.h"

@interface WDZOrganizationModel : WDZBaseModel
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
@property (nonatomic , retain)NSString *nodeName;
//父节点id
@property (nonatomic , retain)NSString *pid;
//子节点
@property (nonatomic , retain)NSString *childId;
//是否展开子节点
@property (nonatomic , retain)NSString *open;
//许可类型
@property (nonatomic , retain)NSString *permissionType;
//是否有返回图片
@property (nonatomic , assign)BOOL isHaveImage;


- (WDZOrganizationModel *)initModelWithDic:(NSDictionary *)dic;
@end
