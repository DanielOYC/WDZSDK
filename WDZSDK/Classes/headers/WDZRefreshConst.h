//  代码地址: https://github.com/CoderMJLee/WDZRefresh
//  代码地址: http://code4app.com/ios/%E5%BF%AB%E9%80%9F%E9%9B%86%E6%88%90%E4%B8%8B%E6%8B%89%E4%B8%8A%E6%8B%89%E5%88%B7%E6%96%B0/52326ce26803fabc46000000
#import <UIKit/UIKit.h>
#import <objc/message.h>

// 弱引用
#define MJWeakSelf __weak typeof(self) weakSelf = self;

// 日志输出
#ifdef DEBUG
#define WDZRefreshLog(...) NSLog(__VA_ARGS__)
#else
#define WDZRefreshLog(...)
#endif

// 过期提醒
#define WDZRefreshDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

// 运行时objc_msgSend
#define WDZRefreshMsgSend(...) ((void (*)(void *, SEL, UIView *))objc_msgSend)(__VA_ARGS__)
#define WDZRefreshMsgTarget(target) (__bridge void *)(target)

// RGB颜色
#define WDZRefreshColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

// 文字颜色
#define WDZRefreshLabelTextColor WDZRefreshColor(90, 90, 90)

// 字体大小
#define WDZRefreshLabelFont [UIFont boldSystemFontOfSize:14]

// 常量
UIKIT_EXTERN const CGFloat WDZRefreshLabelLeftInset;
UIKIT_EXTERN const CGFloat WDZRefreshHeaderHeight;
UIKIT_EXTERN const CGFloat WDZRefreshFooterHeight;
UIKIT_EXTERN const CGFloat WDZRefreshFastAnimationDuration;
UIKIT_EXTERN const CGFloat WDZRefreshSlowAnimationDuration;

UIKIT_EXTERN NSString *const WDZRefreshKeyPathContentOffset;
UIKIT_EXTERN NSString *const WDZRefreshKeyPathContentSize;
UIKIT_EXTERN NSString *const WDZRefreshKeyPathContentInset;
UIKIT_EXTERN NSString *const WDZRefreshKeyPathPanState;

UIKIT_EXTERN NSString *const WDZRefreshHeaderLastUpdatedTimeKey;

UIKIT_EXTERN NSString *const WDZRefreshHeaderIdleText;
UIKIT_EXTERN NSString *const WDZRefreshHeaderPullingText;
UIKIT_EXTERN NSString *const WDZRefreshHeaderRefreshingText;

UIKIT_EXTERN NSString *const WDZRefreshAutoFooterIdleText;
UIKIT_EXTERN NSString *const WDZRefreshAutoFooterRefreshingText;
UIKIT_EXTERN NSString *const WDZRefreshAutoFooterNoMoreDataText;

UIKIT_EXTERN NSString *const WDZRefreshBackFooterIdleText;
UIKIT_EXTERN NSString *const WDZRefreshBackFooterPullingText;
UIKIT_EXTERN NSString *const WDZRefreshBackFooterRefreshingText;
UIKIT_EXTERN NSString *const WDZRefreshBackFooterNoMoreDataText;

UIKIT_EXTERN NSString *const WDZRefreshHeaderLastTimeText;
UIKIT_EXTERN NSString *const WDZRefreshHeaderDateTodayText;
UIKIT_EXTERN NSString *const WDZRefreshHeaderNoneLastDateText;

// 状态检查
#define WDZRefreshCheckState \
WDZRefreshState oldState = self.state; \
if (state == oldState) return; \
[super setState:state];
