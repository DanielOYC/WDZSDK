//
//  WDZBackLogCommentCommitView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/15.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZBackLogCommentCommitViewDelegate <NSObject>
-(void)WDZBackLogCommentCommitViewDidClickSave:(UIButton *)btn;
-(void)WDZBackLogCommentCommitViewDidClickTranspond:(UIButton *)btn;
@end

@interface WDZBackLogCommentCommitView : UIView
@property (nonatomic, weak) id<WDZBackLogCommentCommitViewDelegate> delegate;
@end
