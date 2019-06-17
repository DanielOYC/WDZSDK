//
//  JPPD.h
//  JPPersistentData
//
//  Created by ovopark_iOS on 15/12/11.
//  Copyright © 2015年 JaryPan. All rights reserved.

#import <Foundation/Foundation.h>
@interface JPPD : NSObject

// 初始化方法
+ (JPPD *)shareJPPD;

// 存放一条轻量级数据
- (void)writeOneLightweightValue:(id)value forKey:(NSString *)key toTable:(NSString *)tableName block:(void(^)(void))block;

// 删除一条轻量级数据
- (void)deleteOneLightweightValueWithKey:(NSString *)key inTable:(NSString *)tableName;

// 修改一条轻量级数据
- (void)updateOneLightweightValueWithNewValue:(id)newValue forKey:(NSString *)key inTable:(NSString *)tableName;

// 查看一条轻量级数据
- (id)readOneLightweightValueWithKey:(NSString *)key inTable:(NSString *)tableName;

// 写入多条轻量级数据
- (void)writeManyLightweightValuesWithDictionary:(NSDictionary *)dictionary toTable:(NSString *)tableName;

// 删除多条轻量级数据
- (void)deleteManyLightweightValuesWithKeyArray:(NSArray *)keyArray inTable:(NSString *)tableName;

// 修改多条轻量级数据
- (void)updateManyLightweightValuesWithDictionary:(NSDictionary *)dictionary inTable:(NSString *)tableName;

// 查看多条轻量级数据
- (NSDictionary *)readManyLightweightValuesWithKeyArray:(NSArray *)keyArray inTable:(NSString *)tableName;

// 存放一条重量级数据
- (void)writeOneHeavyweightValue:(id)value forKey:(NSString *)key toTable:(NSString *)tableName;

// 删除一条重量级数据
- (void)deleteOneHeavyweightValueWithKey:(NSString *)key inTable:(NSString *)tableName;

// 修改一条重量级数据
- (void)updateOneHeavyweightValueWithNewValue:(id)newValue forKey:(NSString *)key inTable:(NSString *)tableName;

// 查看一条重量级数据
- (id)readOneHeavyweightValueWithKey:(NSString *)key inTable:(NSString *)tableName;

// 写入多条重量级数据
- (void)writeManyHeavyweightValuesWithDictionary:(NSDictionary *)dictionary toTable:(NSString *)tableName;

// 删除多条重量级数据
- (void)deleteManyHeavyweightValuesWithKeyArray:(NSArray *)keyArray inTable:(NSString *)tableName;

// 修改多条重量级数据
- (void)updateManyHeavyweightValuesWithDictionary:(NSDictionary *)dictionary inTable:(NSString *)tableName;

// 查看多条重量级数据
- (NSDictionary *)readManyHeavyweightValuesWithKeyArray:(NSArray *)keyArray inTable:(NSString *)tableName;


@end
