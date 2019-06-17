//
//  WDZAddImageFrameModel.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZAddImageModel.h"
#import "WDZAddImageConfig.h"
#import "WDZImageShowConfig.h"

//#import "WDZOSSUploadAble.h"

typedef enum : NSUInteger {
    WDZAddImageItemTypeNormal,//图片添加展示
    WDZAddImageItemTypeAdd,//图片添加
    WDZAddImageItemTypeShow//展示
} WDZAddImageItemType;
@interface WDZAddImageFrameModel : NSObject<WDZAddImageViewDataSource,WDZImageShowViewDelegate>//WDZOSSUploadAble

@property (nonatomic, strong) WDZAddImageModel *model;

@property (nonatomic, assign) BOOL originalIsGif;

@property (nonatomic, assign) BOOL isGif;

@property (nonatomic, assign) WDZAddImageItemType type;

@property (nonatomic, strong) NSIndexPath *indexPath;

@property (nonatomic, assign) BOOL isHiddenDelete;

/**
 是否是单张模式
 */
@property (nonatomic, assign) BOOL isSignle;

///**上传完毕后照片的路径 如果是视频的话，是封面图*/
//@property (nonatomic, copy) NSString *imageResourceURL;
///**视频上传完毕的URL路径*/
//@property (nonatomic, copy) NSString *videoResourceURL;
///**最后上传完毕的URL路径*/
//@property (nonatomic, copy) NSString *fileResourceURL;


+(instancetype)modelWithType:(WDZAddImageItemType)type imgModel:(WDZAddImageModel *)model;

@end
