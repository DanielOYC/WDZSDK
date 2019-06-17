//
//  UIView+HUD.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-9.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>


@class MBProgressHUD;
@interface UIView (HUD)

- (void)WDZ_toastMessage:(NSString*)message;

// show text only
- (void)WDZ_showTextHUDWithPromptMessage:(NSString*)message andOffset_y:(CGFloat) offset_y andMargin:(CGFloat)margin andDuration:(NSTimeInterval) time;

// show activity
- (MBProgressHUD *)WDZ_showActivityHUD;
// hide activity
-(void)WDZ_hideActivityHUD;

/**
 没有描述的activity
 */
- (void)WDZ_showActivityHUDNODescription;

-(MBProgressHUD *)WDZ_showActivityHUDWithDescription:(NSString *)descripotion;

// show progress
- (MBProgressHUD *)WDZ_showProgressWithDescroption:(NSString *)descripotion;


- (void)showSuccessMessage:(NSString *)msg;
- (void)showErrorMessage:(NSString *)msg;
- (void)showMessage:(NSString *)msg;

- (void)TOAST:(NSString *)msg;

- (void)showWaitingDialog;
- (void)showWaitingDialogWithMsg:(NSString *)msg;
- (void)dismissWaitingDialog;


@end
