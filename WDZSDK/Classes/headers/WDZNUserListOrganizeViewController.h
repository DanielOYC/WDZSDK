//
//  WDZNUserListOrganizeViewController.h
//  WDZForAppStore
//  通讯录组织架构
//  Created by 夏征宇 on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZNUserListConfigModel.h"
#import "WDZNUserListLabelFrameView.h"
#import "WDZNUserListOrganizeFrameView.h"

@interface WDZNUserListOrganizeViewController : WDZBaseViewController

@property (nonatomic , retain)WDZNUserListOrganizeFrameView *frameView;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@end
