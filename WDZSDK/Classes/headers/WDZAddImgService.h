//
//  WDZAddImgService.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WDZAddImageFrameModel,WDZPickerModel,WDZOSSUploadModel,WDZAddImageModel,WDZAddImgManagerConfig;
@interface WDZAddImgService : NSObject
+(NSArray<WDZAddImageFrameModel *> *)createAddImgModelDatas:(NSArray<WDZPickerModel *> *)datas;
+(NSMutableArray<WDZPickerModel *>*)conversionPickerModels:(NSArray<WDZAddImageFrameModel *> *)datas;
+(NSMutableArray<WDZAddImageFrameModel *>*)handlePickerModels:(NSArray<WDZAddImageFrameModel *> *)datas;



/**
 转换oss上传模型
 */
+(NSMutableArray<WDZOSSUploadModel *> *)getNeedUploadDatas:(NSMutableArray<WDZAddImageFrameModel *> *)allDatas;

/**
 oss上传完成后刷新数据
 */
+(NSMutableArray<WDZAddImageModel *> *)conversionUploadDatas:(NSMutableArray<WDZOSSUploadModel *> *)uploadDatas originalDatas:(NSMutableArray<WDZAddImageFrameModel *> *)originalDatas;

/**
 剔除附带本地图片  只保网络图片
 */
+(void)handleHybridPickerModels:(NSMutableArray<WDZAddImageFrameModel *> *)datas;
/**
 更新当前编辑数据源
 */
+(void)refreshCurrentModel:(WDZAddImageFrameModel *)model pickerModel:(WDZPickerModel *)pickerModel;

/**
 重新定向图片数据
 */
+(void)handleAllDatas:(NSMutableArray<WDZAddImageFrameModel *> *)datas pickerDatas:(NSMutableArray<WDZPickerModel *> *)pickerArray isPreView:(BOOL)isPreview config:(WDZAddImgManagerConfig *)config;

+(NSInteger)conversionIndexPathPickerModels:(NSArray<WDZPickerModel *> *)datas model:(WDZAddImageFrameModel *)model;

+(WDZAddImageFrameModel *)createAddModelWithPickerModel:(WDZPickerModel *)pickerModel;
@end
