//
//  WDZPrivilegesModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 17/3/8.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

typedef NS_ENUM(NSInteger, PreButtonState) {
    
    PreButtonStateNormal,
    PreButtonStateSelected,
    PreButtonStateDisable
};

#import "WDZBaseModel.h"

@interface WDZChildrenPrivilege : NSObject
@property (nonatomic ,copy)NSString *privilegeName;
@property (nonatomic ,copy)NSString *privilegeDesc;
@property (nonatomic ,copy)NSString *parentId;
@property (nonatomic ,copy)NSString *isCheck;
@property (nonatomic, assign) int ID;
@property (nonatomic, assign) PreButtonState type;
@property (nonatomic, assign) BOOL forbidOperation;

@end

@interface WDZPrivilegesModel : WDZBaseModel

@property (nonatomic ,strong)NSString *privilegeName;
@property (nonatomic ,strong)NSString *privilegeDesc;
@property (nonatomic, assign) int ID;
@property (nonatomic ,strong)NSString *parentId;
@property (nonatomic ,strong)NSArray *children;
@property (nonatomic ,assign)int isCheck;
@property (nonatomic, assign) PreButtonState type;
@property (nonatomic, assign) BOOL forbidOperation;

@end
