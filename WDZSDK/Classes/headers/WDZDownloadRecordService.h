//
//  WDZDownloadReocrdService.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  下载录像的服务类 主要用于调度UI 和 查找录像等功能封装

#import <Foundation/Foundation.h>

@class WDZPosListItem,WDZPosModel,WDZVideoModel,WDZDownloadRecord,WDZGlobalDownloadRecordView;
@interface WDZDownloadRecordService : NSObject

/**
 全局下载情况
 */
@property (nonatomic, strong) WDZGlobalDownloadRecordView *downloadView;

+ (instancetype)sharedInstance;

/**
 处理recordlist
 */
- (NSMutableArray *)handleRecordList;

/**
 根据videoModel获取当前播放视频的下载好的录像
 */
- (NSArray *)getRecordListWithVideoModel:(WDZVideoModel *)videoModel;

/**
 根据videoID获取摄像头列表
 */
- (NSArray *)getRecordListWithVideoID:(WDZVideoModel *)videoModel;

/**
 删除对应视频下的下载的录像
 */
- (void)deleteRecordWithModel:(WDZDownloadRecord *)downloadRecord;

/**
 显示后台下载的进度条
 */
- (void)showBackgroundDownloadProgress;
/**
 移除后台下载的进度条
 */
- (void)removeBackgroundDownloadProgress;

/**
 展示全局的下载进度View
 */
- (void)showGlobalDownloadRecordView;

/**
 隐藏全局的下载进度View
 */
- (void)hiddenGlobalDownloadRecordView;

/**
 获取码率
 */
- (void)getVideoWithID:(NSString *)videoID BitrateCompletion:(void (^)(BOOL isSuccessed,int value))completion;

/**
 获取POS小票列表
 
 @param pageNumber 页码
 @param completion 处理完以后的数据
 */
+ (void)getReviewPosListWithorganizeId:(NSString *)organizeId VideoId:(NSString *)videoId keyword:(NSString *)keyword startTime:(NSString *)startTime endTime:(NSString *)endTime Page:(NSInteger)pageNumber pageSize:(NSInteger)pageSize Completion:(void (^)(BOOL isSuccessed,NSArray <WDZPosListItem *>*posList)) completion;

/**
 获取pos详情
 */
+ (void)getPosDetailWithId:(NSString *)posId Completion:(void (^)(BOOL isSuccessed,WDZPosModel *pos)) completion;

@end
