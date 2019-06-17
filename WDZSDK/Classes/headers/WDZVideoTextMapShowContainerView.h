//
//  WDZVideoTextMapShowContainerView.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/7/31.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZVideoTextMapShowContainerView : UIView

// 长按事件回调
@property (copy, nonatomic) void (^longPressBlock)(WDZVideoTextMapShowContainerView *textMapShowContainerView);

// 双击事件回调
@property (copy, nonatomic) void (^doubleClickBlock)(WDZVideoTextMapShowContainerView *textMapShowView, NSString *text, UIColor *textColor);

@property (strong, nonatomic) UITextView *textView;

- (void)setText:(NSString *)text textColor:(UIColor *)textColor;

@end
