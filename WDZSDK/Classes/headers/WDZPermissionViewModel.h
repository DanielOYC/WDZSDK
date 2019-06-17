//
//  WDZPermissionViewModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/3/10.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZRolesModel.h"
#import "WDZPrivilegesModel.h"

@interface WDZPermissionViewModel : NSObject

@property (nonatomic, strong) NSMutableArray *roles;

@property (nonatomic, strong) NSMutableArray *permissions;
@property (nonatomic, strong) NSString *userId;

@property (nonatomic, assign) BOOL isSuper;
- (void)getRoloesAndPermissionsCompletion:(void (^)(BOOL isSuccess)) completion;

- (void)handleRoleArr:(NSArray *)roles;

- (void)sendUserConfigsWithParams:(NSDictionary *)parmas Completion:(void (^)(BOOL isSuccess)) completion;

- (NSString *)getAllPrivileIDs;

@end
