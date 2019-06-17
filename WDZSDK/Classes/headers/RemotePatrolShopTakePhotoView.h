//
//  RemotePatrolShopTakePhotoView.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 16/7/25.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
@class OnsitePatrolShopPhotoView;

@interface RemotePatrolShopTakePhotoView : UIView
@property (nonatomic , retain)WDZShopModel *shop;
/**
 是否是模板 默认为No
 */
@property (nonatomic , assign)BOOL isTemp;
/**
 任务ID
 */
@property (nonatomic , retain)NSString *taskId;

/**
 任务小项ID
 */
@property (nonatomic  , retain)NSString *subItemID;

@property (copy, nonatomic) NSString *userDescription;

@property (strong, nonatomic) NSMutableArray<UIImage *> *pictureArray;

@property (strong, nonatomic)NSString *deviceId;

@property (strong, nonatomic) OnsitePatrolShopPhotoView *takePhotoView;

@property (copy, nonatomic) void(^takePhotoCancelBlock)();


@property (copy, nonatomic) NSData * (^takePhotoAddImageBlock)();

@property (copy, nonatomic) void(^takePhotoSaveBlock)(BOOL textChanged, BOOL pictureChanged, NSDictionary *returnInfo);
- (void)photoViewAddImageViewClicled:(OnsitePatrolShopPhotoView *)photoView withFullImage:(BOOL)FullImage;
/**
 重置images
 */
-(void)setImagesWithImagesArray:(NSMutableArray *)muarray;

/**
 更新数据
 */
-(void)upDataWithPickerChanged:(BOOL)pickerChanged;
@end
