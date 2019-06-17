//
//  WDZPromise.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/8/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    PromiseStatePending,//执行中
    PromiseStateFulFilled,
    PromiseStateRejected,
} PromiseState;

typedef enum : NSUInteger {
    PromiseErrorCodeNull,
    PromiseErrorCodeRuntime,
    PromiseErrorCodeRejected,
} PromiseErrorCode;

typedef id(^runHandle)(id value);
//执行完成block
typedef void(^resolveHandle)(id value);
//执行失败block
typedef void(^rejectedHandle)(NSError *error);

typedef void(^promiseHandle)(resolveHandle resolve,rejectedHandle reject);

@protocol PromiseEnable <NSObject>

@property (nonatomic) promiseHandle promise;

@end

@interface WDZPromise : NSObject
@property (nonatomic) id value;

@property (nonatomic, copy) NSError *error;

//状态机
@property (nonatomic, assign) PromiseState state;

@property (nonatomic, strong) WDZPromise *depPromise;

@property (nonatomic, copy) resolveHandle resolveBlock;

@property (nonatomic, copy) rejectedHandle rejectedBlock;

@property (nonatomic, copy) promiseHandle promiseBlock;

@property (nonatomic, copy) rejectedHandle catchBlock;

@property (nonatomic, copy) runHandle thenBlock;

@property (nonatomic, strong) id strongSelf;

-(instancetype)initWithPromiseBlock:(promiseHandle)promiseBlock;

+(WDZPromise *)promise:(promiseHandle)handle;
+(WDZPromise *)timer:(NSTimeInterval)timer;
+(WDZPromise *)resolve:(id)value;
+(WDZPromise *)reject:(id)value;

-(void)resolve:(id)value;
-(void)rejecte:(NSError *)error;

@end

@interface WDZPromise (Error)
+(NSError *)errorWithExpection:(NSException *)expection;
+(NSError *)errorWtihRejected:(NSString *)rejected;
+(NSError *)errorWithValue:(id)value;
@end


@interface WDZPromise (Then)
- (WDZPromise *(^)(runHandle))then;
@end


@interface WDZPromise (Catch)
- (WDZPromise *(^)(rejectedHandle))catch;
@end


@interface WDZPromise (Finally)
- (void (^)(dispatch_block_t))finally;
@end
