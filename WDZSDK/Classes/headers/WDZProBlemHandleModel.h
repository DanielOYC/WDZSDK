//
//  WDZProBlemHandleModel.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/4/26.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"
@class WDZProBlemHandleStatus;

@interface WDZProBlemHandleModel : WDZBaseModel

@property (strong , nonatomic) NSString *checkUnitID;

@property (strong , nonatomic) NSString *name;

/**
 *  count:考评分 1,0 ;
 */
@property (assign , nonatomic) int count;


@property (assign , nonatomic) BOOL isChecked;

@property (strong , nonatomic) WDZProBlemHandleStatus *problemHandleStatus;

@property (strong , nonatomic) NSMutableArray *remarkArr;

- (NSString *)convertRemarkDicToString;

@end


@interface WDZProBlemHandleStatus : NSObject

@property (strong , nonatomic) UIColor *color;
@property (strong , nonatomic) NSString *name;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end
