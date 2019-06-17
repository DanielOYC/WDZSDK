//
//  DBResultSetHandleDelegate.h
//  FMDBDemo
//
//  Created by 王振海 on 2017/9/18.
//  Copyright © 2017年 王振海. All rights reserved.
//

#import <Foundation/Foundation.h>
@class FMResultSet;
//#import "FMResultSet.h"

@protocol DBResultSetHandleDelegate <NSObject>

/**
 处理查询 reresultSet
 */
@required
- (NSArray *)handleResultWithResultSet:(FMResultSet *)rs;

@end
