//  WDZMContentView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/30.
//  Copyright © 2017年 Hayder. All rights reserved.

#import <UIKit/UIKit.h>
#import "WDZMBaseFuncView.h"
#import "WDZMVideoRecordView.h"
#import "ImageAndTitleButton.h"

@interface WDZMContentView : UIView
/**
 是否允许暂停  
 */
@property (nonatomic, assign) BOOL isAllowStop;

/**
 当前需要显示的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

@property (nonatomic, strong) WDZMBaseFuncView *baseFuncView;

@property (nonatomic, strong) WDZMVideoRecordView *videoRecordView;

/**
 切换实时，录像按钮
 */
@property (nonatomic, strong) ImageAndTitleButton *exchangeLiveAndReocrdBtn;

/**
 当前播放器 YES Live  NO Record
 */
@property (nonatomic, assign) BOOL currentPlayState;

/**
 门店模型
 */
@property (nonatomic, strong) WDZShopModel *shopModel;

@end
