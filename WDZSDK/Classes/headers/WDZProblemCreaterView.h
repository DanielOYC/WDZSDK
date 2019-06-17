//
//  WDZAddProblemView.h
//  WDZLaiYiFen
//
//  Created by 郑来贤 on 15/7/6.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WDZProblemCreaterViewDelegate;
@interface WDZProblemCreaterView : UIView

@property (weak , nonatomic) id<WDZProblemCreaterViewDelegate> delegate;

+ (instancetype)initFromNib;
- (IBAction)createProblem:(id)sender;

@end

@protocol WDZProblemCreaterViewDelegate <NSObject>

- (void)problemCreaterDidCreate:(WDZProblemCreaterView *)v;

@end
