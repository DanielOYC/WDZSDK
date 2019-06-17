//
//  OnsitePatrolShopTakePhotoView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/30.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseFrameView.h"
#import "OnsitePatrolShopTakePhotoTextView.h"
#import "OnsitePatrolShopPhotoView.h"


@interface OnsitePatrolShopTakePhotoView : WDZBaseFrameView
@property (strong, nonatomic) WDZShopModel *shop;
@property (strong, nonatomic) OnsitePatrolShopTakePhotoTextView *textView;
@property (strong, nonatomic) OnsitePatrolShopPhotoView *photoView;
@property (strong, nonatomic) NSString *deviceId;

@end
