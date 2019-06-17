//
//  WDZShareModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14-7-17.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

@class WDZShareModelList,WDZShareModel;


typedef void(^getShareModelListBlock)(BOOL isSuccess,WDZShareModelList *shareModelList,NSError *error);
typedef void(^cancleShareModeBlock)(BOOL isSuccess,NSError *error);
typedef void(^addShareModeBlock)(BOOL isSuccess,NSError *error);

typedef void(^getShareModelBlock)(BOOL isSuccess,WDZShareModel *share,NSError *error);

typedef void(^addCollectionBlock)(BOOL isSuccess,NSError *error);
typedef void(^cancleCollectionBlock)(BOOL isSuccess,NSError *error);
typedef void(^getCollectionListBlock)(BOOL isSuccess,WDZShareModelList *shareModelList,NSError *error);
typedef void(^getNearbyCollectionListBlock)(BOOL isSuccess,WDZShareModelList *shareModelList,NSError *error);


#import <Foundation/Foundation.h>
#import "WDZVideoModel.h"
#import "WDZUserInfoModel.h"
#import "WDZCategoryModel.h"
#import "WDZBaseModel.h"

@interface WDZShareModel : WDZBaseModel

@property (strong , nonatomic) WDZVideoModel *video;
@property (strong , nonatomic) WDZCategoryModel *category;
@property (strong , nonatomic) WDZUserModel *user;

@property (strong , nonatomic) NSString *share_id;
@property (strong , nonatomic) NSString *share_description;
@property (strong , nonatomic) NSString *share_name;

// 收藏
@property (assign , nonatomic) BOOL     share_hasFavored;


- (void)cancleShareWithModelID:(NSString *)shareModelID andCompletedBlock:(cancleShareModeBlock)completedBlock;
- (void)addShareWithShareModel:(WDZShareModel *)ShareModel andCompletedBlock:(cancleShareModeBlock)completedBlock;
- (void)getVideoShareInfoWithVideoID:(NSString *)videoId andCompletedBlock:(getShareModelBlock)completedBlock;
- (void)addCollectionWithShareID:(NSString *)share_id andCompletedBlock:(addCollectionBlock)completedBlock;
- (void)cancleCollectionWithShareID:(NSString *)share_id andCompletedBlock:(cancleCollectionBlock)completedBlock;



@end

@interface WDZShareModelList : WDZBaseModel


- (void)getPublicShareModelListWithCategory:(NSString *)category andQuery:(NSString *)query andBeginIndex:(int )index andRequestInterval:(int )interval andCompletedBlock:(getShareModelListBlock)completedBlock;

- (void)getUserShareModelListWithUser:(WDZUserModel *)user andBeginIndex:(int )index andRequestInterval:(int )interval andCompletedBlock:(getShareModelListBlock)completedBlock;

- (void)getCollectionListWithBeginIndex:(int )benginIndex andInterval:(int )interval andCompletedBlock:(getCollectionListBlock)completedBlock;

- (void)getNearbyShareModelListWithBeginIndex:(int )index andRequestInterval:(int )interval andCategory:(NSString *)category andQuery:(NSString * )query andLatitude:(double)latitude andLongitude:(double)longitude andRadius:(NSString *)radius andCompletedBlock:(getNearbyCollectionListBlock)completedBlock;

@end
