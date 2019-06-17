//
//  WDZPaintView.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/23.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, DrawingMode) {
    DrawingModeNone = 0,
    DrawingModePaint,
    DrawingModeErase,
};

@interface WDZPaintView : UIView
{
    CGPoint previousPoint;
    CGPoint currentPoint;
}

@property (nonatomic, readwrite) DrawingMode drawingMode;
@property (nonatomic, strong)    UIColor     *selectedColor;
@property (nonatomic, strong)    UIImage * viewImage;

- (void)cancelDrawed;

@end
