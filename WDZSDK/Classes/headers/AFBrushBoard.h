//
//  AFBrushBoard.h
//  AFBrushBoard
//
//  Created by Ordinary on 16/3/24.
//  Copyright © 2016年 Ordinary. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AFBrushBoard : UIImageView

@property (nonatomic , strong)UIButton *cleanBtn;

/**
 清空界面
 */
- (void)cleanBtnDidClick;

@end
