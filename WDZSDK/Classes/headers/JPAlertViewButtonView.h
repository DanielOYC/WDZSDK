//
//  JPAlertViewButtonView.h
//  JPAlertView
//
//  Created by ovopark_iOS on 16/6/21.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JPAlertViewButton.h"

@class JPAlertViewButtonView;
@protocol JPAlertViewButtonViewDelegate <NSObject>
@optional

- (void)alertViewButtonView:(JPAlertViewButtonView *)alertViewButtonView clickedButtonAtIndex:(NSInteger)buttonIndex;

@end

@interface JPAlertViewButtonView : UIView

// 初始化方法
- (instancetype)initWithFrame:(CGRect)frame cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSArray *)otherButtonTitles;

@property (strong, nonatomic) id<JPAlertViewButtonViewDelegate>delegate;

// default is R:0.0 G:122.0/255.0 B:1.0 A:1.0
@property (strong, nonatomic) UIColor *tintColor;

@end
