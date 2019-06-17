//
//  WDZGlobalDownloadRecordController.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/24.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZGlobalDownloadRecordView : UIView

/**
 下载的开始时间
 */
@property (nonatomic, copy) NSString *downloadStartTime;

/**
 下载时长
 */
@property (nonatomic, copy) NSString *downloadTimeStr;

@end
