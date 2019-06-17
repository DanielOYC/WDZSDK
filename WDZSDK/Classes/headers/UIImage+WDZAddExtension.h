//
//  UIImage+WDZAddExtension.h
//  test
//
//  Created by dingkan on 2018/9/29.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (WDZAddExtension)

/**
 存图片到本地
 
 @param image 图片
 @return 图片名
 */
+(NSString *)saveImage:(UIImage *)image andName:(NSString *)name;

/**
 从本地取出图片
 
 @param nameStr 图片名
 @return 图片
 */
+(instancetype)readImageWithName:(NSString *)nameStr;

/**
 保存图片到本地
 @param image 图片
 @param path 图片Url
  @return 是否保存成功
 */
+(BOOL)saveImage:(NSData *)imageData urlPath:(NSString *)path;

/**
 从本地取出图片
 @param urlPath 图片Url
 @return 图片
 */
+(instancetype)readImageWithUrlPath:(NSString *)urlPath;

- (UIImage *)imageByScalingToSize:(CGSize)targetSize;

+(NSString *)getSaveImaDataWithName:(NSString *)nameStr;
@end
