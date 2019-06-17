//
//  WDZMPlayViewController.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/5/19.
//  Copyright © 2017年 Hayder. All rights reserved.
//

#import "WDZBaseViewController.h"
#import "WDZVideoModel.h"
#import "WDZMContentView.h"

@interface WDZMPlayViewController : WDZBaseViewController

@property (strong , nonatomic) WDZShopModel *shop;
/**
 需要当前展示的录像
 */
@property (nonatomic, strong) WDZVideoModel *currentShowModel;

/**
 需要循环的videolist
 */
@property (nonatomic, strong) NSArray *videoList;

@property (nonatomic, strong) WDZMContentView *contentView;

/**
 是否允许旋转
 */
@property (nonatomic, assign) BOOL isAllowRotation;

/**
 要跳转到的录像的时间字符串  yyyy-MM-dd HH:mm:ss
 */
@property (nonatomic, strong) NSString *recordTime;

/**
 针对IPC直播的录像回放
 */
@property (nonatomic, strong) UIView *IPCRecordView;
    
/**
 是否开启语音
*/
@property (nonatomic, assign) BOOL isVideo;

@property (nonatomic , strong)NSData *imageData;

/**
 针对  锐利从门店入口控制播放中按钮参数
 */
@property (nonatomic, assign) BOOL isFromShopList;

@end
