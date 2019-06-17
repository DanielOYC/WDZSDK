//
//  WDZLocationHistoryDetailCollectionHeaderView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/13.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"

@interface WDZLocationHistoryDetailCollectionHeaderView : UICollectionReusableView

-(CGFloat)disPlayWithModel:(WDZLocationPatrolSubModel *)subModel;

/**
 点检项
 */
@property (nonatomic , retain)UIButton *nameButton;
/**
 点检结果
 */
@property (nonatomic , retain)UILabel *statusLabel;
/**
 得分
 */
@property (nonatomic , retain)UILabel *scoreLable;
// 奖罚金额
@property (strong, nonatomic) UILabel *rewardAndPunishLabel;

/**
 细则
 */
@property (nonatomic , retain)UIView *detailView;


@end
