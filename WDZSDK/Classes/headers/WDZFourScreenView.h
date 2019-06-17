//
//  WDZFourScreenView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/2.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZFourScreenView : UIView
/**
 门店4个摄像头列表
 */
@property (nonatomic, strong) NSArray *fourVideoList;

@property (nonatomic, strong) WDZShopModel *shop;

- (void)play;

- (void)stop;

@end
