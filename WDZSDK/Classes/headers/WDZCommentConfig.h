//
//  WDZCommentConfig.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "WDZPickerConfig.h"
#import "WDZCommentHandleModel.h"

@interface WDZCommentConfig : NSObject
/**
 添加图片模式下的图片来源
 */
@property (nonatomic, assign) WDZPickerMangerType imgSourceType;
/**
 相册 视频时长
 */
@property (nonatomic, assign) NSInteger videoMaximumDuration;

/**
 拍摄时长
 */
@property (nonatomic, assign) NSInteger recordMaxTime;
/**
 标题
 */
@property (nonatomic, strong) NSString *navTitle;
/**
 左边按钮颜色
 */
@property (nonatomic, strong) NSString *leftTitle;
/**
 右边按钮文案
 */
@property (nonatomic, strong) NSString *rightTitle;
/**
 navTitle颜色
 */
@property (nonatomic, strong) UIColor *navTitleColor;
/**
 左边按钮颜色
 */
@property (nonatomic, strong) UIColor *leftNormalColor;
/**
 右边按钮颜色
 */
@property (nonatomic, strong) UIColor *rightNormalColor;
/**
 左边按钮字体大小
 */
@property (nonatomic, assign) CGFloat leftFont;
/**
 右部按钮字体大小
 */
@property (nonatomic, assign) CGFloat rightFont;
/**
 navTitle字体大小
 */
@property (nonatomic, assign) CGFloat navFont;
/**
 占位文案
 */
@property (nonatomic, strong) NSString *commentPlaceStr;
/**
 是否需要添加图片
 */
@property (nonatomic, assign) BOOL needAddImgView;
/**
 添加图片最大张数
 */
@property (nonatomic, assign) NSInteger maxImgNumber;
/**
 相册选取是否包含video
 */
@property (nonatomic, assign) BOOL allowPickerVideo;

/**
提交时 必须包含文案
 */
@property (nonatomic, assign) BOOL mustContainComment;
/**
 提交时 必须包含图片
 */
@property (nonatomic, assign) BOOL mustContainImgs;

/**
 输入字符限制个数
 */
@property (nonatomic, assign) NSInteger maxCNum;

/**
 操作栏数据
 */
@property (nonatomic, strong) NSMutableArray<WDZCommentHandleModel *> *handleDatas;


/**
 无图片添加模式
 默认 提交时文案和图片是必要条件
 */
+(instancetype)commentConfitWithNavTitle:(NSString *)navTitle leftTitle:(NSString *)leftTitle rightTitle:(NSString *)rightTitle commentPlaceStr:(NSString *)commentPlaceStr;

/**
 有图片添加模式
 默认 提交时文案和图片是必要条件
 */
+(instancetype)commentWithImgConfitWithNavTitle:(NSString *)navTitle leftTitle:(NSString *)leftTitle rightTitle:(NSString *)rightTitle commentPlaceStr:(NSString *)commentPlaceStr maxImgNumber:(NSInteger)maxImgNumber
                               allowPickerVideo:(BOOL)allowPickerVideo;
@end
