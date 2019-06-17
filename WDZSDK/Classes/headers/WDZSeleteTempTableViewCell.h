//
//  WDZSeleteTempTableViewCell.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/11/1.
//  Copyright © 2018 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZTempModel;
@class WDZSeleteTempConfig;
//#import "WDZTempModel.h"
//#import "WDZSeleteTempConfig.h"

@interface WDZSeleteTempTableViewCell : UITableViewCell

@property (nonatomic , retain)WDZTempModel *tempModel;

@property (nonatomic , retain)WDZSeleteTempConfig *config;

@end
