//
//  ImageAndTitleButton.h
//  ImageAndTitleButton
//
//  Created by ovopark_iOS on 15/12/9.
//  Copyright © 2015年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ImageAndTitleButton : UIView

/**
底部文字
 */
@property (nonatomic, strong) UILabel *titleLabel;

- (ImageAndTitleButton *)initWithFrame:(CGRect)frame image:(UIImage *)image andTitle:(NSString *)title forState:(UIControlState)state;

/**
 设置属性按钮
 */
- (ImageAndTitleButton *)initWithFrame:(CGRect)frame image:(UIImage *)image andAttributeTitle:(NSMutableAttributedString *)title forState:(UIControlState)state;

- (void)addTarget:(id)target andAction:(SEL)action;

- (void)setImage:(UIImage *)image andTitle:(NSString *)title forState:(UIControlState)state;

/**
 设置当前显示的图片
 */
- (void)setShowImage:(UIImage *)image;

/**
 设置各个状态下显示图片
 */
- (void)setImage:(UIImage *)image SelectedImage:(UIImage *)selectedImage disableImage:(UIImage *)disableImage;
/**
 设置属性字符串
 */
- (void)setImage:(UIImage *)image andAttributeTitle:(NSMutableAttributedString *)title forState:(UIControlState)state;

@property(nonatomic,assign) BOOL selected;
/**
 是否允许点击
 */
@property(nonatomic, assign) BOOL enable;


@end
