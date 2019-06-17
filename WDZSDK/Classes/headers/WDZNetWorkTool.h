//
//  WDZNetWorkTool.h
//  WDZForAppStore
//
//  Created by mac on 17/1/10.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AFNetworking/AFNetworking.h>
#import "WDZHttpRequest.h"

// 请求数据的回调block
typedef void(^NetworkRequestBlock)(BOOL isSuccess, id responseObject, NSError *error);

typedef void(^uploadShotPicBlock)(BOOL isSuccess, NSError *   _Nullable error);
typedef void(^success)(NSURLSessionDataTask * _Nullable operation, id _Nullable response);
typedef void(^failure)(NSURLSessionDataTask * _Nullable task, NSError * _Nonnull error);

@interface WDZNetWorkTool : NSObject

/**
 获取Base_URL
 */
+ (NSString *)getBaseHttpURL;

+ (void)requestMethod:(BOOL)isPost URL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params success:(success _Nullable )success failure:(failure _Nullable )failure;
//上传头像
+ (void)uploadWithUlr:(NSString *_Nullable)urlStr andParameters:(NSDictionary *_Nullable)parameters name:(NSString *_Nonnull)upload fileName:(NSString *_Nonnull)fileName andImageData:(NSData *_Nonnull)imageData andBlock:(resultBlock _Nullable )compeletedBlock andBlock:(uploadProgressBlock _Nullable )uploadBlock;
/**
 原生请求方式
 */
+ (void)originalRequestWithURL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params Completion:(void (^_Nullable)(BOOL isSuccessed,NSDictionary * _Nullable response,NSError * _Nullable error)) completion;
/**
 lxlNet
 */
+ (void)requestNet:(BOOL)isPost URL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params success:(success _Nullable )success failure:(failure _Nullable )failure;

+ (void)requestNewNet:(BOOL)isPost URL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params success:(success _Nullable )success failure:(failure _Nullable )failure;

+ (void)requestJsonNet:(BOOL)isPost URL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params success:(success _Nullable )success failure:(failure _Nullable )failure;


+ (void)requestFromDataWithURL:(NSString *_Nullable)urlString params:(NSDictionary *_Nullable)params completionHandler:(void (^_Nullable)(NSURLResponse * _Nullable response, id _Nullable responseObject, NSError * _Nullable error))completionHandler;

+ (void)requestDataWithUrl:(NSString *_Nonnull)urlString parameters:(NSDictionary *_Nonnull)dict Data:(NSData *_Nonnull)data progress:(nullable void (^)(NSProgress * _Nonnull))uploadProgress success:(void (^_Nullable)(NSURLSessionDataTask * _Nonnull task, id responseObject))success failure:(void (^_Nullable)(NSURLSessionDataTask * _Nonnull task, NSError * _Nullable error))failure;

+ (void)getDataFromUrlWithUrlString:(NSString *)urlString parameters:(NSDictionary *)parameters completedBlock:(NetworkRequestBlock)completedBlock;

/**CRM*/
+ (void)crmRequestNet:(BOOL)isPost URL:(NSString *_Nullable)urlString token:(NSString *)token params:(NSDictionary *_Nullable)params success:(success _Nullable )success failure:(failure _Nullable )failure;


@end
