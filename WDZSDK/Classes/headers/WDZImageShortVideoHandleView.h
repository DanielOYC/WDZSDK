//
//  WDZImageShortVideoHandleView.h
//  AFNetworking
//
//  Created by dingkan on 2018/10/31.
//

#import <UIKit/UIKit.h>

#import "WDZImageShowModel.h"

@interface WDZImageShortVideoHandleView : UIView

+(instancetype)handleActionViewWithModels:(NSArray<WDZImageShortVideoHandleModel *> *)models frame:(CGRect)frame;

@end
