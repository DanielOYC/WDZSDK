//
//  WDZShopSelectTableViewCell.h
//  
//
//  Created by  ovopark_iOS1 on 17/2/21.
//
//

#import <UIKit/UIKit.h>
#import "WDZShopModel.h"

@interface  WDZShopForUserTableViewCell: UITableViewCell

+ (instancetype)initFromNib;
@property (weak, nonatomic) IBOutlet UIImageView *selectImageView;

@property (weak, nonatomic) IBOutlet UILabel *shopNameLabel;

- (void) displayByModel:(WDZShopModel *)model;

@end
