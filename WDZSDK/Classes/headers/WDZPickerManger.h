//
//  WDZPickerManger.h
//  TZImagePickerController
//
//  Created by dingkan on 2018/9/7.
//  Copyright © 2018年 谭真. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WDZPickerConfig.h"

@class WDZPickerModel,WDZPickerManagerConfig;

@interface WDZPickerManger : NSObject

/**
 图片选择
 根据配置来显示选择 相册 、拍照、小视频
 type：
 WDZPickerMangerTypeAlbum                                                         = 1 << 0,//相册
 WDZPickerMangerTypeTakePhoto                                                          = 1 << 1,//拍照
 WDZPickerMangerTypeShortVideo                                                  = 1 << 2,//短视频拍摄
 取消永远存在
 
 delegate: 代理自定义事件
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)showPickerWithdelegate:(id<WDZPickerManagerDelegate>)delegate config:(WDZPickerManagerConfig *)config selectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

/**
 图片选择 无需代理
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)showPickerWithConfig:(WDZPickerManagerConfig *)config selectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

/**
 直接相册
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)onlyShowAlbumWithSelectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;
/**
 直接拍照
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)onlyShowTakePhotoWithSelectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;
/**
 直接短视频
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)onlyShowShortVideoWithSelectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

/**
 直接跳转     相册/拍照/短视频，需要自己配置
 config: 配置
 selectArray: 选中数组
 complete：完成回调
 */
+(void)onlyShowWithConfig:(WDZPickerManagerConfig *)config selectArray:(NSMutableArray<WDZPickerModel *> *)modelArray complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

/**
 图片预览
 index： 当前展示索引
 canEdit： 是否可以编辑
 */
+(void)onlyShowPreviewWithSelectArray:(NSMutableArray<WDZPickerModel *> *)modelArray index:(NSInteger)index canEdit:(BOOL)canEdit  complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

/**
 图片预览
 selectAssets：选中数据源（PHAsset类型）
 selectPhotos: 选中数据源（img）
 index： 当前展示索引
 canEdit： 是否可以编辑
 */
+(void)onlyShowPreviewWithSelectArray:(NSMutableArray *)selectAssets selectPhotos:(NSMutableArray *)selectPhotos index:(NSInteger)index canEdit:(BOOL)canEdit complete:(void(^)(NSMutableArray<WDZPickerModel *>*datas, NSError *error,BOOL isSelectOriginalPhoto))complete;

@end
