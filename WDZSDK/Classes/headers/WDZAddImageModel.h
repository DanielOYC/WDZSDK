//
//  WDZAddImageModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>

@interface WDZAddImageModel : NSObject<NSCoding>

/**
 是否是视频
 */
@property (nonatomic, assign) BOOL isVideo;
/**
 资源
 */
@property (nonatomic, strong) PHAsset *asset;
/**
 是否有原图
 */
@property (nonatomic, assign) BOOL hadOriginal;
/**
 短视频合成gif图片
 */
@property (nonatomic, strong) UIImage *gifImg;
/**
 gif图片本地缓存地址
 */
@property (nonatomic, strong) NSString *gifPath;
/**
 gif图片上传oss地址。不用于显示
 如果视频需要显示gif图片，，则将gifurl放入imgUrl/originlImgUrl中
 */
@property (nonatomic, strong) NSString *gifUrl;
/**
 本地 video缓存路径
 */
@property (nonatomic, strong) NSString *videoPath;
/**
 video url
 */
@property (nonatomic, strong) NSString *videourl;
/**
 视频播放时长
 */
@property (nonatomic, assign) CGFloat videoTime;
//@property (nonatomic, strong) NSString *url;

/**
 缩率图  url
 */
@property (nonatomic, strong) NSString *imgUrl;
/**
 缩率图
 */
@property (nonatomic , strong)UIImage *image;
/**
 缩率图大小
 */
@property (nonatomic , assign)CGFloat dataSize;
/**
 缩率图文件名
 */
@property (strong , nonatomic)NSString *fileName;
/**
 缩率图 本地缓存路径
 */
@property (nonatomic, strong) NSString *filePath;
/**
 高清图 url
 */
@property (nonatomic, strong) NSString *originlImgUrl;
/**
 高清图
 */
@property (nonatomic , strong)UIImage *originImage;
/**
 高清图大小
 */
@property (nonatomic , assign)CGFloat originImageDataSize;
/**
 高清图文件名
 */
@property (nonatomic , strong)NSString *originFileName;
/**
 高清图地址
 */
@property (strong , nonatomic) NSString *originPath;
/**
 资源缓存本地 路径
 */
@property (nonatomic, strong) NSString *assetPath;
+(instancetype)modelWithImage:(UIImage *)image dataSize:(CGFloat)dataSize fileName:(NSString *)fileName filePath:(NSString *)filePath originImage:(UIImage *)originImage originImageDataSize:(CGFloat)originImageDataSize
               originFileName:(NSString *)originFileName originPath:(NSString *)originPath asset:(PHAsset *)asset isVideo:(BOOL)isVideo;
@end
