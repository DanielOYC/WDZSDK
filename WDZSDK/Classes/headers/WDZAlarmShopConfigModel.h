//
//  WDZAlarmShopConfigModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZAlarmShopTargetUserListModel : NSObject
/**
 用户 ID
 */
@property (nonatomic , strong)NSString *userId;
/**
 用户姓名
 */
@property (nonatomic , strong)NSString *userName;

@property (nonatomic , strong)NSString *shortName;

@end

@interface WDZAlarmShopConfigModel : NSObject

/**
 截止日期
 */
@property (nonatomic , strong)NSString *stopDateDep;
/**
 开始日期
 */
@property (nonatomic , strong)NSString *startDateDep;
/**
 开始时间
 */
@property (nonatomic , strong)NSString *startTimeDep;
/**
 结束时间
 */
@property (nonatomic , strong)NSString *stopTimeDep;

//weeksDep = "1,2,3,4,5,6,7",
/**
 重复周期
 */
@property (nonatomic , strong)NSString *weeksDep;

/**
 提醒谁看
 */
@property (nonatomic , strong)NSArray<WDZAlarmShopTargetUserListModel *> *targetUserList;

/**
 是否全部
 */
@property (nonatomic , strong)NSString *all;

@end
