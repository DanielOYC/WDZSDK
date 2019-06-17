//
//  CommonlyUsedShopsView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/16.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OnsitePatrolShopLocatingView.h"
@class CommonlyUsedShopsView;

@protocol CommonlyUsedShopsViewDelegate <NSObject>

@optional
// 点击了某个坐标下的门店记录
- (void)commonlyUsedShopsView:(CommonlyUsedShopsView *)commonlyUsedShopsView didSelectShop:(NSDictionary *)shopInfo atIndex:(NSInteger)index;
// 清空了门店记录
- (void)commonlyUsedShopsViewCleanedRecords:(CommonlyUsedShopsView *)commonlyUsedShopsView;
// 增加了一条记录
- (void)commonlyUsedShopsView:(CommonlyUsedShopsView *)commonlyUsedShopsView didInsertOneRecord:(NSDictionary *)shopInfo atIndex:(NSInteger)index;
// 成功更新了位置信息
- (void)commonlyUsedShopsView:(CommonlyUsedShopsView *)commonlyUsedShopsView didUpdateLocation:(NSDictionary *)location;
// 成功获取了附近的门店
- (void)commonlyUsedShopsView:(CommonlyUsedShopsView *)commonlyUsedShopsView didGetNearbyShops:(NSArray *)nearbyShops;

@end

@interface CommonlyUsedShopsView : UIView

@property (weak, nonatomic) id<CommonlyUsedShopsViewDelegate>delegate;

@property (strong, nonatomic, readonly) NSArray *commonlyUsedShops;

@property (strong, nonatomic) OnsitePatrolShopLocatingView *locatingView;

// 获取常用门店的类方法
+ (NSArray *)commonlyUsedShops;

// 增加一条记录
- (void)addOneRecord:(NSDictionary *)shopInfo; // 如果存在相同的记录，会把记录放到最前面而不会重复存储（最终只保留一个）
- (void)insertOneRecord:(NSDictionary *)shopInfo atIndex:(NSInteger)index; // 不管是否存在相同记录，都会在index位置存入数据

// 删除一条记录
- (void)deleteOneRecord:(NSDictionary *)shopInfo; // 如果存在相同的记录，会把这些记录都删除
- (void)deleteOneRecordAtIndex:(NSInteger)index; // 不管是否存在相同记录，都只会删除index位置的记录

// 删除所有记录
- (void)deleteAllRecords;

// 刷新界面
- (void)reload;

@end
