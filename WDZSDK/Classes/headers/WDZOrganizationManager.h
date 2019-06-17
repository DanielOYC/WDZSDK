//
//  WDZOrganizationManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZUserModel.h"

#import "WDZOrganizationConfigManager.h"

@interface WDZOrganizationManager : NSObject

/**
 组织架构
 config： 配置文件
 iconBlock： 配置文件允许点击头像。获取用户数据
 complete： 获取选择数据
 */
+(void)showOrganizationWithConfig:(WDZOrganizationConfigManager *)config userIconClick:(void(^)(WDZUserModel *userModel))iconBlock complete:(void(^)(NSArray *datas))complete;

@end
