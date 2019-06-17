//
//  WDZBackLogFilterBar.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/23.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBLFilterBarButton.h"

typedef NS_ENUM(NSInteger, filterButtontype) {

    filterButtontypeCreateTime,
    filterButtontypeSessionTime,
    filterButtontypeClausesButton,
    filterButtontypeFilterButton
    
};
@class WDZBackLogFilterBar;
@protocol WDZBackLogFilterBarDelegate <NSObject>

- (void)backLogFilter:(WDZBackLogFilterBar *)filterBar didClickButton:(UIButton *)button type:(filterButtontype)type;

@end

@interface WDZBackLogFilterBar : UIView

@property (weak, nonatomic) IBOutlet UIButton *startTime;
@property (weak, nonatomic) IBOutlet UIButton *sessionTime;
/**
 条目按钮
 */
@property (weak, nonatomic) IBOutlet UIButton *clausesButton;
/**
 筛选按钮
 */
@property (weak, nonatomic) IBOutlet UIButton *filterButton;

/**
 整改条数
 */
@property (weak, nonatomic) IBOutlet UILabel *rectificationNum;

@property (nonatomic, weak) id<WDZBackLogFilterBarDelegate> delegate;

/**
 设置角标条目
 */
//- (void)setEdgeNum:(NSInteger) num;



+ (instancetype)backLogFilterBar;

@end
