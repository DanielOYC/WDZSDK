//
//  WDZOrganizationViewController.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZOrganizationConfigManager.h"
#import "WDZUserModel.h"

@interface WDZOrganizationViewController : WDZBaseViewController

@property (nonatomic, strong) WDZOrganizationConfigManager *config;
@property (nonatomic, strong) void(^sureBlock)(NSArray *selectArray);
@property (nonatomic, strong) void(^userIconClickBlock)(WDZUserModel *userModel);

+(instancetype)organizationControllerWithConfig:(WDZOrganizationConfigManager *)config;

@end
