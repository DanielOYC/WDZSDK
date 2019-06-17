//
//  UIView+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIView (BaseKit)

+(UIButton *)addButtonWithFrame:(CGRect)frame backgroundColor:(nullable UIColor *)backgroundColor backgroundImage:(nullable UIImage *)backgroundImage selectedBackgroundImage:(nullable UIImage *)selectedBackgroundImage image:(nullable UIImage *)image selectedImage:(nullable UIImage *)selectedImage title:(nullable NSString *)title selectedTitle:(nullable NSString *)selectedTitle titleColor:(nullable UIColor *)color selectedColor:(nullable UIColor *)selectedColor fontNum:(CGFloat)font addTarget:(nullable id)target action:(nullable SEL)action;

- (void)showDialog:(NSString *)title :(NSString*)msg :(NSString *)btnTitle;

- (UIAlertView *)showAlertViewWithTitle:(NSString *)_title andMessage:(NSString *)msg andCancleBtnTitle:(NSString *)cancleBtnTitle andComfirmBtnTitle:(NSString *)comfirmBtnTitle andDelegate:(id)delegate;

@end
