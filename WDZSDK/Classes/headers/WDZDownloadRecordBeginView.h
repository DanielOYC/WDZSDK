//
//  WDZDownloadRecordView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WDZDownloadRecordBeginView;
@protocol WDZDownloadRecordBeginViewDelegate<NSObject>

/**
 点击了取消下载按钮
 */
- (void)downloadRecordBeginView:(WDZDownloadRecordBeginView *)downloadView cancelDownload:(UIButton *)button;
/**
 点击了下载按钮
 */
- (void)downloadRecordBeginView:(WDZDownloadRecordBeginView *)downloadView download:(UIButton *)button startTime:(NSString *)startTime duration:(NSString *)duration;

@end

@interface WDZDownloadRecordBeginView : UIView

@property (nonatomic, weak) id<WDZDownloadRecordBeginViewDelegate> delegate;

@property (nonatomic, copy) NSString *startDownloadTime;

/**
 允许下载
 */
- (void)allowToDownload;
/**
 不允许下载
 */
- (void)forbiddenDownload;
@end
