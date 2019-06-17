//
//  WDZPicsOfDeviceView.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/5/7.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZPicOfDeviceCollectionViewCell.h"

@protocol WDZPicsOfDeviceViewDelegate;
@interface WDZPicsOfDeviceView : UIView<UICollectionViewDataSource,UICollectionViewDelegate>

@property (weak , nonatomic) IBOutlet UICollectionView *collectionView;

@property (strong ,nonatomic) NSArray *ulrsOfPic;

@property (weak , nonatomic) id<WDZPicsOfDeviceViewDelegate> delegate;

@property (weak , nonatomic) IBOutlet  UILabel *descriptionLab;


+ (id) initFromNib;

- (void)reloadWithArray:(NSArray *)pics;

- (void)loadErr;


@end

@protocol WDZPicsOfDeviceViewDelegate <NSObject>

- (void)picsOfDeviceView:(WDZPicsOfDeviceView *)view didSelectImageDic:(NSDictionary *)dic andIndex:(NSIndexPath *)path;

@end
