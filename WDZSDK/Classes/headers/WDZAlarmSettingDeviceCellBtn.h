//
//  WDZAlarmSettingDeviceCellBtn.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZAlarmSettingDeviceCellBtn : UIButton

@property (nonatomic , strong)UIImageView *leftImageView;

@property (nonatomic , strong)UILabel *titleLab;

@property (nonatomic , strong)UILabel *detailLab;

@property (nonatomic , strong)UIImageView *rightImageView;

-(instancetype)initWithLeftImage:(UIImage *)leftImage title:(NSString *)title detailText:(NSString *)detailText haveRightImage:(BOOL)isRightImage andY:(CGFloat)btnY;

@end
