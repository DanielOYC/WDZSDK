//
//  WDZDownloadRecord.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/27.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZDownloadRecord : NSObject
#pragma mark -------------录像下载处参数-------------------
/**
 开始时间
 */
@property (nonatomic, copy) NSString *startTime;
/**
 下载完成的时间
 */
@property (nonatomic, copy) NSString *downloadTime;

/**
 下载的文件名称
 */
@property (nonatomic, copy) NSString *fileName;
/**
 录像的时长
 */
@property (nonatomic, copy) NSString *duration;

/**
 当前摄像头的名字
 */
@property (nonatomic, copy) NSString *currentVideoName;
/**
 摄像头的ID
 */
@property (nonatomic, copy) NSString *videoID;

/**
 门店ID
 */
@property (nonatomic, copy) NSString *shopID;

#pragma mark -------------追溯-------------------

@property (nonatomic, copy) NSString *itemId;
/**
 是否是pos
 */
@property (nonatomic, assign) BOOL isPos;
/**
 票据号
 */
@property (nonatomic, copy) NSString *ticketAndPosNum;

/**
 门店名称
 */
@property (nonatomic, copy) NSString *shopName;

/**
 初始化方法

 @param startTime 开始时间
 @param duration 持续时间
 @param faceImage 封面
 @param downloadTime 下载
 @param shopId 门店ID
 */
- (instancetype)initWithStartTime:(NSString *)startTime duration:(NSString *)duration faceImage:(UIImage *)faceImage downloadTime:(NSString *)downloadTime shopID:(NSString *)shopId;

/**
 初始化方法

 @param startTime 开始时间
 @param duration 持续时间
 @param downloadTime 下载时间
 @param shopId 门店id
 */
- (instancetype)initWithStartTime:(NSString *)startTime duration:(NSString *)duration isPos:(BOOL)isPos itemId:(NSString *)itemId ticketAndPosNum:(NSString *)ticketAndPosNum videoID:(NSString *)videoID downloadTime:(NSString *)downloadTime shopName:(NSString *)shopName;
/**
 获取当前的封面图
 */
- (UIImage *)getCurrentImage;

/**
 删除本地录像
 */
- (void)deleteLocalReocrd;
@end
