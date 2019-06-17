//
//  WDZOrganizeSeleteHeaderView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizationNode.h"
@protocol WDZOrganizeSeleteHeaderViewDelegate;
@interface WDZOrganizeSeleteHeaderView : UIView

@property (nonatomic , retain)WDZOrganizationNode *node;

@property (nonatomic , assign)id<WDZOrganizeSeleteHeaderViewDelegate>delegate;
@end

@protocol WDZOrganizeSeleteHeaderViewDelegate<NSObject>

-(void)didClickNUserListOrganizerHeaderViewWithOrganizerModel:(WDZOrganizationNode *)node;

@end
