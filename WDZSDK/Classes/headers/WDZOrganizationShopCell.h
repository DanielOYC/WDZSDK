//
//  WDZOrganizationShopCell.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/10/16.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZOrganizationNode.h"
#import "WDZShopModel.h"
#import "WDZNShoplistFrameView.h"

@interface WDZOrganizationShopCell : UITableViewCell

@property (nonatomic, strong) WDZOrganizationNode *node;

@property (nonatomic, strong) WDZShopModel *shopModel;
/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

+ (instancetype)initFromNib;

@end
