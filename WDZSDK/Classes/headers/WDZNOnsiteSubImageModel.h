//
//  WDZNOnsiteSubImageModel.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/12/19.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
//图片部分 Model

@interface WDZNOnsiteSubImageModel : NSObject

/**
 是否是小视频
 */
@property (nonatomic , assign)BOOL attachType;
/**
 设备 ID
 */
@property (nonatomic , retain)NSString *deviceId;
/**
 id
 */
@property (nonatomic , retain)NSString *ID;
/**
 文件大小
 */
@property (nonatomic , retain)NSString *size;
/**
 gif 缩略图
 */
@property (nonatomic , retain)NSString *thumbUrl;
/**
 小视频 URL 或者是图片 URL
 */
@property (nonatomic , retain)NSString *url;
/**
 小视频时长
 */
@property (nonatomic , retain)NSString *videoTime;

/**
 图片路径
 */
@property (nonatomic , retain)NSString *imagePath;

@end
