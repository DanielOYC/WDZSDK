//
//  WDZErrorView.h
//  WDZStore
//
//  Created by 郑来贤 on 14-7-28.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZErrorViewDelegate;
@interface WDZErrorView : UIView

@property (strong , nonatomic) UIImageView *iconImageView;
@property (strong , nonatomic) UILabel *descriptionLabel;
@property (assign , nonatomic) float labelOffsetY;
@property (weak   , nonatomic) id<WDZErrorViewDelegate> delegate;

@end

@protocol WDZErrorViewDelegate <NSObject>

- (void)WDZErrorViewClickedDelegate;

@end
