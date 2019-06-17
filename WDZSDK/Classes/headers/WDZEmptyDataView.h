//
//  WDZEmptyDataView.h
//  WDZStore
//
//  Created by 郑来贤 on 14-7-28.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.

#import <UIKit/UIKit.h>

@protocol WDZEmptyDataViewDelegate;
@interface WDZEmptyDataView : UIView

@property (strong , nonatomic) UIImageView *iconImageView;
@property (strong , nonatomic) UILabel *descriptionLabel;
@property (strong , nonatomic) UIButton *retryBtn;
@property (assign , nonatomic) float labelOffsetY;
@property (weak   , nonatomic) id<WDZEmptyDataViewDelegate> delegate;


- (instancetype)initWithFrame:(CGRect)frame andLogoImage:(UIImage *)logoIcon andDescriptionLabel:(NSString *)description  andRetryBtnIsShow:(BOOL )isShow;

@end

@protocol WDZEmptyDataViewDelegate <NSObject>

- (void)WDZEmptyDataViewBtnClickedDelegate;

@end
