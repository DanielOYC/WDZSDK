//
//  WDZUserListModel.h
//  WDZForAppStore
//
//  Created by ovopark_iOS on 2017/2/14.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//
@class WDZUserListModel;
typedef void(^creatNewLabelBlock)(BOOL isSuccess,NSString *tagIdString,NSString *result ,NSError *error);
typedef void(^addUserListBlock)(BOOL isSuccess,NSString *returnCode,NSError *error);
typedef void(^getLabelBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^deleteLabelBlock)(BOOL isSuccess,NSString *returnCode,NSError *error);
typedef void(^getUsesBlock)(BOOL isSuccess,WDZUserListModel *userListModel,NSError *error);
typedef void(^removeUsersFromLabelBlock)(BOOL isSuccess,NSError *error);
typedef void(^getRecentContactorsBlock)(BOOL isSuccess,NSDictionary *resultDic,NSError *error);
typedef void(^getOrganizationBlock)(BOOL isSuccess,NSArray *resultArray,NSError *error);
typedef void(^getOrganizationUsersBlock)(BOOL isSuccess,WDZUserListModel *userListModel,NSError *error);

#import "WDZBaseModel.h"

@interface WDZUserListModel : WDZBaseModel

@property(nonatomic , retain)NSString *enterpriseId;
@property(nonatomic , retain)NSString *labelId;
@property(nonatomic , retain)NSString *memberName;
@property(nonatomic , retain)NSString *createTime;
@property(nonatomic , retain)NSString *memberNum;
@property(nonatomic , retain)NSString *tagName;
@property(nonatomic , retain)NSString *userId;
@property(nonatomic , retain)NSArray *allUsers;

//创建新的标签或者修改一个标签
- (void)httpRequestWithToken:(NSString *)tokenString andUserIds:(NSString *)userIdsString andTagId:(NSString *)tagId andTagName:(NSString *)tagNameString andcreatNewLabelBlock:(creatNewLabelBlock)creatNewLabelBlock;
- (void)SaveUserLabelWithUsersIds:(NSString *)usersIdString andTagIds:(NSString *)tagsIdsString withDeleteUserIds:(NSString *)deleteUserIds andAddUserListBlock:(addUserListBlock)addUserListBlock;
//获取标签列表
- (void)getLabelWithToken:(NSString *)tokenString andBeginIndex:(int)begin withBlock:(getLabelBlock)completedBlock;
//删除标签
- (void)deleteLabelWithLabelTag:(NSString *)tagString WithBlock:(deleteLabelBlock)block;
//获取单个标签内的用户
- (void)getUsersWithLabelTag:(NSString *)tagString withBlock:(getUsesBlock)block;
//从标签中移除用户
- (void)removeUsersFromLabelwithLabelTag:(NSString *)tagString withUserIds:(NSString *)userIds withBlock:(removeUsersFromLabelBlock)block;
//获取组织架构树相关数据接口
- (void)getOrganizationWithNodeId:(NSString *)nodId withIsQueryAll:(NSString *)isQueryAll withShowType:(NSString *)showType withIsAddDevNode:(NSString *)isAddDevNode withBlock:(getOrganizationBlock)block;
//获取获取指定组织架构下的所有用户接口
- (void)getUsersWithOragnizationId:(NSString *)organizeId withPageNumber:(int)pageNumber withPageSize:(int)pageSize withBlock:(getOrganizationUsersBlock)block;

- (void)getRecentContactorsWithToken:(NSString *)tokenString withBlock:(getRecentContactorsBlock)block;



@end


