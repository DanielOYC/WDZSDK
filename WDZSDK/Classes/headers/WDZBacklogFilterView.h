//
//  WDZBacklogFilterView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/24.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZBacklogFilterView;
@protocol WDZBacklogFilterViewDelegate <NSObject>

/**
 隐藏filterView
 */
- (void)backLogFileterViewHidden:(WDZBacklogFilterView *)filterView;

/**
 FilterView高度变化  需要更新高度
 */
- (void)backLogFileterViewNeedUpdateHeight:(WDZBacklogFilterView *)filterView;

/**
 点击了开始时间按钮
 */
- (void)backLogFileterView:(WDZBacklogFilterView *)filterView didClickStatrTimeBtn:(UIButton *)button;

/**
 点击了结束时间按钮
 */
- (void)backLogFileterView:(WDZBacklogFilterView *)filterView didClickEndTimeBtn:(UIButton *)button;


@end

@interface WDZBacklogFilterView : UIView

@property (nonatomic, weak) id<WDZBacklogFilterViewDelegate> delegate;

/**
 开始时间
 */
@property (weak, nonatomic) IBOutlet UIButton *startTimeBtn;
/**
 结束时间
 */
@property (weak, nonatomic) IBOutlet UIButton *endTimeBtn;

/**
 创建筛选视图
 */
+ (instancetype)filterView;

/**
 确认FilterView上已选择的
 
 status
 类别 1整改 2复检 4完成
 
 relatedType
 与我相关的 默认-1,1:抄送我的 2:我提出的 4:转发我的
 
 processCount
 流程数 默认-1, 1:1-3次，2:4-7次，4:8次以上
 
 isInvalid
 默认-1,1 未过期 2 已过期 4 即将过期
 
 userIds
 通讯录选择的用户ID
 
 problemClassifyId
 检查项 ID
 
 nodeIds
 门店ID，S_ + 门店ID
 
 startTime
 开始时间
 
 endTime
 结束时间
 */
- (void)sureFilterViewSelecedAndComepletion:(void (^)(BOOL isNeedRefresh,NSInteger status,NSInteger relatedType,NSInteger processCount,NSInteger isInvalid,NSString *userIds,NSString *nodeIds,NSString *startTime,NSString *endTime, NSString *problemClassifyId)) completion;

/**
 根据num来确定选择的状态
 status
 类别 3整改 2复检 4完成
 */
- (void)selectFilterStatusWithNum:(NSString *)num;

/**
 根据num确定撞他
 date 1 未过期 2 已过期 4 即将过期
 */
- (void)selectFilterDateWithNum:(NSString *)num;

/**
 重置筛选条目
 */
- (void)resetFilterMenu;

@end
