//
//  WDZOrganizationHeaderView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/10/10.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZOrganizationalStructureModel,WDZOrganizationConfigManager,WDZOrganizationStructureFrameModel;

@protocol WDZOrganizationHeaderViewDelegate <NSObject>

-(void)didClickUserListOrganizerHeaderViewWithOrganizerModel:(WDZOrganizationStructureFrameModel *)model;

@end


@interface WDZOrganizationHeaderView : UIView

@property (nonatomic , retain)WDZOrganizationStructureFrameModel *model;

@property (nonatomic, strong) WDZOrganizationConfigManager *config;;

@property (nonatomic , assign)id<WDZOrganizationHeaderViewDelegate>delegate;

@property (nonatomic, assign) BOOL hadData;

/**
 全选
 */
@property (nonatomic , retain)UIButton *seleteAll;
/**
 取消全选
 */
@property (nonatomic , retain)UIButton *cancleAll;

@end
