//
//  ElectronicSignatureView.h
//  WDZBaseKit
//
//  Created by dingkan on 2018/10/24.
//

#import <UIKit/UIKit.h>
#import "ElectronicSignatureConfig.h"

@interface ElectronicSignatureView : UIView

@property (nonatomic, strong) ElectronicSignatureConfig *config;

@property (nonatomic, strong) void(^finifshBlock)(UIImage *img);

@end
