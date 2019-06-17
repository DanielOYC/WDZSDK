//
//  WDZPickerConfig.h
//  TZImagePickerController
//
//  Created by dingkan on 2018/9/7.
//  Copyright © 2018年 谭真. All rights reserved.
//

#import "NSObject+Extension.h"

typedef NS_OPTIONS(NSUInteger, WDZPickerMangerType) {
    WDZPickerMangerTypeAlbum                                                         = 1 << 0,//相册
    WDZPickerMangerTypeTakePhoto                                                          = 1 << 1,//拍照
    WDZPickerMangerTypeShortVideo                                                  = 1 << 2,//短视频拍摄
    WDZPickerMangerTypePreview                                                       = 1 << 3,//图片预览
};


@protocol WDZPickerManagerDelegate <NSObject>

/**
 选择相册事件
 */
-(void)WDZPickerManagerDidClickTakePhoto;

/**
 选择相机事件
 */
-(void)WDZPickerManagerDidClickTakePicker;

/**
 选择短视频
 */
-(void)WDZPickerManagerDidClickTakeShortVideo;

/**
 取消
 */
-(void)WDZPickerManagerDidClickTakeCancel;

@end


