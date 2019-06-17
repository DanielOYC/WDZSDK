//
//  WDZAlarmOftenView.h
//  Pods
//
//  Created by Daniel on 2019/4/18.
//

#import "WDZBaseFrameView.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZAlarmOftenView : UIView

@property (strong , nonatomic) UIButton * _Nullable leftBtn;

@property (strong , nonatomic) NSString * _Nullable title;

@property (nonatomic , strong)UIButton * _Nullable rightBtn;

@property (nonatomic , strong)WDZNavigationBar *WDZ_NavigationBar;

@property (nonatomic , assign)BOOL isPopToRoot;

-(instancetype _Nullable )initAddLeftBtnWithFrame:(CGRect)frame title:(NSString *_Nullable)title target:(nullable id)target;

-(instancetype _Nullable )initAddRightBtnWithFrame:(CGRect)frame title:(NSString *_Nullable)title target:(nullable id)target;

@end

NS_ASSUME_NONNULL_END
