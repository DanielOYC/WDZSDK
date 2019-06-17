//
//  WDZImageShowTopHandleView.h
//  test
//
//  Created by dingkan on 2018/9/27.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZImageShowConfig.h"

@protocol WDZImageShowTopHandleViewDelegate <NSObject>
-(void)WDZImageShowTopHandleViewDidBack;
-(void)WDZImageShowTopHandleViewDidShareClick;
-(void)WDZImageShowTopHandleViewDidEditClick;
@end

@interface WDZImageShowTopHandleView : UIView

@property (nonatomic, assign) WDZShowImageMangerType type;

@property (nonatomic, assign) BOOL isVideo;

@property (nonatomic, assign) NSInteger totalCount;

@property (nonatomic, assign) NSInteger currentIndex;

@property (nonatomic, assign) BOOL needBackBtn;

-(instancetype)initWithFrame:(CGRect)frame delegate:(id<WDZImageShowTopHandleViewDelegate>)delegate needBack:(BOOL)needBack;

@end
