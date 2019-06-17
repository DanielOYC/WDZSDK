//
//  WDZOrganizeSeleteFrameView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZOrganizationNode.h"
@protocol WDZOrganizeSeleteFrameViewDelegate;
@interface WDZOrganizeSeleteFrameView : WDZBaseFrameView

@property (nonatomic , assign)id<WDZOrganizeSeleteFrameViewDelegate>delegate;

@end

@protocol WDZOrganizeSeleteFrameViewDelegate<NSObject>

-(void)didClickNodeWithNode:(WDZOrganizationNode *)seleteNode;

@end
