//
//  WDZAlarmHandleFrameView.h
//  WanDianZhang
//  报警->详情
//  Created by  ovopark_iOS1 on 16/6/14.
//  Copyright © 2016年 zhenglaixian. All rights reserved.
//

#import "WDZBaseFrameView.h"
#import "WDZAlarmModel.h"

@protocol WDZAlarmHandleFrameViewDelegate ;
@interface WDZAlarmHandleFrameView : WDZBaseFrameView


@property (strong , nonatomic) UIImageView *imageView;
@property (strong , nonatomic)  UILabel     *nameLabel;
@property (strong , nonatomic)  UILabel     *categoryLabel;
@property (strong , nonatomic)  UILabel     *toUsersLabel;
@property (strong , nonatomic)  UILabel    *deadLineLabel;
@property (strong , nonatomic)  UILabel    *desLabel;
@property (assign , nonatomic) CGRect LabelFrame;
@property (copy , nonatomic) NSString  *text;
/**
 保险电话
 */
@property (nonatomic , strong)NSString *insurance;

@property (strong , nonatomic) WDZAlarmModel *alarmModel;
@property (weak , nonatomic) id<WDZAlarmHandleFrameViewDelegate>delegate;

-(void) disPlayByAlarm:(WDZAlarmModel *)alarm;

//-(void)disPlayByAlarmArray:(NSArray <WDZAlarmModel *>*)alarmArr andIndex:(NSIntager)index;

@end


@protocol WDZAlarmHandleFrameViewDelegate <NSObject>
- (void)frameViewDidBack:(WDZAlarmHandleFrameView *)v;

- (void)frameViewDidClickPlayButton:(UIButton *)sender WithDeviceID:(NSString *)deviceID;
- (void)frameViewDidClickProBtn:(UIButton *)sender;

@end




