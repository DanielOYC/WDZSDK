//
//  WDZShoplistFrameConfig.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OrganizationFunction) {
    OrganizationFunctionShopChoosed,//门店选择
    OrganizationFunctionRemoteShop,//远程巡店
    OrganizationFunctionShoplist, //门店列表
    OrganizationFunctionWorkWorld,  //工作圈专用
};

@interface WDZOrganizationConfig : NSObject

/**
 是否全选
 */
@property (nonatomic, assign) BOOL isAll;

/**
 是否包含设备   default NO
 */
@property (nonatomic, assign) BOOL isContainDevices;

/**
 是否允许多选
 */
@property (nonatomic, assign) BOOL isAllowMultipleChoice;

/**
 组织架构功能 0.门店选择功能 1.远程巡店使用
 */
@property (nonatomic, assign) OrganizationFunction function;

/**
 选择的门店
 */
@property (nonatomic, strong) NSMutableArray *shoplist;

@property (nonatomic, strong) NSMutableDictionary *cacheOriganizationMapping;

/**
 已经选中的
 */
@property (nonatomic, strong) NSMutableDictionary *hasSelectedOrganization;
+ (instancetype)sharedInstance;

@end
