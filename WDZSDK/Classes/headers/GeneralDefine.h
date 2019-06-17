//
//  BaseModelHeader.h
//  Pods
//
//  Created by 王振海 on 2018/10/18.
//  用于加载图片库
#import "UIImage+TintColor.h"

#define getImageName(imageName) [NSString stringWithFormat:@"%@@%d%@",imageName,(int)[UIScreen mainScreen].scale,@"x"]

#define WDZKitImagePngNamed(imageName,bundleName) [UIImage imageWithContentsOfFile:[[NSBundle bundleForClass:[self class]] pathForResource:imageName ofType:@"png" inDirectory:[NSString stringWithFormat:@"%@.bundle",bundleName]]]

#define WDZKitImagePngClassNamed(imageName,class,bundleName) [UIImage imageWithContentsOfFile:[[NSBundle bundleForClass:class] pathForResource:imageName ofType:@"png" inDirectory:[NSString stringWithFormat:@"%@.bundle",bundleName]]]

#define WDZKitImageTypeNamed(imageName,bundleName,imageType) [UIImage imageWithContentsOfFile:[[NSBundle bundleForClass:[self class]] pathForResource:imageName ofType:imageType inDirectory:[NSString stringWithFormat:@"%@.bundle",bundleName]]]

#define WDZKitImageAllOptionNamed(imageName,class,imageType,bundleName) [UIImage imageWithContentsOfFile:[[NSBundle bundleForClass:class] pathForResource:imageName ofType:imageType inDirectory:[NSString stringWithFormat:@"%@.bundle",bundleName]]]
//常用
#define WDZThemeColorImageNamed(imageName,bundleName) [WDZKitImagePngNamed(getImageName(imageName),bundleName) imageWithTintColor:kThemeColor]

