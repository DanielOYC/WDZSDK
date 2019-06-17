//
//  UIView+NavigationBar.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/9/12.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNavigationBar.h"
#import "WDZNSearchBar.h"

@interface UIView (NavigationBar)

@property (nonatomic, strong) WDZNavigationBar *navBar;

//返回按钮
@property (nonatomic, strong) UIButton *navBarBackButton;

/**导航栏上的右边的按钮*/
//@property (nonatomic, assign) CGFloat navBarTitleWidth;
//导航栏高度
- (CGFloat)navBarHeight;
//tabbar高度
- (CGFloat)tabBarHeight;

//创建导航栏
- (UIButton *)addNavigationBarWithTitle:(NSString *)title;
- (void)addNavigationNoBackWithTitle:(NSString *)title;

/**移除返回按钮的点击事件*/
- (void)removeBackButtonEvent;
//增加按钮 默认右侧
- (UIButton *)addTitleButton:(NSString *)title SELString:(NSString *)SELString;
- (UIButton *)addImageButton:(NSString *)image SELString:(NSString *)SELString;
- (UIButton *)addImageWithFile:(UIImage *)image SELString:(NSString *)SELString;
//增加按钮 任意位置 自由调整
- (UIButton *)addTitleButton:(NSString *)title SELString:(NSString *)SELString Frame:(CGRect)frame;
- (UIButton *)addImageButton:(NSString *)image SELString:(NSString *)SELString Frame:(CGRect)frame;
- (UIButton *)addImageWithFile:(UIImage *)image SELString:(NSString *)SELString Frame:(CGRect)frame;
/**
 增加多个按钮
 @param buttons 按钮的字或图片数组
 @param buttonType 按钮类型   0 文字  非0 图片
 @param SELStrings 方法名数组
 @return 最左边的按钮
 */
- (UIButton *)addButtons:(NSArray <NSString *>*)buttons type:(NSArray <NSNumber *>*)buttonTypes SELStrings:(NSArray <NSString *>*)SELStrings;

//增加Segementcontrol
- (UISegmentedControl *)addSegmentControlWithTitles:(NSArray <NSString *>*)titles Action:(NSString *)SELString;
- (UISegmentedControl *)addSegmentControlWithTitles:(NSArray <NSString *>*)titles Action:(NSString *)SELString Frame:(CGRect)frame;

////增加搜索栏
- (WDZNSearchBar *)addSearchBarWithFrame:(CGRect)frame placeHolder:(NSString *)placeHolder;

//增加自定义View
- (void)addCustomView:(UIView *)customView;
@end
