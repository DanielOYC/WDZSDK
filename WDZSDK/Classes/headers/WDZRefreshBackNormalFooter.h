//
//  WDZRefreshBackNormalFooter.h
//  WDZRefreshExample
//
//  Created by MJ Lee on 15/4/24.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "WDZRefreshBackStateFooter.h"

@interface WDZRefreshBackNormalFooter : WDZRefreshBackStateFooter
@property (weak, nonatomic, readonly) UIImageView *arrowView;
/** 菊花的样式 */
@property (assign, nonatomic) UIActivityIndicatorViewStyle activityIndicatorViewStyle;
@end
