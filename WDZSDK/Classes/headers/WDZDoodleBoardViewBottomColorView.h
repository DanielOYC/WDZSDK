//
//  WDZDoodleBoardViewBottomColorView.h
//  AFNetworking
//
//  Created by dingkan on 2019/2/22.
//

#import <UIKit/UIKit.h>
@class WDZDoodleBoardBottomHandleModel;

@interface WDZDoodleBoardViewBottomColorView : UIView

@property (nonatomic, assign) BOOL undoState;

/**
 颜色数组
 */
@property (nonatomic, strong) NSMutableArray<WDZDoodleBoardBottomHandleModel *> *handeDatas;


@end


