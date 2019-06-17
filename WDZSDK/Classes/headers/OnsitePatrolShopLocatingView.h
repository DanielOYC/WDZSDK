//
//  OnsitePatrolShopLocatingView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/17.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^GetNearbyShopsSuccessfulBlock)(NSArray *nearbyShops);

@interface OnsitePatrolShopLocatingView : UIView

@property (copy, nonatomic) GetNearbyShopsSuccessfulBlock block;

- (void)startLocating;

- (void)stopLocating;

@end
