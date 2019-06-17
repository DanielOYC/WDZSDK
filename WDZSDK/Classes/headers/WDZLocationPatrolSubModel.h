//
//  WDZLocationPatrolSubModel.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/20.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseModel.h"
#import "WDZNOnsiteSubImageModel.h"
@interface WDZLocationPatrolSubModel : WDZBaseModel

/**
 名称高度,计算得到
 */
@property (nonatomic , assign)CGFloat nameHeight;


/**
 id
 */
@property (nonatomic , retain)NSString *viewShopId;

/**
 名称
 */
@property (nonatomic , retain)NSString *viewShopName;

/**
 细则状态   -1不适用  0不通过 1通过 2 未选
 */
@property (nonatomic , retain)NSString *viewShopStatus;

/**
 描述
 */
@property (nonatomic , retain)NSString *descripTION;

/**
 细则
 */
@property (nonatomic , retain)NSMutableArray *rulesBoList;

/**
 图片列表
 */
//@property (nonatomic , retain)NSArray *pictureList;

/**
 图片列表
 */
@property (nonatomic , strong)NSArray<WDZNOnsiteSubImageModel*> *pictureList;


/**
 创建时间
 */
@property (nonatomic , retain)NSString *recordCreateTime;
/**
 当前分数
 */
@property (nonatomic , retain)NSString *score;
// 奖罚金额
@property (copy, nonatomic) NSString *moneyStr;

/**
 总分
 */
@property (nonatomic , retain)NSString *evaluationScore;

@property (nonatomic , retain)NSArray *seleteAssets;


@end



