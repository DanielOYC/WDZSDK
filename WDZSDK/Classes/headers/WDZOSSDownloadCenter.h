//
//  WDZOSSDownloadTool.h
//  AFNetworking
//
//  Created by 王振海 on 2018/11/22.
//

#import <Foundation/Foundation.h>
#import "WDZOSSDownloadAble.h"
#import "WDZOSSDownloadModel.h"
#import "WDZOSSToolHelper.h"

@protocol WDZOSSDownloadCenterDelegate <NSObject>

/**
 下载过程回调
 @param progress 进度 0~1.0
 @param downloadURL 下载的URL
 @param totalSize 总大小
 */
- (void)downloadProgress:(CGFloat)progress WithCurrentDownloadUrl:(NSString *)downloadURL FileTotalSize:(NSString *)totalSize;

@end

@interface WDZOSSDownloadCenter : NSObject

+ (instancetype)instance;

/**
 使用默认方式下载文件 带进度条
 @param files 需要下载的文件对象
 @param completion 下载结束
 */
- (void)downloadWithModelFiles:(NSArray <WDZOSSDownloadModel *>*)fileModels HUDInView:(UIView *)view Completion:(void (^)(BOOL isSuccessed,NSArray <WDZOSSDownloadModel *> *fileModels)) completion;

/**
 使用默认方式下载文件 带进度条
 @param files 需要下载的文件对象
 @param completion 下载结束
 */
- (void)downloadWithFiles:(NSArray <id<WDZOSSDownloadAble>>*)files HUDInView:(UIView *)inView Completion:(void (^)(BOOL isSuccessed,NSArray <id<WDZOSSDownloadAble>>* files)) completion;

/**
 下载方法
 @param files 下载文件
 @param delegate 回调代理
 */
- (void)downloadWithFiles:(NSArray <id<WDZOSSDownloadAble>>*)files delegate:(id<WDZOSSDownloadCenterDelegate>)delegate;

/**
 下载方法
 @param files 下载文件
 @param delegate 回调代理
 */
- (void)downloadWithModelFiles:(NSArray <WDZOSSDownloadModel *>*)files delegate:(id<WDZOSSDownloadCenterDelegate>)delegate;
/**
 根据URL取消下载任务
 */
- (void)cancelTaskWithURL:(NSString *)url;

/**
 取消所有的任务
 */
- (void)cancelAllTask;

#pragma mark ---------------------public Func-----------------------------------------
/**
 通过url获取本地用户文件 存在返回绝对路径,不存在返回nil
 */
+ (NSString *)getLocalFileWithFileURL:(NSString *)url;

/**
 根据url删除本地下载的文件
 */
+ (BOOL)deleteLocalFileWithFileURL:(NSString *)url;

/**
 删除本地所有文件
 */
+ (BOOL)deleteLocalFile;

@end

