//
//  WDZNShopDetailFrameCellView.h
//  WDZForAppStore
//
//  Created by 夏征宇 on 2018/5/22.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDZNShopDetailFrameCellView : UIView
@property (nonatomic , retain)UILabel *nameLabel;
@property (nonatomic , retain)NSString *detail;
@property (nonatomic , retain)UITextField *detailTextField;

@property (nonatomic , retain)UIImageView *rightImageView;

@property (nonatomic , retain)UILabel *rightLabel;

@property (nonatomic , retain)UIView *lineView;

-(void)setName:(NSString *)name WithDetailText:(NSString *)detail withPlaceDetail:(NSString *)place WithRightImageHide:(BOOL)isHidden WithRightLabelHidden:(BOOL)isHidden WithRightLabelText:(NSString *)rightText;

@end
