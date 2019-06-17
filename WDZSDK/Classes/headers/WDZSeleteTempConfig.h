//
//  WDZSeleteTempConfig.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/10/31.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZSeleteTempConfig : NSObject

/**
 任务 ID
 */
@property (nonatomic , retain)NSString *taskId;

/**
 单选
 */
-(instancetype)initWithSigle;
/**
 是否是单选
 */
@property (nonatomic , assign)BOOL isSigle;
/**
 是否是多选
 */
@property (nonatomic , assign)BOOL isDouble;

/**
 是否需要保存到服务端
 */
@property (nonatomic , assign)BOOL isNeedSave;

/**
 选中的模板 ID(部分界面传入)
 */
@property (nonatomic , retain)NSString *seleteID;

/**
 选中的数组
 */
@property (nonatomic , retain)NSMutableArray *seleteArray;

@end
