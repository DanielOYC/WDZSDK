//
//  WDZNUserListHeaderView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/17.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "WDZNUserListConfigModel.h"

@protocol WDZNUserListHeaderViewDelegate;
@interface WDZNUserListHeaderView : UIView

/**
 配置Model
 */
@property (nonatomic , retain)WDZNUserListConfigModel *configModel;


@property (nonatomic , assign)id<WDZNUserListHeaderViewDelegate>delegate;

@property (nonatomic , assign)BOOL isSeleteAll;

/**
 搜索后的 veiw
 */
@property (nonatomic , strong)UIView *searchAllView;

@end

@protocol WDZNUserListHeaderViewDelegate <NSObject>

/**
 点击了全部按钮
 */
-(void)clickAllButtonWithButton:(UIButton *)sender;

/**
 点击了搜索后的全部按钮
 */
-(void)clickSearchAllClick:(UIButton *)btn;

/**
 刷新主界面
 */
-(void)reloadFrameViewTableView;

@end
