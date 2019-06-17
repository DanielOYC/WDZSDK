//
//  WDZNUserListLabelDetailViewController.h
//  WDZForAppStore
//  通讯录标签详情
//  Created by 夏征宇 on 2018/3/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZNUserListConfigModel.h"
#import "WDZNUserListLabelDetailFrameView.h"
#import "WDZNUserListLabelModel.h"

@interface WDZNUserListLabelDetailViewController : WDZBaseViewController

@property (nonatomic , retain)WDZNUserListLabelModel *labelModel;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , retain)WDZNUserListLabelDetailFrameView *frameView;

@end
