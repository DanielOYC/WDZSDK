//
//  WDZUserInfoMode.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-8.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "WDZUserModel.h"
#import "WDZEnterprise.h"

@class WDZUserInfoModel;

@interface WDZUserInfoModel : NSObject
//是否是管理员
@property (nonatomic, assign) BOOL isAdmin;
//是否是超管
@property (nonatomic, assign) BOOL isSuper;
//时间戳，清除缓存
@property (copy , nonatomic)NSString *version;
//企业信息
@property (nonatomic, strong) WDZEnterprise *enterprise;
//用户详情
@property (strong , nonatomic) WDZUserModel *owner;

@property (assign , nonatomic) BOOL updateUserLocationSuccess;

// single
+(WDZUserInfoModel *)shareUserInfoMode;

@end
