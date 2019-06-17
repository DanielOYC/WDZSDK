//
//  WDZNShopLabelSeleteTableViewCell.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/16.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZNShopLabelModel.h"
@interface WDZNShopLabelSeleteTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZNShopLabelModel *labelModel;

/**
 选中的标签
 */
@property (nonatomic , retain)WDZNShopLabelModel *seleteLabelModel;


//选中的VideoModel
@property (nonatomic , retain)WDZVideoModel *seleteVideoModel;
//当前的VideoModel
@property (nonatomic , retain)WDZVideoModel *videoModel;

@end
