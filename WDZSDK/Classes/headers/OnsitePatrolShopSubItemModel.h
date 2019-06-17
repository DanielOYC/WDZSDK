//
//  OnsitePatrolShopSubItemModel.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/23.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

typedef NS_ENUM(NSInteger, OnsitePatrolShopSubItemOperationStatus) {
    OnsitePatrolShopSubItemOperationStatusNone = -2, // 未操作
    OnsitePatrolShopSubItemOperationStatusNotApplicable = -1, // 不适用
    OnsitePatrolShopSubItemOperationStatusNotPass = 0, // 不通过
    OnsitePatrolShopSubItemOperationStatusPass = 1, // 通过
};

#import <Foundation/Foundation.h>
//#import "AFHTTPRequestOperationManager.h"
#import "AFHTTPSessionManager.h"
@class OnsitePatrolShopDetailedRuleModel;

@interface OnsitePatrolShopSubItemModel : NSObject

// 小项名称
@property (copy, nonatomic) NSString *subItemName;

// 小项ID
@property (copy, nonatomic) NSString *subItemID;

// 小项的细则model数组
@property (strong, nonatomic) NSMutableArray<OnsitePatrolShopDetailedRuleModel *> *detailedRuleModelArray;

// 小项下当前选中的细则model
@property (strong, nonatomic) NSMutableArray<OnsitePatrolShopDetailedRuleModel *> *selectedDetailedRuleModelArray;

// 用户描述
@property (copy, nonatomic) NSString *userDescription;

// 用户上传的图片
@property (strong, nonatomic) NSMutableArray *pictureArray;

// 上传文本图片的管理器（再次上传的时候要停止上一次）
@property (strong, nonatomic) AFHTTPSessionManager *uploadTextPictureOperationManager;

// 小项整体的编辑状态（未操作/不适用/不通过/通过）
@property (assign, nonatomic) OnsitePatrolShopSubItemOperationStatus status;

// 标志是否被操作过，方便记录大项下的各个小项的处理进度
@property (assign, nonatomic) BOOL isOperated;

@end
