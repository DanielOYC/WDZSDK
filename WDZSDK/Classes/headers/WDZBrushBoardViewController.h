//
//  WDZBrushBoardViewController.h
//  AFBrushBoard
//
//  Created by  ovopark_iOS1 on 2018/7/23.
//  Copyright © 2018年 Ordinary. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^WDZBrushBoard)(UIImage *selectValue);

@interface WDZBrushBoardViewController : UIViewController

-(instancetype)initWithResultBlock:(WDZBrushBoard)resultBlock;

@end
