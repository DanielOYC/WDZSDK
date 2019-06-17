//
//  WDZDownloadReocrdProcessView.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/1/23.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^clickBackGroundBtnBlock)(BOOL isGolbal);
typedef void(^clickCancelBtnBlock)(BOOL isGolbal);
typedef void(^clickWatchBtnBlock)(BOOL isGolbal);

@interface WDZDownloadReocrdProcessView : UIView
/**
 后台按钮事件回调
 */
@property (nonatomic, copy) clickBackGroundBtnBlock backgroundBtnEvent;
/**
 取消按钮事件回调
 */
@property (nonatomic, copy) clickCancelBtnBlock cancelBtnEvent;
/**
 查看录像按钮事件回调
 */
@property (nonatomic, copy) clickWatchBtnBlock watchvideoBtnEvent;

/**
 下载的开始时间
 */
@property (nonatomic, copy) NSString *downloadStartTime;

/**
 下载时长
 */
@property (nonatomic, copy) NSString *downloadTimeStr;
/**
 下载进度
 */
@property (nonatomic, assign) CGFloat progress;
/**
 是否在全局的下载情况界面中
 */
@property (nonatomic, assign) BOOL isOnGlobalView;

@end
