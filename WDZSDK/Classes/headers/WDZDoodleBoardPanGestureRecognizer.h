//
//  WDZDoodleBoardPanGestureRecognizer.h
//  AFNetworking
//
//  Created by dingkan on 2019/4/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface WDZDoodleBoardPanGestureRecognizer : UIPanGestureRecognizer
@property(assign, nonatomic) CGPoint beginPoint;
@property(assign, nonatomic) CGPoint movePoint;

-(instancetype)initWithTarget:(id)target action:(SEL)action inview:(UIView*)view;


@end

NS_ASSUME_NONNULL_END
