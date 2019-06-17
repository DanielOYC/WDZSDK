//
//  WDZVideoService.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModelHeader.h"

typedef void(^WDZVideoModeListGetVideoListBlock)(BOOL isSuccess,WDZVideoModeList *videoModelList,NSError *error);
typedef void(^WDZVideoModelAddDeviceBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceThumbBlock)(BOOL isSuccess,NSError *error);
typedef void(^deleteDeviceBlock)(BOOL isSuccess,NSError *error);
typedef void(^addDevicePlayPasswordBlock)(BOOL isSuccess,NSError *error);
typedef void(^cancleDevicePlayPasswordBlock)(BOOL isSuccess,NSError *error);
typedef void(^checkDevicePlayPasswordBlock)(BOOL isSuccess, BOOL isRight,NSError *error);
typedef void(^setUploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);
typedef void(^setDeviceLocation)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceNameBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceSubNameBlock)(BOOL isSuccess,NSError *error);
typedef void(^setDeviceResolutionBlock)(BOOL isSuccess,NSError *error);
typedef void(^setAudioStateBlock)(BOOL isSuccess,NSError *error);
typedef void(^shotPicBlock)(BOOL isSuccess,NSDictionary *picDic,NSError *error);
typedef void(^getShotPicsBlock)(BOOL isSuccess,NSArray *picUrls,NSError *error);
typedef void(^collectionVideoBlock)(BOOL isSuccess,NSError *error);
typedef void(^getVideoDevicePresetBlock)(BOOL isSuccess,NSArray *dataArray,NSError *error);
typedef void(^getvideoosdBlock)(BOOL isSuccess,NSString *name,NSError *error);

NS_ASSUME_NONNULL_BEGIN

@interface WDZVideoService : NSObject

#pragma mark -获取字幕
+ (void)getVideooosd:(WDZVideoModel *)videoModel AndCompletedBlock:(getvideoosdBlock)compeletedBlock;
#pragma mark -- 获取预置位接口
+ (void)getVideo:(WDZVideoModel *)video DevicePresetWithBlock:(getVideoDevicePresetBlock)block;
#pragma mark -- 获取最多三张抓拍图片
+ (void)getShotPicsOfCamera:(WDZVideoModel *)video OnlyLessThanThreeWithBlock:(getShotPicsBlock)compeletedBlock;

/**
 添加设备的接口
 */
+ (void)addCameraDeviceWithDeviceMAC:(NSString *)deviceMac andParentID:(NSString *)p_ID AndCompletedBlock:(WDZVideoModelAddDeviceBlock)compeletedBlock;

+ (void)registerDeviceWithMacAddress:(NSString *)macAddress deviceName:(NSString *)deviceName  deviceType:(NSString *)deviceType shopID:(NSString *)shopID completion:(void (^)(BOOL isSuccess,NSError *error))completion;

//删除设备
+ (void)deleteCameraDeviceWithDeviceID:(NSString *)deviceID AndCompletedBlock:(deleteDeviceBlock)compeletedBlock;

+ (void)setDeviceThumb:(NSData *)imageData andDeviceID:(NSString *)dev_id andCompletedBlock:(setDeviceThumbBlock)compeletedBlock andProgressBar:(setUploadProgressBlock)progressBlock;

+ (void)setDevicePlayPassword:(NSString *)password andDeviceID:(NSString *)dev_id andCompletedBlock:(addDevicePlayPasswordBlock)compeletedBlock;

+ (void)cancleDevicePlayPasswordWithDeviceID:(NSString *)dev_id andCompletedBlock:(cancleDevicePlayPasswordBlock)compeletedBlock;

+ (void)setDeviceName:(WDZVideoModel *)video WithName:(NSString *)name andCompletedBlock:(setDeviceNameBlock)compeletedBlock;

+ (void)setDeviceSubName:(WDZVideoModel *)video WithSubName:(NSString *)subName andCompletedBlock:(setDeviceSubNameBlock)compeletedBlock;

+ (void)setDevice:(WDZVideoModel *)video ResolutionWithResolution:(NSString *)type andCompletedBlock:(setDeviceResolutionBlock)compeletedBlock;

+ (void)shotPicOfCamera:(WDZVideoModel *)videoModel WithBlock:(shotPicBlock)block;


/**
 _rootID:节点ID，不传递此参数时，默认获取根节点下列表，字符串型  _query:可选，字符串，根据输入字符串过滤节点（预留功能，暂时未实现） _index:下标，请求index之后的数据（不传的话默认是0）
 */
+ (void)getVideoList:(WDZVideoModeList *)videoList WithRootID:(NSString *)_rootID andQuery:(NSString *)_query andIndex:(int)_index andCompletedBlock:(WDZVideoModeListGetVideoListBlock)compeletedBlock;

//设备列表 下拉刷新 （新增抓拍）
+ (void)getVideoList:(WDZVideoModeList *)videoList RefreshWithRootID:(NSString *)_rootID andQuery:(NSString *)_query andIndex:(int)_index andCompletedBlock:(WDZVideoModeListGetVideoListBlock)compeletedBlock;

+(void)getFavorVides:(WDZVideoModeList *)videoList WithIndex:(int)index andCompletedBlock:(WDZVideoModeListGetVideoListBlock)compeletedBlock;

@end

NS_ASSUME_NONNULL_END
