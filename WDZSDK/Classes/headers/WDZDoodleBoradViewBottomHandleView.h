//
//  WDZDoodleBoradViewBottomHandleView.h
//  AFNetworking
//
//  Created by dingkan on 2019/2/22.
//    底部 编辑事件栏目

#import <UIKit/UIKit.h>
@class WDZDoodleBoardBottomHandleModel;

@interface WDZDoodleBoradViewBottomHandleView : UIView

/**
 底部操作数据
 */
@property (nonatomic, strong) NSMutableArray <WDZDoodleBoardBottomHandleModel *>*handlDatas;

@end
