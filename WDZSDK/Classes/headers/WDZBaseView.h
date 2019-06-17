//
//  WDZBaseView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/3.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZSharePopView.h"

@class WDZLogoutView,WDZSharePopView;
@interface WDZBaseView : UIView

- (void)showRequestViewWithText:(NSString *)text;
- (void)hideRequestView;

- (void)showRequestErrorViewWithText:(NSString *)text andDelegate:(id)delegate;
- (void)hideRequestErrorView;

- (WDZLogoutView *)showLogoutView;
- (void)hideLogoutView;

- (WDZSharePopView *)showSharePopViewWithDelegate:(id)delegate;
- (void)hideSharePopView:(BOOL)animate;

//获取当前屏幕显示的viewcontroller
- (UIViewController *)getCurrentVC;


@end
