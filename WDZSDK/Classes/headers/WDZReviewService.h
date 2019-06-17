//
//  WDZReviewService.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/3/29.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDZPosModel.h"
#import "WDZTicketModel.h"
#import "WDZPosListItem.h"

@interface WDZReviewService : NSObject

/**
 下载开始延迟时间
 */
@property (nonatomic, assign) NSInteger startPreTime;
/**
 下载结束时间延时时间
 */
@property (nonatomic, assign) NSInteger endPostTime;

+ (instancetype)sharedInstance;

#pragma mark -------------Network-------------------
/**
 获取POS小票列表

 @param pageNumber 页码
 @param completion 处理完以后的数据
 */
+ (void)getReviewPosListWithorganizeId:(NSString *)organizeId VideoId:(NSString *)videoId keyword:(NSString *)keyword startTime:(NSString *)startTime endTime:(NSString *)endTime Page:(NSInteger)pageNumber pageSize:(NSInteger)pageSize Completion:(void (^)(BOOL isSuccessed,NSArray <WDZPosListItem *>*posList)) completion;
/**
 获取票据列表
 
 @param pageNumber 页码
 @param completion 处理完以后的数据
 */
+ (void)getReviewTicketListWithShopID:(NSString *)shopId listNum:(NSString *)listNum Page:(NSInteger)pageNumber endTime:(NSString *)endTime pageSize:(NSInteger)pageSize Completion:(void (^)(BOOL isSuccessed,NSArray <WDZPosListItem *>*ticketList)) completion;

/**
 获取顾客列表

 @param depId 门店id
 @param gender 性别  0,1
 @param minAge 最小年龄
 @param maxAge 最大年龄
 @param startDateStr 开始时间 yyyy-MM-dd
 @param endDateStr 结束时间 yyyy-MM-dd
 @param content 搜索关键字
 @param regType 用户类型  0//新顾客 1//会员 2//店员  3//熟客  4//疑似店员
 */
+ (void)getReviewCustomerListWithDepID:(NSString *)depId gender:(NSString *)gender minAge:(NSString *)minAge maxAge:(NSString *)maxAge startDateStr:(NSString *)startDateStr endDateStr:(NSString *)endDateStr content:(NSString *)content regType:(NSString *)regType Page:(NSInteger)pageNumber pageSize:(NSInteger)pageSize Completion:(void (^)(BOOL isSuccessed,NSArray <WDZPosListItem *>*customerList)) completion;;

/**
 顾客 -- 修改备注  ///shopweb-vip/faceCustomer/updateFaceCustomerRemark

 @param param 参数  顾客ID
 @param successBlock <#successBlock description#>
 @param failtureBlock <#failtureBlock description#>
 */
+ (void)requestFaceCustomerUpdataFaceCustomerRemarkWithParam:(NSDictionary *)param
                                      withSuccessBlock:(void(^)(NSString *successString))successBlock
                                          withFailtrue:(void(^)(NSString *errorString))failtureBlock;

/**
 获取pos详情
 */
+ (void)getPosDetailWithId:(NSString *)posId Completion:(void (^)(BOOL isSuccessed,WDZPosModel *pos)) completion;

/**
 获取票据详情
 */
+ (void)getTicketDetailWithId:(NSString *)ticketId Completion:(void (^)(BOOL isSuccessed,WDZTicketModel *ticket)) completion;

/**
 追溯模块获取时间差
 */
+ (void)getTraceConfigsCompletion:(void (^)(NSInteger startPreTime,NSInteger endPostTime)) completion;

#pragma mark -------------service-------------------
/**
 ** lineView:       需要绘制成虚线的view
 ** lineLength:     虚线的宽度
 ** lineSpacing:    虚线的间距
 ** lineColor:      虚线的颜色
 **/
+ (void)drawDashLine:(UIView *)lineView lineLength:(int)lineLength lineSpacing:(int)lineSpacing lineColor:(UIColor *)lineColor;


#pragma mark 数据转换
/**
 顾客类型  汉子转数字

 @param text <#text description#>
 @return <#return value description#>
 */
+ (NSString *)getCustomerTypeFromText:(NSString *)text;

/**
 顾客类型  数字转文字

 @param num <#num description#>
 @return <#return value description#>
 */
+ (NSString *)getCustomerTypeFromNum:(NSString *)num;

/**
 性别    汉字转数字

 @param text <#text description#>
 @return <#return value description#>
 */
+ (NSString *)getSexTypeFromText:(NSString *)text;


/**
 性别   数字转汉字

 @param num <#num description#>
 @return <#return value description#>
 */
+ (NSString *)getSexTypeFromNum:(NSString *)num;
@end
