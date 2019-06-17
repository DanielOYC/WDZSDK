//
//  WDZNUserListLabelViewController.h
//  WDZForAppStore
//  通讯录标签页
//  Created by 夏征宇 on 2018/3/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZNUserListConfigModel.h"
#import "WDZNUserListLabelFrameView.h"

@interface WDZNUserListLabelViewController : WDZBaseViewController

@property (nonatomic , retain)WDZNUserListLabelFrameView *frameView;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@end
