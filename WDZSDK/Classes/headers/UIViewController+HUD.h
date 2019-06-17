//
//  UIViewController+HUD.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/1/24.
//  Copyright © 2017年 wangzhenhai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (HUD)

- (void)showSuccessMessage:(NSString *)msg;
- (void)showErrorMessage:(NSString *)msg;
- (void)showMessage:(NSString *)msg;
- (void)TOAST:(NSString *)msg;

- (void)showWaitingDialog;
- (void)showWaitingDialogWithMsg:(NSString *)msg;
- (void)dismissWaitingDialog;

@end
