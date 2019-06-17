//
//  WDZNClickModel.h
//  WDZForAppStore
//  新点检巡店Model
//  Created by 夏征宇 on 2018/8/1.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNClickModel : NSObject

/**
 点检项名称
 */
@property (nonatomic , retain)NSString *name;
/**
 点检任务ID
 */
@property (nonatomic , retain)NSString *taskID;
/**
 任务状态
 */
@property (nonatomic , retain)NSString *state;
/**
 场景总数
 */
@property (nonatomic , retain)NSString *count;
/**
 点检场景数
 */
@property (nonatomic , retain)NSString *checkCount;
/**
 未点检场景数
 */
@property (nonatomic , retain)NSString *uncheckCount;
/**
 
 */
@property (nonatomic , retain)NSString *disablePresetCount;
/**
 
 */
@property (nonatomic , retain)NSString *itemAllCount;
/**
 合格项数
 */
@property (nonatomic , retain)NSString *itemOkCount;
/**
 不合格项数
 */
@property (nonatomic , retain)NSString *itemUnokCount;
/**
 不合格项数
 */
@property (nonatomic , retain)NSString *itemNoApplyCount;

@end
