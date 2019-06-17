//
//  WDZSpecificLabelFrameView.h
//  WDZForAppStore
//  Created by ovopark_iOS on 2017/2/16.
//  Copyright © 2017年 zhenglaixian. All rights reserved.

#import "WDZBaseFrameView.h"
#import "WDZUserListModel.h"
#import "WDZUserModel.h"

@protocol WDZSpecificLabelFrameViewDelegate;
@interface WDZSpecificLabelFrameView : WDZBaseFrameView

@property (weak , nonatomic)id<WDZSpecificLabelFrameViewDelegate> delegate;
@property (nonatomic , retain)NSMutableArray *selectedDealUsers;
@property (nonatomic , retain)WDZUserListModel *userListModel;
@property (nonatomic , retain)WDZUserModel *userM;
/**
 0通讯录   1单选   2多选    3多选   4IM多选（不允许传入数组点击，并将数据不传出） 5 IM传入原始数据，不请求(多选) 6  IM传入原始数据，不请求（单选）
 */
@property (nonatomic , retain)NSString *type;
/**
 IM专用，传入数据
 */
@property (nonatomic , retain)NSMutableArray *IMUsers;
/**
 IM专用 传入IM使用的用户列表（不允许再发起请求）
 */
@property (nonatomic , retain)NSMutableArray *IMAllUsers;
@end

@protocol WDZSpecificLabelFrameViewDelegate <NSObject>
- (void)frameViewDidBack:(WDZSpecificLabelFrameView *)v;
- (void)frameViewEdit:(WDZSpecificLabelFrameView *)v;
- (void)frameViewOkButton:(WDZSpecificLabelFrameView *)v;
-(void)frameViewAddNewLabel:(WDZSpecificLabelFrameView *)v withPlaceString:(NSString *)placeString withTitleString:(NSString *)titleString withIsNewLabel:(BOOL)isNewLabel withUsersArray:(NSArray *)Users withLabelId:(NSString *)labelIdString;
@end
