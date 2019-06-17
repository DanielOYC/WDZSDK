//
//  WDZNUserListFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZNUserListConfigModel.h"
#import "WDZUserModel.h"

@protocol WDZNUserListFrameViewDelegate;
@interface WDZNUserListFrameView : WDZBaseFrameView

/**
 配置参数
 */
@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , assign)id<WDZNUserListFrameViewDelegate> delegate;
@end
/**
 获取联系人需要遵守本代理
 */
@protocol WDZNUserListFrameViewDelegate <NSObject>

/**
 获取选中的联系人数组
 */
-(void)getUsersArray:(NSMutableArray *)users;
/**
 获取单个选中的联系人
 */
-(void)getSigleUser:(WDZUserModel *)userModel;


/**
 单选模式获取单个联系人

 @param userModel 获取到的联系人
 @param seleteAllBtn 是否选中了全部
 */
-(void)getSigleUser:(WDZUserModel *)userModel withSeleteAllBtn:(BOOL)seleteAllBtn;

/**
 获取多个联系人
 @param users 获取的联系人
 @param seleteAllBtn 是否选中了全部按钮
 */
-(void)getUsersArray:(NSMutableArray *)users WithSeleteAllBtn:(BOOL)seleteAllBtn;

@end
