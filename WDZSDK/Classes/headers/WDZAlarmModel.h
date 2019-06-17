//
//  WDZAlarmModel.h
//  WanDianZhang
//
//  Created by  ovopark_iOS1 on 16/6/6.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"
#import "WDZVideoModel.h"
@class WDZAlarmCategory;
@class WDZAlarmsList;
@class WDZAlarmOperateStatus;
@class WDZAlarmStatus;
@class WDZAlarmModel;
typedef void(^getAlarmsBlock
)(BOOL isSuccess,WDZAlarmsList *AlarmsList ,NSError *err);
typedef void(^handleAlarmsBlock)(BOOL isSuccess,NSError *err);
typedef void (^getDeviceIDBlock)(BOOL isSuccess,WDZAlarmModel *alarm,NSError *err);

@interface WDZAlarmModel : WDZBaseModel
@property (strong , nonatomic) NSString *depName;

@property (strong , nonatomic) NSString *descriptionStr;

@property (assign , nonatomic) BOOL isHandled;

@property (strong , nonatomic) NSURL *picUrl;
@property (strong , nonatomic) NSString *deviceId;

@property (strong , nonatomic) NSString *depId;

@property (strong , nonatomic) NSString *createTimeStr;

@property (strong , nonatomic) WDZAlarmCategory *category;

@property (strong , nonatomic) WDZAlarmOperateStatus *operateStatus;

@property (strong , nonatomic) WDZAlarmStatus *alarmStatus;

@property (strong , nonatomic) NSString *alarmID;

@property (strong , nonatomic) WDZVideoModel *video;

@property (nonatomic , assign)BOOL btnSelected;

@property (nonatomic , strong)NSString *depPhone;

-(void) handleAlarmWithAlarmID:(NSString *)alarmID andwithBlock:(handleAlarmsBlock)block;

- (void) getDeviceInformationByDeviceID:(NSString *)deveiceID andBlock:(getDeviceIDBlock)block;

@end


@interface WDZAlarmStatus : NSObject
@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end

@interface WDZAlarmOperateStatus : NSObject
@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end

@interface WDZAlarmCategory : WDZBaseModel

@property (strong , nonatomic) NSString *ID;

@property (strong , nonatomic) NSString *name;

@property (assign , nonatomic) BOOL isSelected;


- (instancetype)initWithDictionary:(NSDictionary *)dic;

@end

@interface WDZAlarmsList : WDZBaseModel

-(void) getAlarmsWithBegin:(NSString *)begin andInterval:(NSString *)interval andUnhandled:(int)unhandled  andCategoryID:(NSString *)categoryID  andBlock:(getAlarmsBlock)block;

- (void)getAlarmsWithCategoryID:(NSString *)categoryID andBlock:(getAlarmsBlock)block;

@end



@class WDZAlarmCategoryList;
typedef void(^getAlarmCategorysBlock)(BOOL isSuccess,WDZAlarmCategoryList *categories,NSError *error);

@interface WDZAlarmCategoryList : WDZBaseModel

- (void)getAlarmCatogoriesWithBlock:(getAlarmCategorysBlock)compeletedBlock;


@end

