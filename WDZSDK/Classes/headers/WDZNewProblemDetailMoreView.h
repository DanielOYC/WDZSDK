//
//  WDZNewProblemDetailMoreView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZNewProblemDetailMoreViewDelegate <NSObject>
-(void)WDZNewProblemDetailMoreViewDidClick;
@end

@interface WDZNewProblemDetailMoreView : UIView
@property (nonatomic, weak) id<WDZNewProblemDetailMoreViewDelegate> delegate;
@end
