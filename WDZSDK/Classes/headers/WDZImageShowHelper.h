//
//  WDZImageShowHelper.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/12.
//

#import <Foundation/Foundation.h>

@interface WDZImageShowHelper : NSObject
+ (void)showWaitingDialogWithMsg:(NSString *)msg container:(UIView *)containerView;

+ (void)dismissWaitingDialogOnContainer:(UIView *)containerView;

+ (void)showMessage:(NSString *)msg container:(UIView *)containerView;
@end
