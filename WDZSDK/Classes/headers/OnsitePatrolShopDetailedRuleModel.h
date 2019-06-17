//
//  OnsitePatrolShopDetailedRuleModel.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/23.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

typedef NS_ENUM(NSInteger, OnsitePatrolShopDetailedRuleCellStatus) {
    OnsitePatrolShopDetailedRuleCellStatusNormal, // 正常状态
    OnsitePatrolShopDetailedRuleCellStatusSelected, // 选中状态
    OnsitePatrolShopDetailedRuleCellStatusDisabled, // 无效状态
};

#import <Foundation/Foundation.h>

@interface OnsitePatrolShopDetailedRuleModel : WDZBaseModel

// 细则名称
@property (copy, nonatomic) NSString *detailedRuleName;

// 细则ID
@property (copy, nonatomic) NSString *detailedRuleID;

// 细则的状态（正常状态/选中状态/无效状态）
@property (assign, nonatomic) OnsitePatrolShopDetailedRuleCellStatus status;

@end
