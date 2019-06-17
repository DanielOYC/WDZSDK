//
//  VideoRecordingDateSelectView.h
//  VideoRecordingDateSelectView
//
//  Created by ovopark_iOS on 15/12/8.
//  Copyright © 2015年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class VideoRecordingDateSelectView;
@protocol VideoRecordingDateSelectViewDelegate <NSObject>

// 点击了今天按钮
- (void)videoRecordingDateSelectView:(VideoRecordingDateSelectView *)videoRecordingDateSelectView todayButtonClicked:(UIButton *)todayButton withYear:(NSString *)year month:(NSString *)month andDay:(NSString *)day;
// 点击了前进（下一月）按钮
- (void)videoRecordingDateSelectView:(VideoRecordingDateSelectView *)videoRecordingDateSelectView forwardButtonClicked:(UIButton *)forwardButton withYear:(NSString *)year andMonth:(NSString *)month;
// 点击了后退（上一月）按钮
- (void)videoRecordingDateSelectView:(VideoRecordingDateSelectView *)videoRecordingDateSelectView backwardButtonClicked:(UIButton *)backwardButton withYear:(NSString *)year andMonth:(NSString *)month;
// 选中了某日
- (void)videoRecordingDateSelectView:(VideoRecordingDateSelectView *)videoRecordingDateSelectView didSelectDate:(NSDictionary *)dateInfo atIndex:(NSInteger)index;

@end

@interface VideoRecordingDateSelectView : UIView

@property (assign, nonatomic) id<VideoRecordingDateSelectViewDelegate>delegate;

// 传入一段0、1字符串，修改界面数据
- (void)reloadViewWithMonthRecordingArray:(NSArray *)monthRecordingArray year:(NSString *)year andMonth:(NSString *)month;


@end
