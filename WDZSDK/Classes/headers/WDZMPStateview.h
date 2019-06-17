//
//  WDZMinitorPlayerStateview.h
//  WDZVideoPlayer
//
//  Created by 王振海 on 2017/5/16.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZMPStateviewDelegate <NSObject>

- (void)didClickBigButton:(UIButton *)button;

@end

@interface WDZMPStateview : UIView

@property (nonatomic, weak) id<WDZMPStateviewDelegate> delegate;

@end
