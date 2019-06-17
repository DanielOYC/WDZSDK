//
//  WDZRecordDownloadCenter.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@class WDZPosListItem,WDZVideoModel,WDZDownloadRecord;
@interface WDZRecordDownloadCenter : NSObject

//如果是取消的 就不保存其次信息
@property (nonatomic, assign) BOOL isCancelReocrd;
/**
 下载的开始时间
 */
@property (nonatomic, copy) NSString *startTime;
/**
 时长
 */
@property (nonatomic, copy) NSString *duration;

/**
 码率
 */
@property (nonatomic, assign) int bitrate;
/**
当前正在下载的录像对象
 */
@property (nonatomic, strong) WDZDownloadRecord *currentDownloadRecord;

/**
 成功下载在的录像条数
 */
@property (nonatomic, assign) NSInteger successedDownloadReocrdCount;

/**
 下载完成的录像列表
 */
@property (nonatomic, strong) NSMutableArray *currentDownloadRecordList;

/**
 用户所有的下载录像视频(按照设备已分完组 key : 设备名  value: record对象)
 */
@property (nonatomic, strong) NSMutableDictionary *userAllRecordsByName;

/**
 用户所有的下载录像视频(按照设备已分完组 key : 设备ID  value: record对象)
 */
@property (nonatomic, strong) NSMutableDictionary *userAllRecordsByID;
/**
 是否正在下载
 */
@property (nonatomic, readonly) BOOL isDownloading;

/**
 下载文件的路径
 */
@property (nonatomic, readonly) NSString *downloadFilePath;

/**
 下载文件的文件夹路径
 */
@property (nonatomic, readonly) NSString *downloadFolderPath;

/**
 视频根据名字排序
 */
- (void)sortByName;

/**
 视频根据ID排序
 */
- (void)sortByID;

+ (instancetype)sharedInstance;
/**
 开始下载  录像下载
 */
- (void)startDownloadWithUrl:(NSString *)url startTime:(NSString *)startTime duration:(NSString *)duration currentVideo:(WDZVideoModel *)currentVideo bitrate:(int) bitrate;

/**
 开始下载  追溯模块
 */
- (void)startDownloadWithUrl:(NSString *)url startTime:(NSString *)startTime duration:(NSString *)duration bitrate:(int) bitrate;
/**
 取消下载
 */
- (void)cancelDownload;

#pragma mark -------------追溯模块-------------------

/**
 判断当前的posItem是否在
 */
- (WDZDownloadRecord *)reviewDownloadContainsPosItem:(WDZPosListItem *)item;

/**
 重新加载
 */
- (void)relodaReviewRecord;
#pragma mark -------------转码-------------------
+ (void)transcoderFromSource:(NSString *)source target:(NSString *)target;

@end
