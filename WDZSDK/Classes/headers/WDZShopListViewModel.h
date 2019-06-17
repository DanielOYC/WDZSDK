//
//  WDZShopListViewModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/2/13.
//  Copyright © 2017年 wangzhenhai. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZShopModel.h"

@interface WDZShopListViewModel : NSObject

//请求到的原始数组
@property (nonatomic, strong) NSMutableArray *originalarr;
/**
 处理好的所有门店首字母list
 */
@property (nonatomic, strong) NSArray *allFirstCharList;

/**
 处理好的收藏门店首字母list
 */
@property (nonatomic, strong) NSArray *collectionCharList;

/**
 处理好的店铺列表数据
 */
@property (nonatomic, strong) NSMutableArray *shopList;

/**
 处理好的收藏的门店数据
 */
@property (nonatomic, strong) NSMutableArray *collectionShoplist;

/**
 处理好的搜索结果
 */
@property (nonatomic, strong) NSMutableArray *searchResultDataSource;

/**
 搜索的首字母数组
 */
@property (nonatomic, strong) NSMutableArray *searchCharList;
/**
 城市列表
 */
@property (nonatomic, strong) NSArray *citylist;

/**
 是否请求结束
 */
@property (nonatomic, assign) BOOL isrequestFinished;

/**
 获取所有的门店信息
 */
- (void)getAllShopsWithLargerNumeber:(void (^)())requestLargeNumer Processing:(void (^)(NSString *process))processing beiginParaseData:(void (^)())beiginParaseData endParaseData:(void (^)())endParaseData Completion:(void (^)(BOOL isSuccess)) completion;

/**
 按照分页获取门店信息
 */
- (void)getShopsAtIndex:(NSInteger)index num:(NSInteger)num cityID:(NSString *)cityID Completion:(void (^)(BOOL isSuccess)) completion;

//获取门店所在的地区
- (void)getAllCityInAccountAndCompletion:(void (^)(BOOL isSuccess)) completion;

/**
 重新计算shoplist
 */
- (void)reCacleShopLsit;

/**
 处理原始数据
 */
- (void)handleOriginalArr:(NSArray *)originalArr;

/**
 处理搜索的结果
 */
- (void)handleSearchResult:(WDZShopModel *)shop;

/**
 门店列表加载门店设备
 @param indexPathArr Tableview界面上面显示的数据
 @param shoplist 门店数组
 @param startRefresh 开始刷新回调
 @param noNeedRefresh 不需要刷新回调
 @param completion 需要请求执行完毕回调
 */
- (void)loadShopDeviceWithtableviewVisibleCell:(NSArray *)indexPathArr AndShoplist:(NSArray *)shoplist startRefresh:(void (^)())startRefresh  noNeedRefresh:(void (^)()) noNeedRefresh Completion:(void (^)(BOOL isSuccessed)) completion;

/**
 组织列表加载门店设备
 */
- (void)loadShopDeviceOnOrganizationWithVisibleCell:(NSArray *)indexPathArr AndNodelist:(NSArray *)nodelist startRefresh:(void (^)())startRefresh  noNeedRefresh:(void (^)()) noNeedRefresh Completion:(void (^)(BOOL isSuccessed)) completion;

/**
 收藏
 */
+ (void)collectionShopWithID:(NSString *)ID Completion:(void (^)(BOOL isSuccess)) completion;

/**
 取消收藏
 */
+ (void)unCollectionShopWithID:(NSString *)ID Completion:(void (^)(BOOL isSuccess)) completion;


#pragma mark -------------搜索接口-------------------
/**
 根据type搜索门店列表
 */
+ (void)getShopListBySearchType:(NSInteger)type name:(NSString *)name page:(NSInteger)page num:(NSNumber *)num Completion:(void (^)(BOOL isSuccessed,NSArray* shopList))completion;

/**
 设备限制开始播放时
 */
+ (void)deviceLimitWhenPlay:(NSString *)deviceId Completion:(void (^)(BOOL isSuccessed,NSString *errorString,NSError *error)) completion;


//巡店
- (void)getNewOverdueShopsAtIndex:(NSInteger)index num:(NSInteger)num cityID:(NSString *)cityID Completion:(void (^)(BOOL isSuccess)) completion;
@end
