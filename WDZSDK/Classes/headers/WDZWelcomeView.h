//
//  WDZWelcomeView.h
//  AFNetworking
//
//  Created by dingkan on 2019/1/17.
//

#import <UIKit/UIKit.h>
#import "WDZWelComeService.h"
#import "WDZWelComeModel.h"
NS_ASSUME_NONNULL_BEGIN

@protocol WDZWelcomeViewDelegate <NSObject>
-(void)WDZWelcomeViewDidClickItem:(WDZWelComeModel *)model;
@end

@interface WDZWelcomeView : UIView

+(void)showWithConfig:(WDZWelComeService *)config imgs:(NSMutableArray<WDZWelComeModel *> *)imgs delegate:(id<WDZWelcomeViewDelegate>)delegate;
+(void)dismiss;
@end

NS_ASSUME_NONNULL_END
