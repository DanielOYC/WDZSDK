//
//  WDZLocationHistoryDrawerView.h
//  WDZForAppStore
//  巡店历史抽屉View
//  Created by 夏征宇 on 2018/1/4.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol WDZLocationHistoryDrawerViewDelegate;

@interface WDZLocationHistoryDrawerView : UIView

@property (nonatomic , assign)id <WDZLocationHistoryDrawerViewDelegate>delegate;

/**
 是否是远程巡店，如果是远程巡店，隐藏提交地点、门店范围内、门店范围外
 */
@property (nonatomic , assign)BOOL isRemote;
/**
 日期
 */
@property (nonatomic , retain)NSString *dateString;
/**
 0 不在范围内  1在范围内  其余为全部
 */
@property (nonatomic , retain)NSString *addressType;

/**
 选中的联系人
 */
@property (nonatomic , retain)NSMutableArray *seleteUsers;

@end

@protocol WDZLocationHistoryDrawerViewDelegate <NSObject>

/**
 选择日期
 */
-(void)DrawerViewDidChooseDateWithDrawerView:(WDZLocationHistoryDrawerView *)drawerView;

-(void)DrawerViewDidChooseUsersWithDraerView:(WDZLocationHistoryDrawerView *)drawerView;

/**
 确定，开始刷新筛选数据
 */
-(void)DrawerViewDidOKButtonActionWithDrawerView:(WDZLocationHistoryDrawerView *)drawerView;
@end
