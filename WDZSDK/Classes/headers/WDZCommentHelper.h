//
//  WDZCommentHelper.h
//  test
//
//  Created by dingkan on 2018/10/11.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface WDZCommentHelper : NSObject

+ (void)showWaitingDialogWithMsg:(NSString *)msg container:(UIView *)containerView;

+ (void)dismissWaitingDialogOnContainer:(UIView *)containerView;

+ (void)showMessage:(NSString *)msg container:(UIView *)containerView;

@end
