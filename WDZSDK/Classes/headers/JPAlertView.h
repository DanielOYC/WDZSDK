//
//  JPAlertView.h
//  JPAlertView
//
//  Created by ovopark_iOS on 16/6/20.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "JPAlertViewTextView.h"
#import "JPAlertViewButtonView.h"

@class JPAlertView;
@protocol JPAlertViewDelegate <NSObject>
@optional

// Called when a optionalItem is clicked and it turned out to be selected.
- (void)alertView:(JPAlertView *)alertView selectOptionalItem:(JPAlertViewOptionalItem *)item atIndex:(NSInteger)itemIndex;

// Called when a optionalItem is clicked and it turned out to be deselected.
- (void)alertView:(JPAlertView *)alertView deselectOptionalItem:(JPAlertViewOptionalItem *)item atIndex:(NSInteger)itemIndex;

// Called when a button is clicked. The view will be automatically dismissed after this call returns
- (void)alertView:(JPAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex;

// before animation and showing view
- (void)willPresentAlertView:(JPAlertView *)alertView;

// after animation
- (void)didPresentAlertView:(JPAlertView *)alertView;

// before animation and hiding view
- (void)alertView:(JPAlertView *)alertView willDismissWithButtonIndex:(NSInteger)buttonIndex;

// after animation
- (void)alertView:(JPAlertView *)alertView didDismissWithButtonIndex:(NSInteger)buttonIndex;

@end

@interface JPAlertView : UIView <JPAlertViewTextViewDelegate, JPAlertViewButtonViewDelegate>

- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id /*<JPAlertViewDelegate>*/)delegate optionalItems:(NSArray<NSString *> *)optionalItems cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION;


@property (strong, nonatomic) id<JPAlertViewDelegate>delegate;

// default is R:0.0 G:122.0/255.0 B:1.0 A:1.0
@property (strong, nonatomic) UIColor *tintColor;

@property (copy, nonatomic) NSString *title;

@property (copy, nonatomic) NSString *message;

// used to transfer value
@property (strong, nonatomic) NSDictionary *userInfo;


- (void)show:(void(^)())completedHandler;

- (void)hide:(void(^)())completedHandler;

@end
