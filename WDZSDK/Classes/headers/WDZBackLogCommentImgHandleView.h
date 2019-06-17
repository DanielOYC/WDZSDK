//
//  WDZBackLogCommentImgHandleView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/14.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZBackLogCommentImgHandleViewDelegate <NSObject>
-(void)WDZBackLogCommentImgHandleViewDidClickAddImg;
-(void)WDZBackLogCommentImgHandleViewDidDeleteImg:(NSInteger)index imgsArray:(NSArray *)array;
-(void)WDZBackLogCommentImgHandleViewDidClickImg:(UIImage *)img index:(NSInteger)index;
@end

@interface WDZBackLogCommentImgHandleView : UIView

@property (nonatomic, weak) id<WDZBackLogCommentImgHandleViewDelegate> delegate;

@property (nonatomic, assign) NSInteger maxCount;

-(void)saveImgs:(NSArray *)imgs;

@end
