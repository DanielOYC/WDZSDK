//
//  WDZImageShowDeitalView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZImageShowConfig.h"
@class WDZImageShowModel;
@protocol WDZImageShowDeitalViewDelegate <NSObject>
/**
 返回
 */
-(void)WDZImageShowDeitalViewDidClickBack;
/**
 长按
 */
-(void)WDZImageShowDeitalViewDidAlertWithModel:(WDZImageShowModel *)model;

/**
 隐藏
 */
-(void)WDZImageShowDeitalViewDidDismiss;

/**
 长度隐藏
 */
-(void)WDZImageShowDeitalViewLongPictureWillDismissTransformY:(CGFloat)transformy scale:(CGFloat)scale;

/**
 播放结束
 */
-(void)WDZImageShowDeitalViewDidPlayEnd:(WDZImageShowModel *)model playTime:(CGFloat)duration;

#pragma 短视频相关
-(void)WDZShortVideoViewCellDidLike;

-(void)WDZShortVideoViewCellDidComment;

-(void)WDZShortVideoViewCellDidShare;

-(void)WDZShortVideoViewCellDidDownLoad;

-(void)WDZShortVideoViewDidClickUserHeader;

@end

@interface WDZImageShowDeitalView : UIView

@property (nonatomic, strong) WDZImageShowModel *model;

@property (nonatomic, weak) id<WDZImageShowDeitalViewDelegate> delegate;


@end



@interface WDZImageShowDeitalViewCell : UICollectionViewCell

@property (nonatomic, strong) WDZImageShowModel *model;

@property (nonatomic, strong) UIImage *downLoadImg;

/**
 查看原图偏移量
 */
@property (nonatomic, assign) CGFloat originalBtnTransFromY;

@property (nonatomic, weak) id<WDZImageShowDeitalViewDelegate> delegate;

/**
 查看原图
 */
- (void)showOriginalImage;

-(void)pause;

-(void)hiddenSetView;

-(void)showSetView;

-(void)hiddenLongVerticalView:(BOOL)isShow;

-(void)play;
@end


@interface WDZShortVideoViewCell: WDZImageShowDeitalViewCell

@property (nonatomic, assign) WDZShowShortVideoMangerType shortVideoType;

-(void)WDZImageShowDeitalViewDidDismiss:(BOOL)isShow;

@end

