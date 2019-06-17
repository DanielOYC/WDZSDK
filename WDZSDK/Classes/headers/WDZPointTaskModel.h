//
//  WDZPointTaskModel.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/11.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import "WDZBaseModel.h"
#import "WDZShopModel.h"
#import "WDZCheckUnitModel.h"
#import "WDZPictureModel.h"
#import "WDZShopTaskModel.h"

@class WDZPointTaskListModel,WDZPointTaskModel,WDZPointTaskState,WDZBaseModel,WDZShopModel,WDZCheckUnitModel,WDZPictureModel,WDZShopTaskModel;
typedef void(^getPointTasksBlock)(BOOL isSuccess ,WDZPointTaskListModel *modelList, NSError *error );
typedef void(^savePointTasksBlock)(BOOL isSuccess , NSError *error );

typedef void(^getPointTaskBlock)(BOOL isSuccess ,WDZPointTaskModel *mode, NSError *error );

typedef void(^getPointsOfShopBlock)(BOOL isSuccess ,WDZPointTaskListModel *model,NSError *error);

typedef void(^shotPresetPicBlock)(BOOL isSuccess , NSError *error);


@interface WDZPointTaskModel : WDZBaseModel

@property (strong , nonatomic) NSString  *name;

@property (strong , nonatomic) NSString  *pointTaskID;
//场景ID
@property (strong , nonatomic) NSString *sceneId;

//任务ID
@property (strong , nonatomic) NSString  *TaskID;

@property (strong , nonatomic) NSString *state;

@property (assign , nonatomic) BOOL isOperate;

@property (strong , nonatomic) NSString  *shopTaskName;

@property (strong , nonatomic) NSURL     *iconImageUrl;

//图片数组
@property (strong , nonatomic) NSArray   *taskPicModels;

@property (strong , nonatomic) NSArray   *checkUnitModels;

@property (strong , nonatomic) WDZPointTaskState *pointTaskState;
@property (assign , nonatomic) BOOL isLastPreset;



- (BOOL)canEdit;
- (BOOL)canSave;

-(void)getSingleSceneTaskCompletedBlock:(getPointTaskBlock)completedBlock;


- (void)getPointTaskDetailWithTaskType:(TaskStateType)taskType CompletedBlock:(getPointTaskBlock)completedBlock;

- (void)savePointTaskDetailWithCurrentPicID:(NSString *)currentPicId andCompletedBlock:(savePointTasksBlock)compeletedBlock;
- (void)submitSceneToProblemWithCurrentPicID:(NSString *)currentPicId andCompletedBlock:(savePointTasksBlock)compeletedBlock;

- (void)shotPresetPicWithBlock:(shotPresetPicBlock)compeletedBlock;

@end


@interface WDZPointTaskListModel : WDZBaseModel

- (void)getPointTasksWithBeginIndex:(int)beginIndex andInterval:(int)interval andShopTaskId:(NSString *)taskID andTaskType:(TaskStateType)taskType CompletedBlock:(getPointTasksBlock)completedBlock;



- (void)getScenesWithState:(TaskStateType)taskType andShopTaskId:(NSString *)taskID CompletedBlock:(getPointTasksBlock)completedBlock;


- (void)getPointsOfShop:(NSString *)shopId andBlock:(getPointsOfShopBlock)compeletedBlock;

@end

typedef void(^saveMarkPicBlock)(BOOL isSuccess,NSError *error);
typedef void(^upLoadMarkPicProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);

@interface WDZPictureForCheck : WDZBaseModel

@property (strong , nonatomic) NSString *picID;

@property (strong , nonatomic) NSURL *picUrl;

@property (strong , nonatomic) UIImage *image;

- (void)saveMarkPicWithimageData:(NSData *)imageData andBlock:(saveMarkPicBlock)compeletedBlock andUploadProgressBlock:(upLoadMarkPicProgressBlock)progressBlock;


@end

@interface WDZPointTaskState : NSObject

@property (strong , nonatomic) NSString *name;
@property (strong , nonatomic) UIColor   *color;
@property (assign , nonatomic) int type;

- (instancetype)initWithStatus:(int)status;

@end
