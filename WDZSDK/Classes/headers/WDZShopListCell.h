//
//  WDZShopListCell.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/8/9.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShopFrameModel.h"
#import "WDZShopModel.h"

typedef NS_ENUM(NSInteger, listType) {
    
    listTypeWatchVideo,//查看视频
    listTypeChoosedevice //选择设备
};

@interface WDZShopListCell : UITableViewCell

/**
 门店列表使用途径
 */
@property (nonatomic, assign) listType type;

@property (nonatomic, strong) WDZShopFrameModel *frameModel;

@end
