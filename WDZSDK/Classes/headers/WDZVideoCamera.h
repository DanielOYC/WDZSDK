//
//  WDZVideoCamera.h
//  WDZCamera
//
//  Created by 王振海 on 2018/10/5.
//  Copyright © 2018年 王振海. All rights reserved.
//

#import "WDZAVKitManagerView.h"
#import "WDZCircleProgressView.h"

@protocol WDZVideoCameraDelegate<NSObject>

//保存地址带视频截图
- (void)microVideoPath:(NSString *)savePath thumbImage:(UIImage *)image;

//保存地址带视频截图和生成的gif图片
- (void)microVideoPath:(NSString *)savePath thumbImage:(UIImage *)image gifFaceURL:(NSString *)imagePath;

@end

@interface WDZVideoCamera : WDZAVKitManagerView

//录制按钮
@property (nonatomic, strong) UIButton *recordBtn;
//取消按钮
@property (nonatomic, strong) UIButton *cancelBtn;

@property (nonatomic, weak) id<WDZVideoCameraDelegate> delegate;

@end
