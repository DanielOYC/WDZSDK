//
//  WDZAutoGrapViewController.h
//  WDZForAppStore
//  店长和上级签名
//  Created by 夏征宇 on 2018/7/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZBaseFrameView.h"
#import "UIViewController+NavigationBar.h"
#import "WDZBaseViewController.h"
typedef void(^WDZAutoGrapBlock)(NSArray *images);

@interface WDZAutoGrapViewController : WDZBaseViewController

@property (nonatomic , retain)UIView *frameView;

-(instancetype)initWithResultBlock:(WDZAutoGrapBlock)resultBlock;

@end
