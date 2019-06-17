//
//  WDZImagePageView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/29.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZPointTaskModel.h"

@interface WDZImagePageView : UIView
{
//    WDZEmptyDataView *loadImageErrorView;
}

@property (strong , nonatomic) UIImageView *imageView;

@property (strong , nonatomic) WDZPictureForCheck *picModel;

- (void)showLoadErrorView;
- (void)hideLoadErrorView;

@end
