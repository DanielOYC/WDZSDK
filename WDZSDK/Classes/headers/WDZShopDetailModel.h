//
//  WDZShopDetailModel.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZOrganizationNode.h"
@interface WDZShopDetailModel : NSObject

@property (nonatomic , retain)NSString *name;
@property (nonatomic , retain)NSString *detail;
@property (nonatomic , assign)NSInteger tag;
@property (nonatomic , retain)NSString *place;


@property (nonatomic , retain)NSString *startTime;
@property (nonatomic , retain)NSString *endTime;

@property (nonatomic , retain)WDZUserModel *userModel;

@property (nonatomic , retain)NSMutableArray *addressArray;

@property (nonatomic, copy) NSString *salespersonNum;
/**
 选中的组织架构
 */
@property (nonatomic , retain)WDZOrganizationNode *seleteNode;

@end
