//
//  WDZImageShowToolManager.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZImageShowConfig.h"

@interface WDZImageShowToolManager : NSObject

/**
 下载图片
 */
+(void)WDZImageShowDownLoadImgWithUrl:(NSString *)imgUrl img:(UIImage *)img originalImgUrl:(NSString *)originalUrl isOriginal:(BOOL)isOriginal savedFinfish:(SEL)savedFinfish target:(id)completionTarget;

/**
 下载视频
 */
+(void)WDZImageShowDownLoadVideoWithUrl:(NSString *)videoUrl HUDInView:(UIView *)view savedFinfish:(SEL)savedFinfish target:(id)completionTarget;

/**
 编辑图片
 */
+(void)WDZImageShowEidtImage:(UIImage *)img savedFinfish:(SEL)savedFinfish target:(id)completionTarget;

/**
 查看原图
 */
+(void)WDZImageShowOriginalImg:(NSString *)originalUrl complete:(void(^)(UIImage *originalImg))complete porgress:(void(^)(NSString *stateTitle))progress;

/**
 * 获取当前显示的控制器
 */
+ (UIViewController *)getCurrentController;

+ (UIViewController *)getPresentController;

@end
