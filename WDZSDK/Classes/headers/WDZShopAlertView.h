//
//  WDZShopAlertView.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 17/3/13.
//  Copyright © 2017年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZShopAlertView : UIView

@property (nonatomic ,assign) BOOL isShow;
@property (nonatomic ,strong) NSMutableArray *shopArr;
@property (nonatomic ,strong) UITableView *shopTableView;
@property (nonatomic, strong) UIButton *closeButton;
@property (nonatomic, strong) UILabel *titleLabel;
@end
