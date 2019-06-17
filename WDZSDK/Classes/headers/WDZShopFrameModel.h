//
//  WDZShopFrameModel.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/9.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShopModel.h"

@interface WDZShopFrameModel : NSObject
/**收藏的frame*/
@property (nonatomic, assign,readonly) CGRect collectionButtonFrame;

@property (nonatomic, assign) CGRect arrowFrame;
//门店名称frame
@property (nonatomic, assign,readonly) CGRect shopNameFrame;
//四画面
@property (nonatomic, assign,readonly) CGRect fourScreenFrame;

@property (nonatomic, assign,readonly) CGRect videoContentFrame;
//门店的frame数组
@property (nonatomic, strong,readonly) NSArray *shopListFrame;
//cell的高度
@property (nonatomic, assign,readonly) CGFloat cellHeight;
/**
 门店对象
 */
@property (nonatomic, strong) WDZShopModel *shopModel;

@end
