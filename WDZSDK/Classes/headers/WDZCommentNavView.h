//
//  WDZCommentNavView.h
//  test
//
//  Created by dingkan on 2018/10/11.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZCommentConfig;
@protocol WDZCommentNavViewDelegate <NSObject>
-(void)WDZCommentNavViewDidClickLeftBtn;
-(void)WDZCommentNavViewDidClickRightBtn;
@end
@interface WDZCommentNavView : UIView

@property (nonatomic, weak) id<WDZCommentNavViewDelegate> delegate;

@property (nonatomic, strong) WDZCommentConfig *config;

-(UIButton *)getNavLeftBtn;
-(UIButton *)getNavRightBtn;
@end
