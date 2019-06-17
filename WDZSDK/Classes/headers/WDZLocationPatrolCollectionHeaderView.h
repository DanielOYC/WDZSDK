//
//  WDZLocationPatrolCollectionHeaderView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"

@protocol WDZLocationPatrolCollectionHeaderViewDelegate;
@interface WDZLocationPatrolCollectionHeaderView : UICollectionReusableView

@property (nonatomic , assign)id<WDZLocationPatrolCollectionHeaderViewDelegate>delegate;

/**
 titleLabel
 */
//@property (nonatomic , retain)UILabel *nameLabel;
@property (nonatomic , retain)UIButton *nameButton;

/**
 是否禁止修改规则
 */
@property (nonatomic , assign)BOOL UnChangeRules;

/**
 备注Label
 */
//@property (nonatomic , retain)UILabel *textLabel;

-(void)disPlayWithModel:(WDZLocationPatrolSubModel *)model;

/**
 修改headerView的状态
 */
-(void)setStatus;


@end


@protocol WDZLocationPatrolCollectionHeaderViewDelegate <NSObject>

-(void)headerViewDidClickIndexWithDic:(NSDictionary *)dic withIndex:(NSInteger)index withHeaderView:(WDZLocationPatrolCollectionHeaderView *)headerView;

@end
