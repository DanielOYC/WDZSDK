//
//  WDZCheckUnitModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/25.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"

@class WDZCheckUnitStatus;
@interface WDZCheckUnitModel : WDZBaseModel

@property (strong , nonatomic) NSString *checkUnitID;

@property (strong , nonatomic) NSString *name;

@property (strong , nonatomic) NSString *content;
@property (strong , nonatomic) NSString *username;

/**
 *  count:考评分 1,0 ;
 */
@property (assign , nonatomic) int count;


@property (assign , nonatomic) BOOL isChecked;

@property (strong , nonatomic) WDZCheckUnitStatus *checkUnitState;

@property (strong , nonatomic) NSString *checkUnitStates;


@property (strong , nonatomic) NSMutableArray *remarkArr;
@property (strong , nonatomic) NSString *remarkStr;
@property (strong , nonatomic) NSMutableDictionary *remarkDic;


- (NSString *)convertRemarkDicToString;

@end


@interface WDZCheckUnitStatus : NSObject

@property (strong , nonatomic) UIColor *color;
@property (strong , nonatomic) NSString *name;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end



