//
//  WDZNUserListViewController.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZUserModel.h"
#import "WDZNUserListConfigModel.h"
#import "WDZNUserListLabelFrameView.h"
#import "WDZNUserListFrameView.h"

@protocol WDZNUserListViewControllerDelegate;
@interface WDZNUserListViewController : WDZBaseViewController

@property (nonatomic , retain)WDZNUserListFrameView *frameView;
/**
 配置参数
 */
@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , assign)id<WDZNUserListViewControllerDelegate>VCDelegate;

-(id)initWithConfigModel:(WDZNUserListConfigModel *)config;

@end


@protocol WDZNUserListViewControllerDelegate <NSObject>

@optional
/**
 获取选中的联系人数组
 */
-(void)getUsersArray:(NSMutableArray *)users WithController:(WDZNUserListViewController *)controller;
/**
 获取单个选中的联系人
 */
-(void)getSigleUser:(WDZUserModel *)userModel WithController:(WDZNUserListViewController *)controller;


/**
 获取选中的联系人数组
 */
-(void)getUsersArray:(NSMutableArray *)users WithSeleteAllBtn:(BOOL)seleteAllBtn WithController:(WDZNUserListViewController *)controller;
/**
 获取单个选中的联系人
 */
-(void)getSigleUser:(WDZUserModel *)userModel withSeleteAllBtn:(BOOL)seleteAllBtn WithController:(WDZNUserListViewController *)controller;

@end
