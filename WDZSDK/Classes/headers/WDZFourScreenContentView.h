//
//  WDZFourScreenView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/2.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZFourScreenContentView : UIScrollView

@property (nonatomic, assign) NSInteger currentTag;

@property (nonatomic, strong) WDZShopModel *shop;

@property (nonatomic, strong) NSArray <WDZVideoModel *>* videoList;

- (void)play;

- (void)stop;

@end
