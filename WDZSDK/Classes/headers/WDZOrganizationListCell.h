//
//  WDZOrganizationUserListCell.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//  组织架构

#import <UIKit/UIKit.h>
#import "WDZOrganizationalStructureModel.h"
#import "WDZOrganizationStructureFrameModel.h"
#import "WDZOrganizationConfigManager.h"

@protocol WDZOrganizationListCellDelegate <NSObject>
-(void)WDZOrganizationListCellDidSelectAllUserList:(WDZOrganizationStructureFrameModel *)model;
-(void)WDZOrganizationListCellDidUnSelectAllUserList:(WDZOrganizationStructureFrameModel *)model;
@end

@interface WDZOrganizationListCell : UITableViewCell

@property (nonatomic, weak) id<WDZOrganizationListCellDelegate> delegate;

@property (nonatomic , retain)WDZOrganizationStructureFrameModel *model;

@property (nonatomic, strong) NSMutableDictionary *allOrganizationDic;

@property (nonatomic, strong) WDZOrganizationConfigManager *config;

@end
