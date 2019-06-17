//
//  WDZMPlaySettingViewController.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZBaseViewController.h"
#import "WDZVideoModel.h"
#import "WDZShopModel.h"
@interface WDZMPlaySettingViewController : WDZBaseViewController

@property (nonatomic , strong)WDZVideoModel *videoModel;

@property (nonatomic , strong)WDZShopModel *shopModel;

@property (nonatomic , strong)NSData *imageData;

@end
