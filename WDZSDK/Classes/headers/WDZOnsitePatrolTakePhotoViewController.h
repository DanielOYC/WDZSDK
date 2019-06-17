//
//  WDZOnsitePatrolTakePhotoViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/11/1.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZBaseFrameView.h"
@interface WDZOnsitePatrolTakePhotoViewController : WDZBaseViewController

@property (nonatomic , retain)WDZBaseFrameView *frameView;

@property (nonatomic , retain)WDZShopModel *shopModel;

/**
 来源类型和
 */
@property (nonatomic , retain)NSString *VCtype;

@end
