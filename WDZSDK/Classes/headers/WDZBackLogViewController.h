//
//  WDZBackLogViewController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZBackLogFrameView.h"

@interface WDZBackLogViewController : WDZBaseViewController

/**
 推送过来的问题  需要跳转到详情中
 */
@property (nonatomic, strong) NSNumber *alterTag;

/**
 展示的界面  用于首页界面选择
 */
@property (nonatomic, assign) showBackLogList backlogListType;

@end
