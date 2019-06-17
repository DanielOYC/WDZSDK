//
//  WDZLogoutView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/16.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import "WDZBaseView.h"

@protocol WDZLogoutViewDelegate;
@interface WDZLogoutView : WDZBaseView

@property (weak , nonatomic) id<WDZLogoutViewDelegate> delegate;

@property (strong, nonatomic) UIButton *retryBtn; // 登录按钮

@end

@protocol WDZLogoutViewDelegate <NSObject>

- (void)WDZLogoutViewOnRetryLoginDelegate;

@end
