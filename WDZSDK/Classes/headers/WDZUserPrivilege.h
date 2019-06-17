//
//  WDZUserPrivilege.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import "WDZBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

//用户权限
@interface WDZUserPrivilege : NSObject

@property (nonatomic, copy) NSString *ID;
@property (nonatomic, assign) BOOL isCheck;
@property (nonatomic, assign) NSInteger parentId;
@property (nonatomic, copy) NSString *privilegeDesc;
@property (nonatomic, copy) NSString *privilegeName;

@end

NS_ASSUME_NONNULL_END
