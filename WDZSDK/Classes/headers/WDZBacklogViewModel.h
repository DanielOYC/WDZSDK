//
//  WDZBacklogViewModel.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/29.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZBacklogViewModel : NSObject

/**
 保存最近选择的点检内容
 */
+ (void)saveCheckCategoryWithContent:(NSDictionary *)checkConetnt;

/**
 读取最近的点检内容
 */
+ (NSArray *)readLastCheckCategory;


@end
