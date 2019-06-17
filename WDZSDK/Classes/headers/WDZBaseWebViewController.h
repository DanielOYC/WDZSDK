//
//  WDZBaseWebViewController.h
//  WDZForAppStore
//
//  Created by shine on 2019/5/9.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import "WDZBaseViewController.h"
#import <WebKit/WebKit.h>
#import "WDZErrorView.h"
#import "UIViewController+NavigationBar.h"
#import "globalDefine.h"
#import "WDZNavigationBarHeader.h"
#import "WDZWebControllerConfig.h"

NS_ASSUME_NONNULL_BEGIN

@protocol WDZBaseWebViewControllerDelegate <NSObject>

/**
 加载完成的回调
 */
- (void)webView:(WKWebView *)webView loadFinishWithNavigation:(WKNavigation *)navigation;

/**
 加载完成的回调
 */
- (void)webView:(WKWebView *)webView loadFinishWithNavigation:(WKNavigation *)navigation vc:(UIViewController *)vc;

/**
 webView加载失败的回调

 @param webView webView对象
 @param error 错信息
 */
- (void)webView:(WKWebView *)webView loadFailWithError:(NSError *)error;

@end

@interface WDZBaseWebViewController : WDZBaseViewController<WKNavigationDelegate, WDZErrorViewDelegate,WKUIDelegate,WKScriptMessageHandler>

@property (nonatomic, strong) WDZNavigationBar *ownNavBar;

/**
 是否隐藏bar
 */
@property (nonatomic, assign) BOOL hiddenBar;

/**设置显示标题*/
@property (nonatomic, strong) NSString *titleName;

@property (nonatomic, weak) UIProgressView *progressView;

@property (nonatomic, strong) WKWebView *webView;
/**
 webView url
 */
@property (nonatomic, copy) NSString *urlSting;

@property (nonatomic, copy) NSString *shareUrl;

/**
 超出视图是否允许滚动  默认:NO   YES:允许  NO:不允许
 */
@property (nonatomic, assign) BOOL rolling;

/**
 是否支持分享  默认不支持NO : Yes 支持  NO 不支持
 */
@property (nonatomic, assign) BOOL allowShare;

@property (nonatomic, weak) id<WDZBaseWebViewControllerDelegate> delegate;

/**
 重新定义分享按钮事件
 */
- (void)sharedButtonAddTarget:(id) target action:(SEL) action;

- (void)onBackBtnClick:(UIButton *)sender;
@end

NS_ASSUME_NONNULL_END
