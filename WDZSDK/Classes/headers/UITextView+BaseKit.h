//
//  UITextView+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UITextView (BaseKit)

/**
 @method 获取指定宽度width的字符串在UITextView上的高度
 @param textView 待计算的UITextView
 @param Width 限制字符串显示区域的宽度
 @result float 返回的高度
 */
+ (CGFloat) heightForString:(NSString *)string font:(UIFont *)font andWidth:(float)width;


+ (CGFloat) IMheightForString:(NSString *)string font:(UIFont *)font andWidth:(float)width;
/**
 网址
 */
- (void)setTextWithLinkAttribute:(NSString *)text andFont:(UIFont *)font;

/**
 识别网址标亮
 
 @param string 输入字符
 @param font  参数,文字大小
 @return 标亮好的 attributString
 */
-(NSMutableAttributedString*)subStr:(NSString *)string andFont:(UIFont *)font;

@end
