//
//  WDZBackLogCommentHandleView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZProBlemHandleModel;
@protocol WDZBackLogCommentHandleViewDelegate <NSObject>
-(void)WDZBackLogCommentHandleViewDidBeginEditingWithUnit:(WDZProBlemHandleModel *)unit;
-(void)WDZBackLogCommentHandleViewTextViewChanging:(NSString *)text;
@end

@interface WDZBackLogCommentHandleView : UIView
@property (nonatomic, weak) id<WDZBackLogCommentHandleViewDelegate> delegate;
@property (nonatomic, strong) WDZProBlemHandleModel *model;

@property (nonatomic, strong) NSString *commentStr;

@property (nonatomic, assign) BOOL isShowTopLine;
@property (nonatomic, assign) BOOL isShowBottomLine;
@end
