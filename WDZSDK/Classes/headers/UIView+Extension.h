//
//  UIView+Extension.h
//  Fisher
//
//  Created by apple on 16-6-27.
//  Copyright (c) 2016年 Hayder. All rights reserved.
// 直接访问视图的x，y，w,h centerX centerY方法

#import <UIKit/UIKit.h>

@interface UIView (Extension)

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
/** 最右边 */
@property (nonatomic, assign) CGFloat right;

/** 最左边 */
@property (nonatomic, assign) CGFloat left;

/** 最下边 */
@property (nonatomic, assign) CGFloat bottom;

//@property (assign , nonatomic) NSInteger AngleNum;
//@property (strong , nonatomic) UILabel *redAngleLab;


//- (UIViewController *_Nullable)getViewController;



- (UITabBarController *)tabbarController;

/**
 *   制造圆形 View
 */
+(void)roundView:(UIView *)view WithWidth:(CGFloat)width;
-(void)roundWithWidth:(CGFloat)width andBorderColor:(nullable UIColor *)color;

-(UILabel *)addAngleWithNum:(NSInteger)num atFrame:(CGRect)frame andLab:(nullable UILabel *)lab;

@end
