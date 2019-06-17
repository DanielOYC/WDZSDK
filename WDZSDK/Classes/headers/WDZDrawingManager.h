//
//  WDZDrawingManager.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/19.
//

#import <Foundation/Foundation.h>
#import "WDZDoodleBoardConfig.h"

@interface WDZDrawingManager : NSObject
///**
// 单张编辑模式
// */
//+(void)showSingleDrawing:(UIImage *)editImg config:(WDZDrawingConfig *)config complete:(void(^)(UIImage *editImg))complete cancelBlock:(void(^)(void))cancelBlock;
//
//
///**
// 多张编辑模式
// */
//+(void)showASetOfImgsDrawing:(NSArray<UIImage *> *)imgArray config:(WDZDrawingConfig *)config complete:(void(^)(NSArray<UIImage *> *editArray))complete;

/**
 单张编辑模式
 */
+(void)showSingleDrawing:(UIImage *)editImg type:(WDZDoodleBoardHandleType)type cancelBlock:(void(^)(void))cancelBlock completeBlock:(void(^)(UIImage *img))complete;

/**
 多张编辑模式
 */
+(void)showASetOfImgsDrawing:(NSArray<UIImage *> *)imgArray type:(WDZDoodleBoardHandleType)type  inView:(UIView *)superView complete:(void(^)(NSArray<UIImage *> *editArray))complete;

@end
