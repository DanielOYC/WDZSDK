//
//  WDZMviewModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/22.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, SwipeGestureRecognizerDirection) {
    SwipeGestureRecognizerDirectionRight =1,
    SwipeGestureRecognizerDirectionLeft,
    SwipeGestureRecognizerDirectionUp,
    SwipeGestureRecognizerDirectionDown
};

@interface WDZMviewModel : NSObject

/**
 录像时间数组
 */
@property (nonatomic, strong) NSMutableArray *intervalArr;

/**
 空白处的数组 (录像时间数组之间空白时间段数组)
 */
@property (nonatomic, strong) NSMutableArray *blankTimeArr;

/**
 有录像的天
 */
@property (nonatomic, strong) NSMutableArray *recordDays;

/**
 获取结束时间
 @param startTime 开始时间
 @param druation 进行
 */
+ (NSString *)getEndTimeWithStartTime:(NSString *)startTime duration:(NSString *)druation;

/**
 获取有视频的天
 */
- (void)getRecordDaysInMonthWithYear:(NSString *)year month:(NSString *)month Token:(NSString *)token videoID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess)) completion;

/**
 获取录像时间数组
 */
- (void)getRecordVideoWithURL:(NSString *)URLStr Time:(NSString *)dayReocrdTime Token:(NSString *)token videoID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess,NSError *error))completion;

/**
 获取录像的url
 */
- (void)getRecordingURLWithStartTime:(NSString *)startTime andEndTime:(NSString *)endTime Token:(NSString *)token videoID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess,NSString *result,NSString *recordingURL,NSString *relStartTime,  NSError *error)) completion;
/**
 新ptz方法 -- 移动
 
 @param ID 设备ID
 @param swipeDirection 移动方向
 @param steps 步长 1-16
 */
+ (void)newSwipeCamerWithID:(NSString *)ID swipeDirection:(SwipeGestureRecognizerDirection )swipeDirection andStep:(NSArray *)steps;

/**
 新ptz方法 -- 缩放
 
 @param ID 设备ID
 @param gestureRecognizer 手势
 @param steps 步长
 */
+ (void)newScaleCamerWithID:(NSString *)ID UIGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer andStep:(NSArray *)steps;

/**
 获取抓拍图片
 */
+ (void)getShotPicsOfCameraOnlyLessThanThreeWithID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess,NSArray *pics)) completion;

/**
 获取预置位
 */
+ (void)getVideoDevicePresetWithID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess,NSArray *press)) completion;

/**
 抓拍
 */
+ (void)shotPicOfCameraWithID:(NSString *)videoID Completion:(void (^)(BOOL isSuccess,NSDictionary *miniDic)) completion;

/**
 预置位
 */
+ (void)pressPtzWithID:(NSString *)videoID ptzID:(int)pressPtzID completion:(void (^)(BOOL isSuccess)) completion;

/**
 收藏视频
 */
+ (void)collectionVideoWithID:(NSString *)videoID completion:(void (^)(BOOL isSuccess)) completion;

/**
 取消收藏视频
*/
+ (void)cancelCollectionVideoWithID:(NSString *)videoID completion:(void (^)(BOOL isSuccess))completion;

/**
 语音对讲
 */
+ (void)requestAudioCallWithVideoModel:(WDZVideoModel *)videModel Completion:(void (^)(BOOL isSuccess, NSDictionary *resultDic, NSError *error)) completion;

/**
 获取下载路径

 @param startTime 开始时间
 @param endTime 结束时间
 */
+ (void)getRecordDownloadURLWithDeviceID:(NSString *)deviceId StartTime:(NSString *)startTime endTime:(NSString *)endTime Completion:(void (^)(BOOL isSuccess,NSString *url,NSString *errMsg)) completion;

/**
 视频图片排序
 */
+ (void)sortVideosAndPicturesInArray:(NSMutableArray *)sortArray;

#pragma mark ---------------------设备限制----------------------------
/**
 设备限制开始播放时
 */
+ (void)deviceLimitWhenPlay:(NSString *)deviceId Completion:(void (^)(BOOL isSuccessed,NSString *errorString,NSError *error)) completion;

/**
 设备限制结束播放时
 */
+ (void)deviceLimitWhenEnd:(NSString *)deviceId Completion:(void (^)(BOOL isSuccessed)) completion;

/**
 设备限制结束播放时
 */
+ (void)deviceLimitWhenSnyc:(NSString *)deviceId;

@end
