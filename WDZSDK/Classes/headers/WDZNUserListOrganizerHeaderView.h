//
//  WDZNUserListOrganizerHeaderView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNUserListOrganizerModel.h"
#import "WDZNUserListConfigModel.h"

@protocol WDZNUserListOrganizerHeaderViewDelegate;

@interface WDZNUserListOrganizerHeaderView : UIView

@property (nonatomic , retain)WDZNUserListOrganizerModel *model;

@property (nonatomic , retain)WDZNUserListConfigModel *configModel;

@property (nonatomic , assign)id<WDZNUserListOrganizerHeaderViewDelegate>delegate;

/**
 全选
 */
@property (nonatomic , retain)UIButton *seleteAll;
/**
 取消全选
 */
@property (nonatomic , retain)UIButton *cancleAll;

@end


@protocol WDZNUserListOrganizerHeaderViewDelegate<NSObject>

-(void)didClickNUserListOrganizerHeaderViewWithOrganizerModel:(WDZNUserListOrganizerModel *)model;

@end
