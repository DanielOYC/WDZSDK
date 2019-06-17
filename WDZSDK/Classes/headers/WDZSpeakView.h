//
//  WDZSpeakView.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/9/12.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZSpeakView : UIView

/**
 当前需要显示的videoModel
 */
@property (nonatomic, strong) WDZVideoModel *videoModel;

/**
 获取语音对讲界面
 */
+ (instancetype)speakView;

@end
