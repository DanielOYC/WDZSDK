//
//  WDZOrganizeSeleteViewController.h
//  WDZForAppStore
//  门店组织架构选择
//  Created by 夏征宇 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizeSeleteFrameView.h"
#import "WDZBaseViewController.h"
@protocol WDZOrganizeSeleteViewControllerDelegate;
@interface WDZOrganizeSeleteViewController : WDZBaseViewController

@property (nonatomic , retain)WDZOrganizeSeleteFrameView *frameView;
@property (nonatomic , assign)id<WDZOrganizeSeleteViewControllerDelegate>delegate;

@property (strong,nonatomic)void(^getSeleteNode)(WDZOrganizationNode *seleteNode);

@end
@protocol WDZOrganizeSeleteViewControllerDelegate <NSObject>

-(void)didClickWithNode:(WDZOrganizationNode *)seleteNode;

@end
