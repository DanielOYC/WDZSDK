//
//  TimeButton.h
//  VideoReplay
//
//  Created by ovopark_iOS on 15/10/19.
//  Copyright © 2015年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TimeButton : UIView

@property (assign, nonatomic) BOOL selected;


- (void)setTitleFont:( UIFont * _Nonnull)font;
- (void)setTitle:(nullable NSString *)title forState:(UIControlState)state;
- (void)setTitleColor:(nullable UIColor *)titleColor forState:(UIControlState)state;
- (void)addTarget:(nullable id)target action:(nonnull SEL)action forControlEvents:(UIControlEvents)controlEvents;


@end
