//
//  WDZSearchBar.h
//  WDZStore
//
//  Created by 郑来贤 on 15/1/21.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//


#import "InsetTextField.h"
#import "WDZBaseView.h"

@protocol WDZSearchBarDelegate;
@interface WDZSearchBar : WDZBaseView<UITextFieldDelegate>

@property (weak , nonatomic) id<WDZSearchBarDelegate> delegate;

@property (weak , nonatomic) IBOutlet InsetTextField *searchTextField;
@property (weak , nonatomic) IBOutlet UIButton *searchBtn;
@property (weak, nonatomic) IBOutlet UIScrollView *userHeightScrollView;
@property (weak , nonatomic) IBOutlet UIButton *cancleBtn;

@property (weak , nonatomic) IBOutlet NSLayoutConstraint *left_constraint;
@property (weak , nonatomic) IBOutlet NSLayoutConstraint *right_constraint;



- (IBAction)cancleSearch:(id)sender;

- (void)setPlaceText:(NSString *)place;

+ (id)initFromNib;

@end

@protocol WDZSearchBarDelegate <NSObject>

@optional
- (void)searchTextDidChanged:(NSString *)text;

- (void)searchDidEndSearch:(WDZSearchBar *)searchbar;

- (void)searchCancleSearch:(WDZSearchBar *)searchbar;


@end
