//
//  WDZOrganizationUserListView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZTableRefreshView.h"

#import "WDZUserModel.h"

#import "WDZOrganizationConfigManager.h"

@interface WDZOrganizationUserListView : WDZTableRefreshView

@property (nonatomic, strong) void(^sureBlock)(NSArray *selectArray);

@property (nonatomic, strong) void(^userIconClickBlock)(WDZUserModel *userModel);

-(instancetype)initWithFrame:(CGRect)frame config:(WDZOrganizationConfigManager *)config;

@end
