//
//  WDZCameraPhotoCell.h
//  WDZCamera
//
//  Created by 王振海 on 2018/10/5.
//  Copyright © 2018年 王振海. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZCameraPhoto.h"

@protocol WDZCameraPhotoCellDelegate<NSObject>

- (void)cameraPhotoCell:(WDZCameraPhoto *)model didClickSelectedOrUnselected:(UIButton *)sender;

@end

@interface WDZCameraPhotoCell : UICollectionViewCell

@property (nonatomic, weak) id<WDZCameraPhotoCellDelegate> delegate;

@property (nonatomic, strong) WDZCameraPhoto *model;

@end
