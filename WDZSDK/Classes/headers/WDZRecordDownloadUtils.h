//
//  WDZRecordDownloadUtils.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WDZRecordDownloadUtils;
@protocol WDZRecordDownloadUtilsDelegate <NSObject>

- (void)downloadUtil:(WDZRecordDownloadUtils *)util progress:(CGFloat)progress total:(int64_t) total;

@optional
- (void)downloadUtil:(WDZRecordDownloadUtils *)util Completion:(NSString *) size error:(NSError *)error;

@end

@interface WDZRecordDownloadUtils : NSObject
/**
 录像持续时长
 */
@property (nonatomic, copy) NSString *duration;
/**
 下载的url
 */
@property (nonatomic, strong) NSString *downloadUrl;

/**
 码率
 */
@property (nonatomic, assign) int bitrate;

/**
 是否正在下载
 */
@property (nonatomic, assign) BOOL isDownloading;

@property (nonatomic, assign) CGFloat progress;

@property (nonatomic, weak) id<WDZRecordDownloadUtilsDelegate> delegate;
/**
 下载的文件存放目录
 */
@property (nonatomic, copy) NSString *downloadFloaderName;

/**
 下载的文件名
 */
@property (nonatomic, readonly) NSString *downloadFileName;
/**
 下载文件的路径
 */
@property (nonatomic, readonly) NSString *downloadFilePath;
/**
 下载文件的文件夹路径
 */
@property (nonatomic, readonly) NSString *downloadFolderPath;

/**
 开始
 */
- (void)start;

/**
 取消
 */
- (void)cancel;


@end
