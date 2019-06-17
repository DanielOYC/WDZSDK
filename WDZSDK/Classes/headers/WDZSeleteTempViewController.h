//
//  WDZSeleteTempViewController.h
//  WDZForAppStore
//  选择模板
//  Created by 夏征宇 on 2018/10/31.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
@class WDZSeleteTempFrameView;
@class WDZSeleteTempConfig;
@class WDZTempModel;
//#import "WDZSeleteTempFrameView.h"
//#import "WDZSeleteTempConfig.h"
//#import "WDZTempModel.h"

@protocol WDZSeleteTempViewControllerDelegate;
@interface WDZSeleteTempViewController : WDZBaseViewController

@property (nonatomic , retain)WDZSeleteTempConfig *config;

@property (nonatomic , retain)WDZSeleteTempFrameView *frameView;

@property (nonatomic , assign)id <WDZSeleteTempViewControllerDelegate>delegate;

@end


@protocol WDZSeleteTempViewControllerDelegate <NSObject>

/**
 获取单选模式下的选择模板
 */
-(void)getSigleTempWithModel:(WDZTempModel *)seleteTemp WithController:(WDZSeleteTempViewController *)VC;

/**
 获取多个模板
 */
-(void)getTempsWithArray:(NSArray *)temps WithController:(WDZSeleteTempViewController *)VC;

@end
