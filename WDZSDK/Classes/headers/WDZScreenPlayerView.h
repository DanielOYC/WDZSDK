//
//  WDZScreenPlayerView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/2.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZScreenPlayerView : UIView

@property (nonatomic, assign) CGRect originalFrame;

@property (nonatomic, strong) UIView *originalSuperView;

@property (nonatomic, assign) NSInteger index;

@property (nonatomic , assign)BOOL isPlaying;

//摄像头列表
@property (nonatomic, strong) WDZVideoModel *videoModel;

@property (nonatomic, strong) WDZShopModel *shop;


- (void)zoomFrame:(UIGestureRecognizer *)tap;

@end

@interface WDZFullScreenView : WDZScreenPlayerView


@end
