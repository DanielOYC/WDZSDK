//
//  WDZRolesModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 17/3/8.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"


// 用户基本信息
@interface WDZRolePrivileges : NSObject

@property (nonatomic, assign) int ID;
@property (nonatomic, copy) NSString *privilegeId;
@property (nonatomic, copy) NSString *roleId;

@end

@interface WDZRolesModel : WDZBaseModel

@property (nonatomic, assign) int ID;
@property (nonatomic ,strong) NSArray *childRoles;
@property (nonatomic ,strong) NSArray *privileges;
@property (nonatomic ,strong) NSArray *belongGrade;
@property (nonatomic ,strong) NSArray *rolePrivileges;
@property (nonatomic ,strong) NSString *roleName;


@end
