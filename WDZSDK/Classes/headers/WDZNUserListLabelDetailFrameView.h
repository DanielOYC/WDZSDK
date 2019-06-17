//
//  WDZNUserListLabelDetailFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//


#import "WDZBaseFrameView.h"
#import "WDZNUserListLabelModel.h"
#import "WDZNUserListConfigModel.h"

@interface WDZNUserListLabelDetailFrameView : WDZBaseFrameView

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , retain)WDZNUserListLabelModel *labelModel;

@end
