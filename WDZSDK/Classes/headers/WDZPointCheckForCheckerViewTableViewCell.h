//
//  WDZPointCheckForCheckerViewTableViewCell.h
//  WDZStore
//
//  Created by 郑来贤 on 14/12/26.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WDZShapeLabel.h"
#import "WDZCheckUnitModel.h"

@interface WDZPointCheckForCheckerViewTableViewCell : UITableViewCell

@property (weak , nonatomic) IBOutlet WDZShapeLabel *remarkLabel;
@property (weak , nonatomic) IBOutlet UILabel *titleLabel;
@property (weak , nonatomic) IBOutlet UILabel *statusLabel;

@property (strong , nonatomic) WDZCheckUnitModel *checkUnitModel;

@property (strong , nonatomic) NSIndexPath *cellIndexPath;

+(float)heightForCellWithModel:(WDZCheckUnitModel *)model;

- (void)displayWithModel:(WDZCheckUnitModel *)model;

+ (id)initFromNib;

@end

