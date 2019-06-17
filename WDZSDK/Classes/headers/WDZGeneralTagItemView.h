//
//  WDZGeneralTagItemView.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/8.
//

#import <UIKit/UIKit.h>
#import "WDZGeneralTagConfigManager.h"
#import "WDZGeneralTagModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZGeneralTagItemView : UIView

@property (nonatomic, strong) UILabel *subTitleLabel;

@property (nonatomic, strong) UIButton *titleBtn;

@property (nonatomic, strong) WDZGeneralTagModel *model;

@property (nonatomic, strong) WDZGeneralTagConfigManager *config;

@property (nonatomic, strong) void(^didClickTag)(WDZGeneralTagModel *model);

-(void)refreshCurrentModel:(WDZGeneralTagModel *)model;

@end

NS_ASSUME_NONNULL_END

