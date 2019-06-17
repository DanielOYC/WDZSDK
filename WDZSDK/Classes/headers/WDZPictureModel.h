//
//  WDZPictureModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14-6-23.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZBaseModel.h"

@class WDZPictureListModel;
typedef void(^WDZGetUserShotPictureCompletedBlock)(BOOL isSuccess,WDZPictureListModel *pictureListModel,NSError *error);

@interface WDZPictureModel : NSObject


/**
   图片或图片文件夹的ID
 */
@property (strong , nonatomic) NSString *pictureOrFolder_ID;

/**
   当前目录下是否含有子文件夹（1：有 0：没有）
 */
@property (assign , nonatomic) BOOL hasChildFolder;

/**
  是否是文件夹，(1:文件夹,  0:图片)
 */
@property (assign , nonatomic) BOOL isFolder;

/**
 名称
 */
@property (strong , nonatomic) NSString *name;

/**
 如果是文件夹，还包含如下属性： 直接子文件夹，子文件数量
 */
@property (strong , nonatomic) NSString *children;

/**
 如果是文件夹，还包含如下属性：文件大小 
 */
@property (strong , nonatomic) NSString *fileSize;

/**
 如果是文件夹，还包含如下属性：评论数量
 */
@property (strong , nonatomic) NSString *commentNum;

/**
 如果是文件夹，还包含如下属性：创建时间
 */
@property (strong , nonatomic) NSString *createTime;

/**
 如果是文件夹，还包含如下属性：描述
 */
@property (strong , nonatomic) NSString *content;

/**
 如果是文件夹，还包含如下属性：缩略图URL
 */
@property (strong , nonatomic) NSURL *thumbnailUrl;

/**
 如果是文件夹，还包含如下属性：原图URL
 */
@property (strong , nonatomic) NSURL *photoUrl;
// 图片中心用来判断图片是否被选择
@property (nonatomic, assign) BOOL isSelected;



@end


@interface WDZPictureListModel : WDZBaseModel

/**
 如果是文件夹，还包含如下属性：图片总数
 */
@property (strong , nonatomic) NSString *totol;

/**
 获取图片或图片文件夹的数组
 */
@property (strong , nonatomic) NSArray *pictureOrFolderArray;

/**
 相簿数组，包含系统相簿与个人相簿
 */
@property (strong, nonatomic) NSMutableArray <NSMutableArray *> * albumDatas;



/**
删除单张图片

 @param picId 图片ID
 @param completeBlock 完成回调
 */
- (void)deleteOnePictureFromServerWithPicId:(NSString *)picId completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;


/**
 获取
 */
-(void)getShotPictureFromServerWithParentId:(NSString *)parentId andIndex:(int )index andNum:(NSString *)num andCompletedBlock:(WDZGetUserShotPictureCompletedBlock)completedBlock;

- (void)getPhotoListDatasWithNodeIds:(NSString *)nodeIds presetNameId:(NSInteger)presetNameId pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize startTime:(NSString *)startTime endTime:(NSString *)endTime andCompleteBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;


/**
 获取相簿

 @param enterprisedId 企业ID
 @param completeBlock 完成回调
 */
- (void)getAlbumsWithEnterpriseId:(NSInteger)enterprisedId completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;

/**
 删除相簿

 @param albumId 相簿ID
 @param completeBlock 完成回调
 */
- (void)deletAlbumWithAlbumId:(NSInteger)albumId completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;

/**
 添加新相簿或者修改相簿

 @param enterprisedId 企业ID
 @param albumId 类型，0新增，!=0修改
 @param albumName 相簿名字
 */
- (void)editAlbumWithEnterpriseId:(NSInteger)enterprisedId albumId:(NSInteger)albumId albumName:(NSString *)albumName completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;

/**
 获取相簿中所有照片

 @param albumId 相簿ID
 @param pageNumber 页码
 @param pageSize 页大小
 @param completeBlock 完成回调
 */
- (void)getAlbumListDatasWithAlbumId:(NSInteger)albumId pageNumber:(NSInteger)pageNumber pageSize:(NSInteger)pageSize completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;


/**
 添加图片到相簿

 @param albumId 相簿ID
 @param pictureIds 图片ID拼接的字符串，多个用逗号分隔
 @param completeBlock 完成回调
 */
- (void)addPicturesToAlbumWithAlbumId:(NSInteger)albumId pictureIds:(NSString *)pictureIds completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;


/**
 批量删除相册中的图片

 @param albumId 相册ID
 @param pictureIds 图片ids
 @param completeBlock 完成回调
 */
- (void)deletePicturesInAlbumWithAlbumId:(NSInteger)albumId pictureIds:(NSString *)pictureIds completeBlock:(WDZGetUserShotPictureCompletedBlock)completeBlock;
@end
