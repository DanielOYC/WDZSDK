//
//  WDZCommentHandleView.h
//  AFNetworking
//
//  Created by dingkan on 2018/12/10.
//

#import <UIKit/UIKit.h>
#import "WDZCommentHandleModel.h"

@interface WDZCommentHandleView : UIView
/**
 操作栏数据
 */
@property (nonatomic, strong) NSMutableArray<WDZCommentHandleModel *> *handleDatas;

@end
