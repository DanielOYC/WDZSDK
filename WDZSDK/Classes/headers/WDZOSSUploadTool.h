//
//  WDZOSSUploadTool.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/9/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZOSSUploadModel.h"

@interface WDZOSSUploadTool : NSObject

/**
 批量上传视频
 @param models 视频数组
 @param everyVideoProgress 每个视频上传的进度
 @param totalProgerss 总进度
 @param completion 完成
 */
+ (void)uploadVideosInArray:(NSArray <WDZOSSUploadModel *>*)models everyVideoProgress:(void (^)(int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))everyVideoProgress totalProgerss:(void (^)(NSInteger currentIndex, NSInteger totalNum))totalProgerss  Completion:(void (^)(void)) completion;

/**
 批量上传图片
 @param models 上传的图片数组对象
 @param totalProgerss 总进度
 @param completion 完成回调
 */
+ (void)uploadImagesInArray:(NSArray <WDZOSSUploadModel *>*)models totalProgerss:(void (^)(NSInteger currentIndex, NSInteger totalNum))totalProgerss Completion:(void (^)(void)) completion;

/**
 批量上传文件
 @param models 文件数组
 @param everyVideoProgress 每个文件上传的进度
 @param totalProgerss 总进度
 @param completion 完成
 */
+ (void)uploadFilesInArray:(NSArray <WDZOSSUploadModel *>*)models everyFileProgress:(void (^)(int64_t bytesSent, int64_t totalBytesSent, int64_t totalBytesExpectedToSend))everyFileProgress totalProgerss:(void (^)(NSInteger currentIndex, NSInteger totalNum))totalProgerss  Completion:(void (^)(void)) completion;


@end
