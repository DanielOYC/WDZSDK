//
//  WDZBackLogService.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
@class WDZBackLogDetailQuestionFrameModel;

@interface WDZBackLogService : NSObject
+(void)getBackLogDetailQuestionWithId:(NSString *)dbViewShopId complete:(void (^)(BOOL isSuccess,WDZBackLogDetailQuestionFrameModel *model))complete;
//
+(void)commitBackLogCommentWithData:(NSDictionary *)parameters imgs:(NSArray *)imgs complete:(void(^)(BOOL isSuccess,NSError *err))complete;
//
////获取编辑后的图片
//+ (void)handlePhotoModelArrWithAssets:(NSMutableArray *)assets imageArr:(NSMutableArray <UIImage *>*)imgArr  result:(void (^) (NSMutableArray * modelArr))result;
//
//+(void)saveWaterameraPhotos:(NSArray *)images isSortAscendingByModificationDate:(BOOL)sortAscendingByModificationDate complete:(void(^)(NSArray<TZAssetModel *> *))complete;
@end
