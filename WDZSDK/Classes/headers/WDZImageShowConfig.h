//
//  WDZImageShowConfig.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#ifndef WDZImageShowConfig_h
#define WDZImageShowConfig_h

#import <UIKit/UIKit.h>
#import "WDZImageShowModel.h"

#import <SDWebImage/UIImageView+WebCache.h>

#import <SDWebImage/SDWebImageManager.h>

@class WDZImageShowModel;

/**
 图片浏览响应事件
 */
typedef NS_OPTIONS(NSUInteger, WDZShowImageMangerType) {
    WDZShowImageMangerTypeNone                                                 = 1 << 0,
    WDZShowImageMangerTypeOriginalImage                                  = 1 << 1,//查看原图
    WDZShowImageMangerTypeDownLoadImg                                  = 1 << 2,//保存图片
    WDZShowImageMangerTypeEdit                                                   = 1 << 3,//编辑
    WDZShowImageMangerTypeShare                                                = 1 << 4,//分享
    WDZShowImageMangerTypeDownVideo                                       = 1 << 5//保存视频
};

@protocol WDZImageShowViewHandleDelegate <NSObject>

-(void)WDZImageShowViewShowOriginalImg;

-(void)WDZImageShowViewShowDownLoadImg;

-(void)WDZImageShowViewShowEditImg;

-(void)WDZImageShowViewShowShare;

-(void)WDZImageShowViewCancel;

@end



/**
 短视频 响应事件
 */
typedef NS_OPTIONS(NSUInteger, WDZShowShortVideoMangerType) {
    WDZShowShortVideoMangerTypeNone                                                 = 1 << 0,
    WDZShowShortVideoMangerTypeLike                                  = 1 << 1,//关注
    WDZShowShortVideoMangerTypeComment                                  = 1 << 2,//评论
    WDZShowShortVideoMangerTypeShare                                                = 1 << 3,//分享
    WDZShowShortVideoMangerTypeDownLoad                                               = 1 << 4,//下载
};

@protocol WDZShoreVideoHandleDelegate <NSObject>

-(void)WDZShortVideoLike;

-(void)WDZShortVideoComment;

-(void)WDZShortVideoShare;

-(void)WDZShortVideoDownLoad;

-(void)WDZShortVideoClickUserHeader;

@end

@protocol WDZShortVideoViewDelegate <NSObject>

-(void)WDZShortVideoLike:(WDZImageShowModel *)model index:(NSInteger)index;

-(void)WDZShortVideoComment:(WDZImageShowModel *)model index:(NSInteger)index;

-(void)WDZShortVideoShare:(WDZImageShowModel *)model index:(NSInteger)index;

-(void)WDZShortVideoDownLoad:(WDZImageShowModel *)model index:(NSInteger)index;

-(void)WDZShortVideoClickUserHeader:(WDZImageShowModel *)model index:(NSInteger)index;
@end


@protocol WDZImageShowViewDelegate <NSObject>

@optional

/**
 缩率图片地址
 */
- (NSString *)WDZImageShowViewImageUrl;
/**
 高清图图片地址
 */
- (NSString *)WDZImageShowViewOriginalImageUrl;
/**
 视屏资源
 */
- (NSString *)WDZImageShowViewVideoUrl;
/**
 照片宽度
 */
- (CGFloat)WDZImageShowViewImageWidth;

/**
 照片高度
 */
- (CGFloat)WDZImageShowViewImageHeight;
/**
 图片
 */
- (UIImage *)WDZImageShowViewImage;
/**
 图片文案
 */
- (NSString *)WDZImageShowViewImageDes;
/**
 s视屏播放时长
 */
- (NSInteger)WDZImageShowViewImageVideoTime;

#pragma 短视频
/**
 短视频  --- 用户昵称
 */
-(NSString *)WDZImageShortVideoNickName;
/**
 短视频 --- 用户头像
 */
-(NSString *)WDZImageShortVideoUserHeaderIcon;
/**
短视频 --- 主标题
 */
-(NSString *)WDZImageShortVideoTitle;
/**
 短视频 --- 副标题
 */
-(NSString *)WDZImageShortVideoSubTitle;

@end

#define folderName @"/gzq_img"
#define image_path(imagePath)  [[NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES)firstObject]stringByAppendingPathComponent:[NSString stringWithFormat:@"%@/%@",folderName,[[[[imagePath componentsSeparatedByString:@"://"]lastObject]componentsSeparatedByString:@"/"]componentsJoinedByString:@"_"]]]

#define imageNamed(imageName) [UIImage imageWithContentsOfFile:[[NSBundle bundleForClass:[self class]] pathForResource:[NSString stringWithFormat:@"%@@2x",imageName] ofType:@"png" inDirectory:@"KDImageShowManager.bundle"]]

#define KIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)
#endif /* WDZImageShowConfig_h */
