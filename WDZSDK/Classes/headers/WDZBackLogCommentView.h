//
//  WDZBackLogCommentView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef enum : NSUInteger {
    WDZBackLogCommentTypeComment = 0,//评论
    WDZBackLogCommentTypeHandleReject = 1,//整改不通过
    WDZBackLogCommentTypeHandleResolve = 2
} WDZBackLogCommentType;
@protocol WDZBackLogCommentViewDelegate <NSObject>
//提交评论
-(void)WDZBackLogCommentViewDidClickCommitWithImgs:(NSArray *)imgs comment:(NSString *)comment btn:(UIButton *)btn;
//整合通过提交
-(void)WDZBackLogCommentViewDidClickCommitHandleResolveImgs:(NSArray *)imgs comment:(NSString *)comment btn:(UIButton *)btn;
//整合拒绝 提交
-(void)WDZBackLogCommentViewDidClickCommitHandleRejectImgs:(NSArray *)imgs comment:(NSString *)comment btn:(UIButton *)btn;
@end

@interface WDZBackLogCommentView : UIView

@property (nonatomic, strong) NSArray *shops;
@property (nonatomic, retain) NSString *titleStr;

@property (nonatomic, assign) WDZBackLogCommentType type;

@property (nonatomic, weak) id<WDZBackLogCommentViewDelegate> delegate;


+(void)showBackLogCommentViewWith:(id<WDZBackLogCommentViewDelegate>)delegate  needImgView:(BOOL)needImgView;
+(void)showBackLogCommentViewWith:(id<WDZBackLogCommentViewDelegate>)delegate type:(WDZBackLogCommentType)type  needImgView:(BOOL)needImgView;
+(instancetype)showBackLogCommentViewWithDelegate:(id<WDZBackLogCommentViewDelegate>)delegate  needImgView:(BOOL)needImgView;
+(instancetype)showBackLogCommentViewWithDelegate:(id<WDZBackLogCommentViewDelegate>)delegate type:(WDZBackLogCommentType)type  needImgView:(BOOL)needImgView;

+(instancetype)showBackLogCommentViewWithDelegate:(id<WDZBackLogCommentViewDelegate>)delegate type:(WDZBackLogCommentType)type needImgView:(BOOL)needImgView isOperate:(BOOL)isOperate;


+(instancetype)showBackLogCommentViewWithDelegate:(id<WDZBackLogCommentViewDelegate>)delegate type:(WDZBackLogCommentType)type needImgView:(BOOL)needImgView inView:(UIView *)inView;
+(instancetype)showBackLogCommentViewWithDelegate:(id<WDZBackLogCommentViewDelegate>)delegate type:(WDZBackLogCommentType)type needImgView:(BOOL)needImgView isOperate:(BOOL)isOperate inView:(UIView *)inView;

+(void)dismiss;
+(void)dismissComplete:(void(^)())complete;
+(void)commentViewShowHUDMessage:(NSString *)message;

-(void)dismissWithComplete:(void(^)())complete;
@end
