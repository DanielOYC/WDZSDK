//
//  WDZAddImageItemView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/11.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZAddImageConfig.h"

@class WDZAddImageFrameModel;

@protocol WDZAddImageItemViewDelegate <NSObject>
-(void)WDZAddImageItemViewDidClickImgViewWithIndexPath:(NSIndexPath *)indexPath model:(WDZAddImageFrameModel *)model;
-(void)WDZAddImageItemViewDidDeleteImgWithIndexPath:(NSIndexPath *)indexPath model:(WDZAddImageFrameModel *)model;
-(void)WDZAddImageItemViewDidAddImageWithIndexPath:(NSIndexPath *)indexPath model:(WDZAddImageFrameModel *)model;
@end

@interface WDZAddImageItemView : YYAnimatedImageView

@property (nonatomic, weak) id<WDZAddImageItemViewDelegate> delegate;

@property (nonatomic, strong) WDZAddImageFrameModel *frameModel;

@end


@interface WDZAddImageItemCellView: UICollectionViewCell

@property (nonatomic, weak) id<WDZAddImageItemViewDelegate> delegate;

@property (nonatomic, strong) WDZAddImageFrameModel *frameModel;

@end

