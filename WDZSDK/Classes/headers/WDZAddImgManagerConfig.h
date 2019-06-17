//
//  WDZAddImgManagerConfig.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/11.
//

#import <Foundation/Foundation.h>
#import "WDZPickerConfig.h"

typedef NS_ENUM(NSUInteger, WDZAddImageViewType) {
    WDZAddImageViewShowImag,//展示
    WDZAddImageViewAddImag,//添加图片
    WDZAddImageViewAddHybrid//混合模式（添加 模式 附带网络w图片）
};


@interface WDZAddImgManagerConfig : NSObject
/**
 添加图片模式下的图片来源
 */
@property (nonatomic, assign) WDZPickerMangerType imgSourceType;

@property (nonatomic, assign) WDZAddImageViewType type;
/**
 每行显示个数
 */
@property (nonatomic, assign) NSInteger columnNumber;
/**
 最多显示个数  0表示不限制行数
 */
@property (nonatomic, assign) NSInteger maxItemNumber;
/**
 行间距
 */
@property (nonatomic, assign) CGFloat minimumLineSpacing;
/**
 列间距
 */
@property (nonatomic, assign) CGFloat minimumInteritemSpacing;

/**
 相册 视频时长
 */
@property (nonatomic, assign) NSInteger videoMaximumDuration;

/**
 拍摄时长
 */
@property (nonatomic, assign) NSInteger recordMaxTime;

/**
 添加图片模式   最大添加图片个数
 */
@property (nonatomic, assign) NSInteger maxAddImgCount;

/**
 添加图片模式  从相册选取是否支持短视频
 */
@property (nonatomic, assign) BOOL allowPickingVideo;
/**
 cell背景颜色
 */
@property (nonatomic, strong) UIColor *cellBgColor;
/**
 滚动方向
 */
@property (nonatomic, assign) UICollectionViewScrollDirection scrollDirection;
/**
 添加模式下  是否需要显示添加按钮
 */
@property (nonatomic, assign) BOOL needShowAdd;

/**
 添加模式是否需要显示至添加入口
 */
@property (nonatomic, assign) BOOL needScrollToAdd;

/**
 添加图片模式
 */
+(instancetype)addImgConfig;
/**
 显示图片模式
 */
+(instancetype)showImgConfig;
/**
 混合模式
 */
+(instancetype)hybridConfig;

@end
