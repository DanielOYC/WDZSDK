//
//  WDZShapeLabel.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/25.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZShapeLabel : UIView

@property (strong , nonatomic) NSArray *Arrtext;

@property (strong , nonatomic) UIFont *font;


+ (CGSize )sizeWithArrtext:(NSArray *)arr;



@end
