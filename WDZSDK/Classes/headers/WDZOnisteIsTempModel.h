//
//  WDZOnisteIsTempModel.h
//  WDZForAppStore
//  用来判断是否是模板
//  Created by 夏征宇 on 2018/12/15.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZOnisteIsTempModel : NSObject

/**
 是否是模板
 */
@property (nonatomic , assign)BOOL isTemplate;
/**
 任务 ID
 */
@property (nonatomic , retain)NSString *taskId;
/**
 模板 ID
 */
@property (nonatomic , retain)NSString *templateId;
/**
 模板名称
 */
@property (nonatomic , retain)NSString *templateName;

@property (nonatomic , retain)NSString *createTime;
@end
