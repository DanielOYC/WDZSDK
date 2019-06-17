//
//  DBResultSetHandleDelegate.h
//  FMDBDemo
//
//  Created by 王振海 on 2017/9/18.
//  Copyright © 2017年 王振海. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <FMDB/FMResultSet.h>

@protocol WDZCacheResultSetHandleDelegate <NSObject>

/**
 处理查询 reresultSet
 */
@required
- (NSArray *)handleResultWithResultSet:(FMResultSet *)rs;

@end
