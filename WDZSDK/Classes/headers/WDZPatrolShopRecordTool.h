//
//  WDZPatrolShopRecordTool.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/2/20.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZPatrolShopRecordTool : NSObject

/**
 保存记录
 */
+ (void)savePatrolRecord:(NSDictionary *)recoed WithShopID:(NSString *)shopID;
/**
 获取记录
 */
+ (NSDictionary *)getPatrolRecordWithShopID:(NSString *)shopID;
/**
 删除记录
 */
+ (void)removePatrolRecordWithShopID:(NSString *)shopID;

+ (BOOL)isExperience;
+ (void)saveExperienceState:(BOOL) isExperience;

@end
