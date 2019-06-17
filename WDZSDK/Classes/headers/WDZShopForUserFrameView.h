//
//  WDZShopSelectFrameView.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 17/2/21.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"

@protocol WDZShopForUserFrameViewDelegate <NSObject>

-(void)WDZShopForUserFrameViewDelegateOnbackBtnClick;
- (void)WDZShopForUserFrameViewDelegateOnokBtnClick;

@end

@interface WDZShopForUserFrameView : WDZBaseFrameView

@property(nonatomic , weak) id<WDZShopForUserFrameViewDelegate>delegate;

//确定
@property (nonatomic , retain)UIButton *okButton;

//全选
@property (nonatomic , retain)UIButton *allButton;

@end
