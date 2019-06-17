//
//  JPAlertViewButton.h
//  JPAlertView
//
//  Created by ovopark_iOS on 16/6/21.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPAlertViewButton : UIView

- (instancetype)initWithFrame:(CGRect)frame title:(NSString *)title tag:(NSInteger)tag;

@property (copy, nonatomic) NSString *title;

@property (copy, nonatomic) UIFont *titleFont;

// default is R:0.0 G:122.0/255.0 B:1.0 A:1.0
@property (strong, nonatomic) UIColor *titleColor;

- (void)addTarget:(id)target action:(SEL)action;

@end
