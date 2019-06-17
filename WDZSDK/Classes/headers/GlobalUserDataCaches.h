//
//  GlobalUserDataCaches.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/4/13.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GlobalUserDataCaches : NSObject


// 写入当前用户的行政区域缓存
+ (void)writeAdministrationArrayForCurrentUser:(NSArray *)administrationArray;
// 获取当前用户的行政区域缓存
+ (NSArray *)administrationArrayForCurrentUser;


// 写入当前用户的门店类型缓存
+ (void)writeShopTypeArrayForCurrentUser:(NSArray *)shopTypeArray;
// 获取当前用户的门店类型缓存
+ (NSArray *)shopTypeArrayForCurrentUser;


// 写入当前用户的所有门店model列表缓存（包括设备信息）
+ (void)writeAllShopListModelDictionaryForCurrentUser:(NSDictionary *)allShopListModelDictionary;
// 获取当前用户的所有门店model列表缓存（包括设备信息）
+ (NSDictionary *)allShopListModelDictionaryForCurrentUser;


// 写入当前用户最后一次请求的门店列表数据
+ (void)writeLastShopListModelDictionaryForCurrentUser:(NSDictionary *)lastShopListModelDictionary;
// 获取当前用户最后一次请求的门店列表数据
+ (NSDictionary *)lastShopListModelDictionaryForCurrentUser;


// 写入当前用户的门店列表缓存（不包括设备信息、非model）
+ (void)writeAllShopDicsArrayForCurrentUser:(NSArray *)allShopDicsArray;
// 获取当前用户的门店列表缓存（不包括设备信息、非model）
+ (NSArray *)allShopDicsArrayForCurrentUser;


// 写入当前用户的联系人
+ (void)writeContactPersonsArrayForCurrentUser:(NSArray *)contactPersonsArray;
// 获取当前用户的联系人
+ (NSArray *)contactPersonsArrayForCurrentUser;


// 写入当前用户常用门店列表
+ (void)writeCommonlyUsedShopsArrayForCurrentUser:(NSArray *)commonlyUsedShopsArray;
// 获取当前用户常用门店列表
+ (NSArray *)commonlyUsedShopsArrayForCurrentUser;


@end
