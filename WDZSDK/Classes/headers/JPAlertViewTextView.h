//
//  JPAlertViewTextView.h
//  JPAlertView
//
//  Created by ovopark_iOS on 16/6/21.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JPAlertViewOptionalItem.h"

@class JPAlertViewTextView;
@protocol JPAlertViewTextViewDelegate <NSObject>

@optional
- (void)alertViewTextView:(JPAlertViewTextView *)alertViewTextView selectOptionalItem:(JPAlertViewOptionalItem *)item atIndex:(NSInteger)itemIndex;
- (void)alertViewTextView:(JPAlertViewTextView *)alertViewTextView deselectOptionalItem:(JPAlertViewOptionalItem *)item atIndex:(NSInteger)itemIndex;

@end

@interface JPAlertViewTextView : UIView

- (instancetype)initWithFrame:(CGRect)frame title:(NSString *)title message:(NSString *)message delegate:(id /*<JPAlertViewDelegate>*/)delegate optionalItems:(NSArray<NSString *> *)optionalItems;

@property (strong, nonatomic) id<JPAlertViewTextViewDelegate>delegate;

// default is R:0.0 G:122.0/255.0 B:1.0 A:1.0
@property (strong, nonatomic) UIColor *tintColor;

@property (copy, nonatomic) NSString *title;

@property (copy, nonatomic) NSString *message;

@end
