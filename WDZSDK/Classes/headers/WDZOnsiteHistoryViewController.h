//
//  WDZOnsiteHistoryViewController.h
//  WDZForAppStore
//
//  Created by JaryPan on 2017/10/17.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import "UIViewController+NavigationBar.h"
#import "WDZOnsiteHistoryFrameView.h"
@interface WDZOnsiteHistoryViewController : WDZBaseViewController

@property (nonatomic , strong)WDZOnsiteHistoryFrameView *frameView;

/**
 是否是远程巡店  默认为NO 现场巡店
 */
@property (nonatomic , assign)BOOL isRemote;


@end
