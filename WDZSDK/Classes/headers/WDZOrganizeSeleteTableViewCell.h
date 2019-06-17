//
//  WDZOrganizeSeleteTableViewCell.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/21.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizationNode.h"
@protocol WDZOrganizeSeleteTableViewCellDelegate;
@interface WDZOrganizeSeleteTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZOrganizationNode *node;

@property (nonatomic , retain)NSString *seleteNodeId;

@property (nonatomic , assign)id<WDZOrganizeSeleteTableViewCellDelegate>delegate;

@end
@protocol WDZOrganizeSeleteTableViewCellDelegate<NSObject>

-(void)didClickNodeWithNode:(WDZOrganizationNode *)seleteNode;

@end
