//
//  WDZHtttpReques.h
//  WDZStore
//
//  Created by 郑来贤 on 14-9-24.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>


@class NSURLSessionDataTask;

typedef void(^resultBlock)(BOOL isSuccess, NSDictionary *resturnDic, NSError *error);
typedef void(^uploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);

@interface WDZHttpRequest : NSObject
{
    NSURLSessionDataTask  *requestOperation;
}


/**
 带图片上传的请求
 */
+(void)httpUploadSubImagesWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageArray:(NSArray *)imageArray withFileName:(NSString *)sigleName andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;

////新建
+(void)httpUploadWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageArray:(NSArray *)temps andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;


+ (void)httpRequestWithUlr:(NSString*)urlStr andParameters:(NSDictionary *)parameters andBlock:(resultBlock)completedBlock;

+ (void)httpUploadWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageData:(NSData *)imageData andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;


+(void)startMultiPartUploadTaskWithURL:(NSString *)url
                           imagesArray:(NSArray *)images
                        parametersDict:(NSDictionary *)parameters
                              andBlock:(resultBlock)compeletedBlock
                              andBlock:(uploadProgressBlock)uploadBlock;

+(UIViewController *)getCurrentVC;

+ (void)ParameterPichttpUploadWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageData:(NSData *)imageData andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;
//企业认证上传图片
+(void)httpUploadWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageArrayEnterCostom:(NSArray *)imageArray andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;
/**
 现场巡店拍照签到
 */
+(void)httpUploadOnsitepatrolTakePhotoWithUlr:(NSString *)urlStr andParameters:(NSDictionary *)parameters andImageArrayEnterCostom:(NSArray *)imageArray andBlock:(resultBlock)compeletedBlock andBlock:(uploadProgressBlock)uploadBlock;

@end
