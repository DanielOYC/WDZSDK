//
//  ElectronicSignatureManager.h
//  test
//
//  Created by dingkan on 2018/10/24.
//  Copyright © 2018年 dingkan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ElectronicSignatureConfig.h"
@interface ElectronicSignatureManager : UIView

+(void)showElectronicSignatureViewWithConfig:(ElectronicSignatureConfig *)config complete:(void(^)(UIImage *img, CGRect frame))complete  superViewFrame:(CGRect)superViewFrame;


@end
