//
//  OnsitePatrolShopPhotoView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/30.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OnsitePatrolShopPhotoView;
@protocol OnsitePatrolShopPhotoViewDelegate <NSObject>

@optional
// 点击了添加图片按钮 ()
- (void)photoViewAddImageViewClicled:(OnsitePatrolShopPhotoView *)photoView withFullImage:(BOOL)FullImage;
// 点击了某张图片
- (void)photoView:(OnsitePatrolShopPhotoView *)photoView clickedImage:(UIImage *)image withImageName:(NSString *)imageName atIndex:(NSInteger)index withPicId:(NSString *)picId withPicUrl:(NSString *)picUrl;

@end

@interface OnsitePatrolShopPhotoView : UIView

@property (nonatomic , retain)UICollectionView *collectionView;

/**
 是否是现场巡店的图片选择
 */
@property (nonatomic , assign)BOOL isOnsitePatrol;

@property (nonatomic , retain)WDZShopModel *shop;

@property (weak, nonatomic) id<OnsitePatrolShopPhotoViewDelegate>delegate;

/**
 选中的图片模型
 */
@property (nonatomic, strong) NSMutableArray *selectDatas;

//网络图片
@property (nonatomic , assign)NSInteger netImageInter;

@property (strong, nonatomic) NSMutableArray<NSDictionary<NSString *, NSString *> *> *currentImages;

/**
 抓拍
 */
- (void)addImageViewTapAction;

// 插入一张图片（在最后的位置上）
- (int)insertImage:(NSData *)imageData withImageName:(NSString *)imageName withDeviceId:(NSString *)deviceId withPicId:(NSString *)picId withImageUrl:(NSString *)imageUrl;

// 删除某个下标下的图片
- (int)deleteImageAtIndex:(NSInteger)index withMaxImage:(NSInteger)maxImage;

// 更新某个下标下的图片
- (void)updateImage:(UIImage *)newImage withImageName:(NSString *)imageName atIndex:(NSInteger)index withDeviceId:(NSString *)deviceId;

@end
