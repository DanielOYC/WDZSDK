//
//  WDZCityDAO.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/27.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZCityDAO : NSObject

/**
 添加shop所在地
 */
+ (void)saveShopCity:(NSArray *)city;

/**
 获取所有的门店
 */
+ (NSMutableArray *)getAllShopCities;

@end
