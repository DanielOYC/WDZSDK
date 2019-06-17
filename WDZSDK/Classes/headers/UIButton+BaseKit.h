//
//  UIButton+BaseKit.h
//  WDZForAppStore
//
//  Created by 李轩霖 on 2018/10/18.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <objc/runtime.h>

typedef void (^ActionBlock)();

typedef NS_ENUM(NSUInteger, MKButtonEdgeInsetsStyle) {
    MKButtonEdgeInsetsStyleTop, // image在上，label在下
    MKButtonEdgeInsetsStyleLeft, // image在左，label在右
    MKButtonEdgeInsetsStyleBottom, // image在下，label在上
    MKButtonEdgeInsetsStyleRight // image在右，label在左
};


@interface UIButton (BaseKit)

@property (readonly) NSMutableDictionary *event;

- (void) handleControlEvent:(UIControlEvents)controlEvent withBlock:(ActionBlock)action;

/**
 *  设置button的titleLabel和imageView的布局样式，及间距
 *
 *  @param style titleLabel和imageView的布局样式
 *  @param space titleLabel和imageView的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(MKButtonEdgeInsetsStyle)style
                        imageTitleSpace:(CGFloat)space;



-(instancetype)initWithFrame:(CGRect)frame backgroundColor:(nullable UIColor*)backgroundColor backgroundImage:(nullable UIImage *)backgroundImage selectedBackgroundImage:(UIImage *)selectedBackgroundImage image:(nullable UIImage *)image selectedImage:(nullable UIImage *)selectedImage title:(nullable NSString *)title selectedTitle:(nullable NSString *)selectedTitle titleColor:(nullable UIColor *)color selectedColor:(nullable UIColor *)selectedColor fontNum:(CGFloat)font addTarget:(nullable id)target action:(nullable SEL)action;



- (void) setImage:(UIImage *)image withTitle:(NSString *)title forState:(UIControlState)stateType;

@end
