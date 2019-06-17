//
//  WDZWinnieDatePickerView.h
//  日期选择，仅支持年月选择
//
//  Created by Winnie on 2017/12/12.
//  Copyright © 2017年 Winnie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZWinnieDatePickerView : UIView

- (instancetype)initDatePackerWithResponse:(void(^)(NSString*))block;

- (void)show;

@end
