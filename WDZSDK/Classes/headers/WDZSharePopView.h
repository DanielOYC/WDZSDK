//
//  WDZSharePopView.h
//  WDZStore
//
//  Created by 郑来贤 on 15/1/19.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//


@protocol WDZSharePopViewDelegate;
@interface WDZSharePopView : UIView

+ (instancetype)initFromNib;

- (IBAction)onShare:(UIButton *)sender;

@property (weak , nonatomic) id<WDZSharePopViewDelegate> delegate;

@property (weak , nonatomic) IBOutlet UIButton *weixinBtn;
@property (weak , nonatomic) IBOutlet UILabel  *weixinLabel;

@property (weak , nonatomic) IBOutlet UIButton *friendsBtn;
@property (weak , nonatomic) IBOutlet UILabel  *friendsLabel;

@end

@protocol WDZSharePopViewDelegate <NSObject>

- (void)sharePopView:(WDZSharePopView *)popView didSelectedBtnIndex:(NSInteger )btnIndex;

@end

