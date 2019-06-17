//
//  WDZShopService.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/15.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NetWorkHeader.h"
#import "globalToolHeader.h"
#import "BaseModelHeader.h"
NS_ASSUME_NONNULL_BEGIN

@class WDZShopModel,WDZShopListModel,WDZWeatherInfoModel;
typedef void(^getPeopleCountBlock)(BOOL isSuccess ,WDZShopModel *model, NSError *error );
typedef void(^getShopDetailBlock)(BOOL isSuccess ,WDZShopModel *model, NSError *error );
typedef void(^getPresetsByStoreBlock)(BOOL isSuccess ,WDZShopListModel *modelList, NSError *error );
typedef void(^getShopsBlock)(BOOL isSuccess ,WDZShopListModel *modelList, NSError *error );
typedef void(^addSubscibeBlock)(BOOL isSuccess , NSError *error );
typedef void(^cancleSubscibeBlock)(BOOL isSuccess , NSError *error );
typedef void(^editShopInfoBlock)(BOOL isSuccess , NSError *error );

typedef void(^getEnterpriseTagsBlock)(BOOL isSuccess,NSArray *tags , NSError *error);

typedef void(^uploadShotPicBlock)(BOOL isSuccess, NSError *error);
typedef void(^setUploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);

typedef void(^getShopManagersBlock)(BOOL isSuccess,WDZShopModel *shop, NSError *error);


@interface WDZShopService : NSObject

+ (void)uploadShotPicWithShopID:(NSString *)shopID andImageData:(NSData *)imageData andPointID:(NSString *)pointID andDescription:(NSString *)pic_des andBlock:(uploadShotPicBlock)compeletedBlock andProgress:(setUploadProgressBlock)progressBlock;

/**
 *  获取一个门店里面的详细信息， 这个是为首页使用的
 *
 *  @param compeletedBlock 请求返回
 */
+ (void)getShopDetailWithID:(NSString *)shopId WithBlock:(getShopDetailBlock)compeletedBlock;


/**
 获取店长
 */
+ (void)getShopManager:(WDZShopModel *)shopModel WithBlock:(getShopManagersBlock)compeletedBlock;


/**
 *  获取用户所有店，这个是为了创建问题是选择门店用的
 *
 *  @param compeletedBlock 请求返回的block
 */
+ (void)getAllShopsInShopList:(WDZShopListModel *)listModel WithBeginIndex:(int)beginIndex andInterval:(int)interval andBlock:(getShopsBlock)compeletedBlock;

@end

NS_ASSUME_NONNULL_END
