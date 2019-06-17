//
//  WDZDrawingBoard.h
//  WDZPublicComponent
//
//  Created by dingkan on 2018/10/19.
//

#import <UIKit/UIKit.h>
#import "WDZDoodleBoardConfig.h"

@interface WDZDrawingBoard : UIView

+(void)showASetOfImgsDrawing:(NSArray<UIImage *> *)imgArray type:(WDZDoodleBoardHandleType)type inView:(UIView *)superView complete:(void(^)(NSArray<UIImage *> *editArray))complete;

@end
