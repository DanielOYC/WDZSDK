//
//  WDZAddImageConfig.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/18.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#ifndef WDZAddImageConfig_h
#define WDZAddImageConfig_h

#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/UIImage+GIF.h>
#import <YYImage/YYAnimatedImageView.h>
#import <YYImage/YYImage.h>
#import "UIImage+WDZAddExtension.h"

@protocol WDZAddImageViewDataSource <NSObject>

@optional
/**
 缩率图片地址
 */
- (NSString *)WDZAddImageViewImageUrl;
/**
 高清图图片地址
 */
- (NSString *)WDZAddImageViewOriginalImageUrl;
/**
 视屏资源
 */
- (NSString *)WDZAddImageViewVideoUrl;
/**
 视屏封面图
 */
- (NSString *)WDZAddImageViewVideoImg;
/**
 图片资源
 */
-(UIImage *)WDZAddImageViewImage;
/**
 视屏时长
 */
-(CGFloat)WDZAddImageViewVideoTime;

@end

#endif /* WDZAddImageConfig_h */
