//
//  WDZNPatrolReportCellModel.h
//  WDZForAppStore
//
//  Created by Daniel on 2018/5/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZNPatrolReportCellModel : NSObject

// 是否已读
@property (nonatomic, assign) BOOL isRead;
/**
 消息内容
 */
@property (nonatomic, copy) NSString *content;
/**
 导航条title
 */
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *createTime;

@property (nonatomic, copy) NSString *messageId;
// 0个人，1门店，2订阅 4.现场、远程巡店
@property (nonatomic, assign) NSInteger messageType;

// 根据后台拿到的createTime,格式化时间显示
@property (nonatomic, copy) NSString *customizedCreateTime;
// cell高度
@property (nonatomic, assign) CGFloat cellHeight;
/**
 沙盒路径
 */
@property (nonatomic, retain) NSString *filePath;
@property (nonatomic, retain) NSString *basePath;
@end
