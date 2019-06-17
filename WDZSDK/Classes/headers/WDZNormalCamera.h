//
//  WDZCamera.h
//  WDZCamera
//
//  Created by 王振海 on 2018/10/4.
//  Copyright © 2018年 王振海. All rights reserved.
//

#import "WDZAVKitManagerView.h"
#import "WDZCameraPhoto.h"

@class WDZNormalCamera;
@protocol WDZNormalCameraDelegate <NSObject>

- (void)normalCamera:(WDZNormalCamera *)camera didFinishedTakingPhoto:(NSArray *)photos;

@end

@interface WDZNormalCamera : WDZAVKitManagerView
//拍照按钮
@property (nonatomic, strong)  UIButton  *takePhotoBtn;
//取消按钮
@property (nonatomic, strong)  UIButton  *cancelBtn;
//确认按钮
@property (nonatomic, strong) UIButton *sureBtn;
//是否使用本地缓存策略 默认yes
@property (nonatomic, assign) BOOL isUseLocalCacheProlicy;

@property (nonatomic, weak) id<WDZNormalCameraDelegate> delegate;

//拍照结束 子类可对照片进行编辑
- (UIImage *)takePhotoEndWithImage:(UIImage *)originalImage;

@end
