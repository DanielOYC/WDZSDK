//
//  WDZAlarmCategoryMenuView.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/6/13.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAlarmModel.h"

@protocol WDZAlarmCategoryMenuViewDelegate;
@interface WDZAlarmCategoryMenuView : UIView

@property (strong , nonatomic) WDZAlarmCategory *selectedAlarmCategory;

@property (weak , nonatomic) id <WDZAlarmCategoryMenuViewDelegate>delegate;

- (void)reload;

@end

@protocol WDZAlarmCategoryMenuViewDelegate <NSObject>

- (void)alarmCategoriesMenuView:(WDZAlarmCategoryMenuView *)v didSelectedCategory:(WDZAlarmCategory *)category;


@end
