//
//  WDZOrganizationStructureFrameModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/15.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZOrganizationalStructureModel.h"
#import "WDZOrganizationConfigManager.h"

@interface WDZOrganizationStructureFrameModel : NSObject

@property (nonatomic, strong) WDZOrganizationalStructureModel *model;

@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, assign) NSInteger groupIndex;

/**
 存放子节点数据
 */
@property (nonatomic, strong) NSMutableArray *modelDatas;

/**
 存放当前所在数据
 */
@property (nonatomic, strong) NSMutableArray *currentDatas;

/**
 存储子节点用户选中数组
 */
@property (nonatomic, strong) NSMutableArray <WDZUserModel *> *childSelectDatas;

@property (nonatomic, strong) WDZOrganizationStructureFrameModel *father;

@end
