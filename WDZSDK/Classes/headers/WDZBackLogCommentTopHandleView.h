//
//  WDZBackLogCommentTopHandleView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBackLogCommentView.h"

@protocol WDZBackLogCommentTopHandleViewDelegate <NSObject>
-(void)WDZBackLogCommentTopHandleViewDidClickCancle:(UIButton *)btn type:(WDZBackLogCommentType)type;

-(void)WDZBackLogCommentTopHandleViewDidClickcommit:(UIButton *)btn type:(WDZBackLogCommentType)type;
@end

@interface WDZBackLogCommentTopHandleView : UIView

@property (nonatomic, assign) WDZBackLogCommentType type;

@property (nonatomic, assign) BOOL isOperate;

@property (nonatomic, weak) id<WDZBackLogCommentTopHandleViewDelegate> delegate;

@property (nonatomic, assign) BOOL isEditing;

@property (nonatomic, retain)NSString *titleStr;

@end
