//
//  WDZAddImageView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAddImageConfig.h"

@class WDZAddImgManagerConfig,WDZAddImageModel,WDZAddImageFrameModel,WDZImageShowModel;
@protocol WDZAddImageViewDelegate <NSObject>

/**
 高度变化
 */
-(void)WDZAddImageViewDidChangeHeight:(CGFloat)height;

/**
 监听图片数量变化
 */
-(void)WDZAddImageViewDidChangeImage:(NSMutableArray<WDZAddImageFrameModel *> *)imgArray isInitialize:(BOOL)isInitialize;
/**
 调用 唤起相册s事件
 */
-(void)WDZAddImageViewDidPickerPicture;
/**
 监听滚动事件
 index: 停止滚定索引
 */
-(void)scrollViewDidEndScrollToIndex:(NSInteger)index currentModel:(WDZAddImageFrameModel *)model;
@end


@interface WDZAddImageView : UIView
/**
 显示模式下的数据源
 */
@property (nonatomic, strong) NSMutableArray<id<WDZAddImageViewDataSource>> *datas;

/**
 初始化方法
 config： 配置对象，添加模式和展示模式在此配置
 delegate： 代理对象
 width： UI宽度
 datas：已有数据 需要实现协议
 */
+(instancetype)addImgViewWithConfig:(WDZAddImgManagerConfig *)config delegate:(id<WDZAddImageViewDelegate>)delegate datas:(NSMutableArray<id<WDZAddImageViewDataSource>> *)datas frame:(CGRect)frame shareBlock:(void(^)(WDZImageShowModel *model))shareBlock;



#pragma 添加图片模式
/**
 图片添加模式。oss上传资源
 */
-(void)uploadDatasToOssComplete:(void(^)(BOOL isSuccessed, NSArray<WDZAddImageModel *> *result,NSInteger failedCount))complete;
/**
 刷新当前配置
 */
-(void)refreshConfig:(WDZAddImgManagerConfig *)config;

/**
 主动唤起调用相册事件
 */
-(void)jumpToImagePicker;

/**
 如果是混合模式 主动唤起编辑功能
 */
-(void)activeResponseEdit;


/**
 获取配置文件
 */
-(WDZAddImgManagerConfig *)getConfig;

@end
