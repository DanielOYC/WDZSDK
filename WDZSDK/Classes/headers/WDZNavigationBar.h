//
//  WDZNavigationBar.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-9.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZButton+Block.h"

@interface WDZNavigationBar : UIView

@property (nonatomic , strong)UIImageView *backgroundImageView;

@property (strong , nonatomic) UIButton *titleButton;

// daniel
@property (strong, nonatomic) UIButton *backButton;
// 导航栏右边按钮数组,0最右按钮，以此类推
@property (strong, nonatomic) NSArray <UIButton *> *navRightButtons;
// 导航栏左边按钮数组，0最左按钮，以此类推
@property (strong, nonatomic) NSArray <UIButton *> *navLeftButtons;
// daniel

- (void)setWDZNavigationBarBackgroundImage:(UIImage *)backgroundImage;
- (void)setNavTitleName:(NSString *)_title;
- (void)hideWDZNavigationBar;
- (void)showWDZNavigationBar;
- (void)animationHideWDZNavigationBar;
- (void)animationShowWDZNavigationBar;
- (void)setNavBackgroundColor:(UIColor *)bgColor;
- (void)setNaviTitleColor:(UIColor *)titleColor;
- (void)setNavbarBackColor:(UIColor *)bgColor andShadowOpacity:(CGFloat)shadowOpacity;

@end

