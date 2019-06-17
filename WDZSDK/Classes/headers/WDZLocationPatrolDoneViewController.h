//
//  WDZLocationPatrolDoneViewController.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/7/31.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolDoneView.h"
#import "WDZBaseViewController.h"
@interface WDZLocationPatrolDoneViewController : WDZBaseViewController

@property (nonatomic , retain)WDZLocationPatrolDoneView *doneView;

/**
 是否是远程巡店
 */
@property (nonatomic , assign)BOOL isRemote;


/**
 完成界面显示的信息
 */
@property (nonatomic , retain)NSDictionary *dataDic;

-(instancetype)initWithIsSigle:(BOOL)isSigle;

@end
