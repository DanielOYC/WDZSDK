//
//  WDZBusinessWebViewController.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/21.
//   业务相关

#import "WDZWebNavBarHandleController.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZBusinessWebViewController : WDZWebNavBarHandleController

/**
 是否是管理页面的轮播图,如果是,需要调用 viewDidDisappear 方法关闭音乐
 */
@property (nonatomic , assign) BOOL isManagerWebUrl;

@end

NS_ASSUME_NONNULL_END
