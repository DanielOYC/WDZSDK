//
//  ManageMenuButton.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/3/19.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ManageMenuButton : UIView
//是否是多行
@property (assign, nonatomic)BOOL isNumofLine;


// 标志图片
@property (strong, nonatomic) UIImage *markImage;

// 标题
@property (copy, nonatomic) NSString *title;

// 设置为非nil时会显示出来，设置为nil时则会隐藏，设置为@""时显示为一个12像素的红点
@property (copy, nonatomic) NSString *badgeValue;

// 初始化方法
- (instancetype)initWithFrame:(CGRect)frame
              backgroundColor:(UIColor *)backgroundColor
                    markImage:(UIImage *)markImage
                        title:(NSString *)title;

// 添加目标动作方法
- (void)addTarget:(id)target action:(SEL)action;

@end
