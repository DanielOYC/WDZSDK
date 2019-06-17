//
//  WDZMediatorHeader.h
//  WDZForAppStore
//
//  Created by Hayder on 2019/4/29.
//  Copyright © 2019 Wandianzhang. All rights reserved.
//

#import "WDZMediator.h"
#import "Target_BaseModel.h"

#pragma mark ---------------------分享组件----------------------------
#define WDZShareTargetName @"WDZShareView"
#define WDZShareActionName @"shareview"

#pragma mark ---------------------视频界面播放调用组件----------------------------
#define WDZMPlayViewControllerTargetName @"WDZMPlayViewController"
#define WDZMPlayViewControllerActionName @"mPlayViewController"


#pragma mark ---------------------代办单----------------------------
#define WDZBackLogViewControllerTargetName @"WDZBackLogViewController"
#define WDZBackLogViewControllerActionName @"backLogViewController"
#define WDZNewProblemHandleViewControllerTargetName @"WDZNewProblemHandleViewController"
#define WDZNewProblemHandleViewControllerActionName @"problemHandleViewController"

#pragma mark ---------------------四画面----------------------------
#define WDZFourScreenPlayerControllerTargetName @"WDZFourScreenPlayerController"
#define WDZFourScreenPlayerControllerActionName @"WDZFourScreenPlayerController"

#pragma mark ---------------------设备管理---------------------------
#define WDZDeviceManagerViewControllerTargetName @"WDZDeviceManagerViewController"
#define WDZDeviceManagerViewControllerActionName @"WDZDeviceManagerViewController"

#pragma mark ---------------------设备列表----------------------------
#define WDZVideoListViewControllerTargetName @"WDZVideoListViewController"
#define WDZVideoListViewControllerActionName @"WDZVideoListViewController"

#pragma mark ---------------------现场巡店完成-----------------------------
#define WDZLocationPatrolDoneViewControllerTargetName @"WDZLocationPatrolDoneViewController"
#define WDZLocationPatrolDoneViewControllerActionName @"WDZLocationPatrolDoneViewController"

#pragma mark ---------------------现场巡店-----------------------------
#define WDZLocationPatrolViewControllerTargetName @"WDZLocationPatrolViewController"
#define WDZLocationPatrolViewControllerActionName @"fetchViewController"

#pragma mark ---------------------主门店控制器-----------------------------
#define WDZShopMainViewControllerTargetName @"WDZShopMainViewController"
#define WDZShopMainViewControllerActionName @"WDZShopMainViewController"

#pragma mark --------------------远程巡店-----------------------------
#define WDZRemotePatrolShopViewControllerTargetName @"WDZRemotePatrolShopViewController"
#define WDZRemotePatrolShopViewControllerActionName @"WDZRemotePatrolShopViewController"

#pragma mark ---------------------历史巡店-----------------------------
#define WDZOnsiteHistoryViewControllerTargetName @"WDZOnsiteHistoryViewController"
#define WDZOnsiteHistoryViewControllerActionName @"WDZOnsiteHistoryViewController"

#pragma mark ---------------------摇一摇巡店-----------------------------
#define WDZSamplingViewControllerTargetName @"WDZSamplingViewController"
#define WDZSamplingViewControllerActionName @"fetchViewController"

#pragma mark ---------------------点检中心-----------------------------
#define WDZShopTasksForCheckerViewControllerTargetName @"WDZShopTasksForCheckerViewController"
#define WDZShopTasksForCheckerViewControllerActionName @"fetchViewController"

#pragma mark ---------------------门店管理-----------------------------门店详情
#define WDZShopDetailViewControllerTargetName @"WDZShopDetailViewController"
#define WDZShopDetailViewControllerActionName @"shopDetailViewController"
#pragma mark ---------------------门店管理-----------------------------
#define WDZNShopManagerHomeViewControllerTargetName @"WDZNShopManagerHomeViewController"
#define WDZNShopManagerHomeViewControllerActionName @"shopManagerHomeViewController"




#pragma mark ---------------------点检配置-----------------------------
#define WDZNTaskConfigWebViewControllerTargetName @"WDZNTaskConfigWebViewController"
#define WDZNTaskConfigWebViewControllerActionName @"taskConfigWebView"


#pragma mark ---------------------台历-----------------------------
#define WDZCalendarViewControllerTargetName @"WDZCalendarViewController"
#define WDZCalendarViewControllerActionName @"calendarViewController"

#pragma mark ---------------------工作圈-----------------------------
#define WDZNewWorkWorldControllerTargetName @"WDZNewWorkWorldController"
#define WDZNewWorkWorldControllerActionName @"workWorldController"



#pragma mark ---------------------webVC-----------------------------
#define WDZBusinessWebViewControllerTargetName @"WDZBusinessWebViewController"
//通用webView
#define WDZBusinessWebViewControllerActionName @"WDZWebView"
//工程归档
#define WDZNProjectArchiveViewControllerActionName @"projectArchive"
//顾客意见
#define WDZNCustomerOpinionWebViewControllerActionName @"customerOpinionWebView"
//积分
#define WDZNIntergalWebViewControllerActionName @"IntergalWebView"
//客流
#define WDZNCustomViewControllerActionName @"passengerFlow"
//企业注册
#define WDZNCompanyRegisterWebViewControllerActionName @"companyRegisterWebView"
//热点分析
#define WDZHotsPotWebViewControllerActionName @"hotsPotWebView"
//人脸报表
#define WDZNFaceReportViewControllerActionName @"faceReportView"
//设备注册
#define WDZNRegisterWebViewControllerActionName @"registerWebView"
//仪表盘
#define WDZNChartReportViewControllerActionName @"chartReportView"
//CRM
#define WDZNCRMWebViewControllerActionName @"CRMWebView"
//数据中心
#define WDZDataCenterViewControllerActionName @"dataCenterView"
//(车流量)
#define WDZTRafficFlowViewControllerActionName @"tRafficFlowViewController"
//反馈
#define WDZCustomOpinionViewControllerActionName @"customOpinionViewController"
//控制台c
#define WDZConsoleWebViewControllerActionName @"consoleWebViewController"

//二维码扫描
#define WDZScanerViewControllerTargetName @"WDZScanerViewController"
//通用webView
#define WDZScanerViewControllerActionName @"WDZScanerViewController"


#pragma mark ---------------------创建店报-----------------------------
#define WDZShopReportEditControllerTargetName @"WDZShopReportEditController"
#define WDZShopReportEditControllerActionName @"shopReportEditController"



#pragma mark ---------------------门店架构-----------------------------
#define WDZOrganizationHomeControllerTargetName @"WDZOrganizationHomeController"
#define WDZOrganizationHomeControllerActionName @"organizationHomeController"
#define WDZOrganizationHomeControllerFetchActionName @"fetchViewController"




