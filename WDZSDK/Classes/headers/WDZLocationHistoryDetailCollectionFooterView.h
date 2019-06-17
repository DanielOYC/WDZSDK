//
//  WDZLocationHistoryDetailCollectionFooterView.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/13.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZLocationPatrolSubModel.h"
@interface WDZLocationHistoryDetailCollectionFooterView : UICollectionReusableView


-(CGFloat)disPlayWithModel:(WDZLocationPatrolSubModel *)subModel;

/**
 描述
 */
@property (nonatomic , retain)UILabel *describeLabel;

@property (nonatomic , retain)UIView *timeView;
/**
 考核时间
 */
@property (nonatomic , retain)UILabel *timeLabel;

/**
 经纬度（定位）
 */
//@property (nonatomic , retain)UILabel *locationLabel;

@end
