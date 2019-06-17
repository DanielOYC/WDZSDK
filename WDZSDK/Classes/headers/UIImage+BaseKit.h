//
//  UIImage+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (BaseKit)
/**
 解决拍照上传时照片旋转的问题
 */
- (UIImage *)fixOrientation:(UIImage *)srcImg;

/**
 从窗口上截图
 */
+ (UIImage *)clipFromWindowWithFrame:(CGRect)frame;


//按比例缩放
-(UIImage *) imageCompressForWidthScale:(UIImage *)sourceImage targetWidth:(CGFloat)defineWidth;


/**
 保存图片 Data到本地
 
 @param ImageData 图片 data
 */
+(void)saveOriginImageData:(NSData *)ImageData andName:(NSString *)name;


/**
 从本地取出图片
 
 @param nameStr 图片名
 @return 图片
 */
+(instancetype)readImageWithName:(NSString *)nameStr;

+(NSData *)readDataWithName:(NSString *)nameStr;


/**
 删除本地图片
 
 @param nameStr 图片名
 */
+(void)deleteImageWithName:(NSString *)nameStr;


+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize) size;

+ (UIImage*)text:(NSString*)text addToImage:(UIImage*)image;

+ (UIImage*)text:(NSString*)text addToImage:(UIImage*)image textFont:(CGFloat) font;
    
+ (UIImage *)imageWithColor:(UIColor *)color;

- (UIImage *)fixOrientation;
@end
