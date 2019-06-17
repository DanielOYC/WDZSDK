//
//  WDZOnsitePatrolCheckTemplatesViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/31.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZBaseFrameView.h"

typedef void(^ConfigureMainItemsResultBlock)(BOOL isTemp,BOOL addMainItem, NSDictionary *operatedMainItem, NSArray<NSDictionary *> *selectedMainItems);

@interface WDZOnsitePatrolCheckTemplatesViewController : WDZBaseViewController

/**
 任务ID
 */
@property (nonatomic , retain)NSString *taskId;

@property (nonatomic , retain)NSString *seleteTempId;

/**
 上层传入已选择的点检项
 */
@property (nonatomic , retain)NSMutableArray *sleleArr;

/**
 是否请求已选择的项
 */
@property (nonatomic , assign)BOOL isUpDataSeleteArray;

@property (nonatomic , retain)WDZBaseFrameView *frameView;

@property (copy, nonatomic) ConfigureMainItemsResultBlock configureResultBlock;

@end
