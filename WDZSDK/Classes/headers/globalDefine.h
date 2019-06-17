//
//  globalDefine.h
//  WDZStore
//
//  Created by 郑来贤 on 14-4-8.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.

#ifndef WDZStore_globalDefine_h
#define WDZStore_globalDefine_h

// UI－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－

#import "JPPD.h"
#import "WDZDefine.h"
#import "WDZConfigTool.h"
#import "UIImage+TintColor.h"
#import "UIColor+ColorChange.h"
#import "WDZChangeLanguage.h"
#import "WDZCacheManager.h"

#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;

#define IS_IOS11_OR_LATER [[[UIDevice currentDevice]systemVersion] floatValue] >= 11.0
// size
#define IS_IOS9_OR_LATER [[[UIDevice currentDevice]systemVersion] floatValue] >= 9.0

//定义宏，判断ios8
#define IS_IOS8_OR_LATER [[[UIDevice currentDevice]systemVersion] floatValue] >= 8.0

//定义宏，判断ios7
    #define IS_IOS7_OR_LATER [[[UIDevice currentDevice]systemVersion] floatValue] >= 7.0
 #define IS_IOS6_OR_LATER [[[UIDevice currentDevice]systemVersion] floatValue] >= 6.0
    #define WDZ_NavigationBar_Height IS_IOS7_OR_LATER?68:48
//判断ipad
    #define IS_IPAD UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad
#define WindowBounds [[UIScreen mainScreen] bounds]

//定义宏 HUD
    #define HUD_Offset_y 0
    #define HUD_Margin 10
    #define HUD_Animation_Duration 0.5

// color
    #define RGBA(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

// URl－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
//阿里服务器
#define WDZStore_BaseUrl [WDZConfigTool getHttpURL]

//webView 内网不带https  外网带https
#define WDZ_WebBaseUrl ([[[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"] containsString:@"wandianzhang"] || [[[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"] containsString:@"ovopark"]) ? [NSString stringWithFormat:@"https://%@/", ([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) ? ([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) : ([WDZAPPTYPE isEqualToString:@"TJ"]?(@"59.110.169.117"):(@"www.ovopark.com"))] : [NSString stringWithFormat:@"http://%@/", ([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) ? ([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) : ([WDZAPPTYPE isEqualToString:@"TJ"]?(@"59.110.169.117"):(@"www.ovopark.com"))]

/**
 人脸+特殊端口号
 */
//#define WDZFace_BaseUrl  [NSString stringWithFormat:@"http://%@:%@/shopweb-support/",([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) ? ([[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"]) : ([WDZAPPTYPE isEqualToString:@"TJ"]?(@"59.110.169.117"):(@"www.wandianzhang.com")), ([WDZStore_BaseUrl containsString:@"www.wandianzhang"] || [WDZStore_BaseUrl containsString:@"59.110.169.117"]) ? @"8089" : @"8088"]
#define WDZFace_BaseUrl  [[JPPD shareJPPD] readOneHeavyweightValueWithKey:WDZ_FaceUrl inTable:WDZ_FaceUrl]
#define WDZ_FaceUrl @"faceUrl"

#define WDZFace_MarkUrl @"http://api.ovopark.com/m.api"

//褚亚良本机服务器
//#define WDZFace_BaseUrl  [NSString stringWithFormat:@"http://%@:%@/shopweb-support/",@"172.30.19.134", [[NSUserDefaults standardUserDefaults] objectForKey:@"service_preference"] ? @"8088" : @"8089"]

#define WDZLocalizedString(key, comment) \
[[WDZChangeLanguage bundle] localizedStringForKey:key value:nil table:@"Localizable"]

// 长链接
#define kWebSocketUrl [[WDZStore_BaseUrl stringByReplacingOccurrencesOfString:@"https" withString:@"ws"] stringByAppendingString:@"websocket"]

#define getWebSocketUrl @"/service/getServerMap.action"

/************************* 打印 **********************************/
#ifdef DEBUG // 调试状态, 打开LOG功能
#define NSLog(...) NSLog(__VA_ARGS__)
#else // 发布状态, 关闭LOG功能
#define NSLog(...)
#endif

#define WDZ_GetDeviveListNum    @"50"
#define LAYYIFEN_ENTERPRISEID  @"83"

// NetWor k Request Error and Code －－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
    #define WDZConnectSuccess @"网络链接成功"
    #define WDZConnectSuccessCode 10000

    #define WDZDateAnalyzeError @"服务端错误"
    #define WDZDateAnalyzeErrorCode 10001

    #define WDZConnectError @"网络链接错误"
    #define WDZConnectErrorCode 10002

    #define WDZAddDeviceSuccessMsg @""
    #define WDZAddDeviceSuccessCode 10008
    #define WDZAddDeviceErrorCode 10009
    #define WDZAddDeviceErrorMsg @"注册设备失败"

    #define WDZTokenExpire @"token过期"
    #define WDZTokenExpireCode 1010


    #define AppID                 @"949803213"

// Method－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－
    #define WDZ_GetStringValueFromDicWithKey(dic,key) ([[dic objectForKey:key] isKindOfClass:[NSNull class]]) || (![dic objectForKey:key])?nil:[NSString stringWithFormat:@"%@",[dic objectForKey:key]]
    #define WDZ_GetStringDicFromDicWithKey(dic,key) ([dic objectForKey:key]||   [[dic objectForKey:key] isKindOfClass:[NSNull class]]) ?[dic objectForKey:key]:[NSDictionary new]

// Method－end－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－－

//
// 保存图片是否到相册， 1:保存到相册 0.保存到自定义的目录
#define SaveImageToAblum 1

// notification

#define VIDEOSHARECHANGENOTI              @"video.share.changed.noti"
#define USERTHUMBCHANGEDNOTI              @"user.thumb.changed.noti"
#define PROBLEMIMAGEHANGEDNOTI            @"problem.thumb.changed.noti"
#define VIDEOTHUNMCHANGEDNOTI             @"video.thumb.changed.noti"
#define USERLOCATIONUPDATENOTI            @"user.location.update.noti"
#define USERTOKENEXPIRENOTI               @"user.token.expire.noti"
#define USEREXPIRENOTI                    @"user.expire.noti"
#define USERADDCOLLECTIONSUCCESSNOTI      @"user.addCollection.success.noti"
#define USERCANCLECOLLECTIONSUCCESSNOTI   @"user.cancleCollection.success.noti"
#define NETWORKFAILNOTI                   @"network.fail.noti"
#define NETWORKSUCCESSNOTI                @"network.success.noti"
#define NETWORKFAILWIFI                   @"network.fail.wifi"
#define USERLOGINSUCCESSNOTI              @"user.login.success.noti"
#define USERLOGOUTSUCCESSNOTI             @"user.logout.success.noti"
#define USERADDDEVICESUCCESSNOTI          @"user.adddevice.success.noti"
#define USERDELETEDEVICESUCCESSNOTI       @"user.deletedevice.success.noti"
#define USERSETPLAYPASSWORDSUCCESSNOTI    @"user.setplaypassword.success.noti"
#define VIDEONAMECHANGEDSUCCESSNOTI       @"video.namechanged.success.noti"
#define POINTCHECKREPICMARKSUCCESSNOTI    @"point.checkrpicemark.success.noti"
#define POINTCHECKTEXTMARKSUCCESSNOTI     @"point.checktextremark.success.noti"
#define PROBLEMADDTEXTMARKSUCCESSNOTI     @"problem.addtextremark.success.noti"
#define SHOPTASKSTATUSCHANGEDNOTI         @"shoptask.status.changed.noti"
#define USERDELETESHOPSUBCRIBLENOTI       @"user.delete.shop.subcrible.noti"
#define USERADDSHOPSUBCRIBLENOTI          @"user.add.shop.subscrible.noti"
#define USERDIDSELECTEDSHOPSADDRESSNOTI   @"user.changed.shops.address.noti"
#define SHOPINFOCHANGEDENOTI              @"shop.info.changed.noti"
#define PROBLEMSTATUSCHANGEDENOTI         @"problem.status.changed.noti"
#define WDZLoginOutNoti                    @"WDZLoginOutNotifacation"
#define WDZIPCCLOSENoti                    @"WDZIPCCloseIPC"


#define KSencesPhotoUpdateSucc @"sences.photo.update.succ"

#define PROBLEMADDDESNOTI                 @"problem.add.des.noti"

#define POINTCHECKSAVESUCCESSNOTI @"point.checksave.success.noti"


#define PROBLEMFORWARDSUCCESSNOTI @"problem.forward.success.noti"

#define PROBLEMSENDBACKSUCCESSNOTI @"problem.sendback.success.noti"

#define PROBLEMTOCOPYSSUCCESSNOTI @"problem.tocopys.success.noti"

#define _KuserDefaultAutoRegisterName  @"user.default.autoregister.name"

//接收到后台推送
#define PUSHREVIEWNOTI                    @"push.review.noti"
#define PUSHCHECKNOTI                     @"push.check.noti"

#define KILLAPPLICATION                   @"kill_application"

// reload time interval
#define ReloadTimerInterVal     30*60*1000

//进行iPhone型号判断进行适配
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_WIDTH ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT ([[UIScreen mainScreen] bounds].size.height)
#define APP_WIDTH   ([[UIScreen mainScreen] bounds].size.width)
#define APP_HEIGHT  ([[UIScreen mainScreen] bounds].size.height)
#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))


#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)

#define kMainScreenBounds [UIScreen mainScreen].bounds
#define kMainScreenWidth [UIScreen mainScreen].bounds.size.width
#define kMainScreenHeight [UIScreen mainScreen].bounds.size.height
#define WDZefaultCellHeight [UIScreen mainScreen].bounds.size.width * 5.0/32.0
#define kMessageDefaultCellHeight [UIScreen mainScreen].bounds.size.width * 7.0/37.5 + 10

#define KIsiPhoneX ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#pragma mark - ******** APP配置  ********
/**
    AppName: 万店掌                WDZAPPTYPE WDZ
             万店掌FIR                       WDZ_FIR
             智运营                          ZYY
             赫基巡店                        HJXD
             老百姓                          LBX
             来伊份                          LYF
             万宁                            WN
             金眼                            JY
             太极                            TJ
             文化馆                          WHG
*/

#define WDZAPPTYPE [WDZConfigTool shanredInstance].AppType

#define ConfigData(key) [[WDZConfigTool shanredInstance].configMap objectForKey:key]
#define WKConfig(key) [[NSMutableDictionary alloc] initWithContentsOfFile:[[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"KDWebView_Config"] ofType:@"plist"]][key];

#define backImage [WDZConfigTool getBackNormalImage]
#define backSelectedImage [WDZConfigTool getBackSelectedImage]

#define addTipImage(imageName) - (void)tapImageView:(UITapGestureRecognizer *)tap{[UIView animateWithDuration:0.25 animations:^{self.imageView.transform = CGAffineTransformIdentity;}];}- (UIImageView *)imageView{if (!_imageView) {_imageView = [[UIImageView alloc] init];_imageView.image = [UIImage imageNamed:imageName];_imageView.center = CGPointMake(SCREEN_WIDTH/2, SCREEN_HEIGHT/2);_imageView.width = 1;_imageView.height = 1;_imageView.userInteractionEnabled = YES;UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(tapImageView:)];[_imageView addGestureRecognizer:tap];}return _imageView;}


#define showTipImage [UIView animateWithDuration:0.25 animations:^{self.imageView.transform = CGAffineTransformMakeScale(SCREEN_WIDTH, SCREEN_HEIGHT);}];

#pragma mark - ******** 常用颜色  ********
#define k_MainColor         kThemeColor
#define k_MainTitleColor    RGBOF(0x333333)
#define k_BtnTitleColor     RGB(140, 140, 140)
#define k_PlaceholderColor  RGBOF(0x999999)
#define k_LineColor         RGBOF(0xdddddd)
#define k_BackGroundColor   RGB(242, 242, 242)
#define k_SeletedColor      RGBOF(0x1e8bc3)
#define k_detailTextColor   RGBA(153, 153, 153, 0.6)
#define k_drawPlanColor     RGB(234,234,234)
#define k_photoBtnColor     RGBA(51,51,51,0.6)
#define k_roundColor        RGBOF(0xe6e6e6)
#define k_btnBackColor      RGB(224,224,224)

/**
 分割线的颜色
 */
#define KLineColor [UIColor colorWithRed:243.0/255.0 green:243.0/255.0 blue:243.0/255.0 alpha:1.0]

#define kRGBAColor(r,g,b,a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

#define kRGBColor(r,g,b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1.0]

#define ColorHexString(colorString) [UIColor colorWithHexString:colorString]
// 主题颜色
#define kThemeColor [WDZConfigTool getThemeColor]
// 主题图片
#define kThemeImage(name) [[UIImage imageNamed:name] imageWithTintColor:kThemeColor]
// 主题背景颜色
#define kThemeBackgroundColor [UIColor colorWithRed:244.0/255.0 green:244.0/255.0 blue:244.0/255.0 alpha:1.0]
// 基础边框色
#define kBasicBorderColor [UIColor colorWithRed:230.0/255.0 green:230.0/255.0 blue:230.0/255.0 alpha:1.0].CGColor
// 51灰
#define kGray_51 [UIColor colorWithRed:51.0/255.0 green:51.0/255.0 blue:51.0/255.0 alpha:1.0]
// 68灰
#define kGray_68 [UIColor colorWithRed:68.0/255.0 green:68.0/255.0 blue:68.0/255.0 alpha:1.0]
// 85灰
#define kGray_85 [UIColor colorWithRed:85.0/255.0 green:85.0/255.0 blue:85.0/255.0 alpha:1.0]
// 105灰
#define kGray_105 [UIColor colorWithRed:105.0/255.0 green:105.0/255.0 blue:105.0/255.0 alpha:1.0]
// 150灰
#define kGray_150 [UIColor colorWithRed:150.0/255.0 green:150.0/255.0 blue:150.0/255.0 alpha:1.0]
// 182灰
#define kGray_182 [UIColor colorWithRed:182.0/255.0 green:182.0/255.0 blue:182.0/255.0 alpha:1.0]
// 230灰
#define kGray_230 [UIColor colorWithRed:230.0/255.0 green:230.0/255.0 blue:230.0/255.0 alpha:1.0]
// 标记值红色
#define kBadgeColor [UIColor colorWithRed:255.0/255.0 green:59.0/255.0 blue:48.0/255.0 alpha:1.0]
// 管理界面的主题颜色
#define kManageRedColor [UIColor colorWithRed:255.0/255.0 green:85.0/255.0 blue:52.0/255.0 alpha:1.0]
#define kManageGreenColor [UIColor colorWithRed:147.0/255.0 green:192.0/255.0 blue:53.0/255.0 alpha:1.0]
#define kManageOrangeColor [UIColor colorWithRed:255.0/255.0 green:153.0/255.0 blue:0.0/255.0 alpha:1.0]
#define kManageBlueColor [UIColor colorWithRed:1.0/255.0 green:146.0/255.0 blue:255.0/255.0 alpha:1.0]
// 深红色
#define kVermillonColor [UIColor colorWithRed:239.0/255.0 green:55.0/255.0 blue:45.0/255.0 alpha:1.0]
// 草绿色
#define kLawngreenColor [UIColor colorWithRed:129.0/255.0 green:185.0/255.0 blue:29.0/255.0 alpha:1.0]
// 天蓝色
#define kSkyBlueColor [UIColor colorWithRed:4.0/255.0 green:186.0/255.0 blue:254.0/255.0 alpha:1.0]

#define kSencesBorderColor [UIColor colorWithRed:220.0/255.0 green:220.0/255.0 blue:220.0/255.0 alpha:1.0].CGColor

// 掌讯界面的主题颜色
// 报警
#define kMessageAlertColor [UIColor colorWithRed:255.0/255.0 green:77.0/255.0 blue:39.0/255.0 alpha:1.0]
// 问题
#define kMessageProblemColor [UIColor colorWithRed:253.0/255.0 green:115.0/255.0 blue:61.0/255.0 alpha:1.0]
// 点检
#define kMessageCheckColor [UIColor colorWithRed:138.0/255.0 green:204.0/255.0 blue:71.0/255.0 alpha:1.0]
// 交接本
#define kMessageHandoverColor [UIColor colorWithRed:255.0/255.0 green:204.0/255.0 blue:71.0/255.0 alpha:1.0]

//抓拍任务
#define kMessageCaptureColor [UIColor colorWithRed:255.0/255.0 green:153.0/255.0 blue:0/255.0 alpha:1.0]
//掌讯
#define kMessagetrainingColor [UIColor colorWithRed:255.0/255.0 green:153.0/255.0 blue:0/255.0 alpha:1.0]
//顾客意见
#define kMessageFeedbackColor [UIColor colorWithRed:71.0/255.0 green:204.0/255.0 blue:109/255.0 alpha:1.0]
// 考勤申请
#define kMessageAttendanceApplyColor [UIColor colorWithRed:138.0/255.0 green:204.0/255.0 blue:71/255.0 alpha:1.0]

// 摇一摇
#define kMessageShakeColor [UIColor colorWithRed:255.0/255.0 green:170.0/255.0 blue:0.0/255.0 alpha:1.0]
// 系统
#define kMessageSystemColor [UIColor colorWithRed:255.0/255.0 green:153.0/255.0 blue:0.0/255.0 alpha:1.0]
// 报表
#define kMessageReportColor [UIColor colorWithRed:138.0/255.0 green:204.0/255.0 blue:71.0/255.0 alpha:1.0]

#define kGAP 10
#define kAvatar_Size 40

//表情的判断和转码
#define MULITTHREEBYTEUTF16TOUNICODE(x,y) (((((x ^ 0xD800) << 2) | ((y ^ 0xDC00) >> 8)) << 8) | ((y ^ 0xDC00) & 0xFF)) + 0x10000

//所有的webView
//仪表盘
#define WDZChartreportUrl(baseUrl,tokenStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/checkreport/index.html?token=%@&showBBtn=1&version=%@&lang=%@", baseUrl, tokenStr,version,language]]
//客流统计
#define WDZCustomerWebViewUrl(baseUrl,tokenStr,language,depIdStr,depname,version) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/custom/index.html?token=%@&lang=%@&depId=%@&depName=%@&version=%@#/", baseUrl,tokenStr,language,depIdStr, depname,version]]
//点检配置
#define WDZTaskConfigWebViewUrl(baseUrl,token,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/checkconfig/index.html?token=%@&lang=%@#!/", baseUrl,token,language]]

//积分 总页面
#define WDZIntergalWebViewUrl(baseUrl,token,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/score/index.html?token=%@&lang=%@&version=%@", baseUrl,token,language,[WDZUserInfoModel shareUserInfoMode].owner.version]]
//积分  有积分申请需要审核，跳转到积分审核界面
#define WDZIntergalNeedToExamineWebViewUrl(baseUrl,token,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/score/index.html?token=%@&lang=%@&version=%@&source=1#/approve", baseUrl,token,language,[WDZUserInfoModel shareUserInfoMode].owner.version]]
//积分   积分申请通过，跳转到积分历史
#define WDZIntergalApplySuccessWebViewUrl(baseUrl,token,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/score/index.html?token=%@&lang=%@&version=%@&source=1#/myapply/1", baseUrl,token,language,[WDZUserInfoModel shareUserInfoMode].owner.version]]
//积分   积分申请不通过，跳转到积分历史
#define WDZIntergalApplyFailWebViewUrl(baseUrl,token,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/score/index.html?token=%@&lang=%@&version=%@&source=1#/myapply/2", baseUrl,token,language,[WDZUserInfoModel shareUserInfoMode].owner.version]]

//热点分析
#define WDZHotsPotWebViewUrl(baseUrl,tokenStr,version,language,depId,depName) [NSURL URLWithString:[[NSString stringWithFormat:@"%@webview/hotspot/index.html?token=%@&showBBtn=1&version=%@&lang=%@&depId=%@&depName=%@", baseUrl, tokenStr,version,language,depId,depName] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]]
#define WDZHotsPot2WebViewUrl(baseUrl,tokenStr,version,language) [NSURL URLWithString:[[NSString stringWithFormat:@"%@webview/hotspot/index.html?token=%@&showBBtn=1&version=%@&lang=%@", baseUrl, tokenStr,version,language] stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding]]
//意见反馈
#define WDZWebSiteWebViewUrl(token,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@mobile/feedback.html?token=%@&version=%@&lang=%@",WDZStore_BaseUrl,token,version,language]]
//万店掌
#define WDZWanDianZhangWebViewUrl [NSURL URLWithString:@"http://www.wandianzhang.com/mobile/qa.html"]

/**
 //设备注册
 //有店铺的设备注册
 */
#define WDZRegisterWebViewUrlWithShopID(baseUrl,tokenStr,shopID,nameStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/devregist/index.html?token=%@&id=%@&name=%@&source=1&isWKWebView=1&showBBtn=1&version=%@&lang=%@#!/step2", baseUrl,tokenStr,shopID,nameStr,version,language]]
/**
 没有店铺的设备注册
 */
#define WDZRegisterWebViewUrlWithoutShopID(baseUrl,tokenStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/devregist/index.html?token=%@&showBBtn=1&version=%@&lang=%@",baseUrl, tokenStr,version,language]]

/**
 再次注册
 */
#define WDZRegisterAgainWebViewUrl(baseurl,userID,version,language) [NSString stringWithFormat:@"%@webview/register/index.html?app=1&isWKWebView=1&signUserId=%@&version=%@&lang=%@#!/join", baseurl,userID,version,language]

/**
 projectArchive
 */
#define WDZProjectArchiveWebViewUrlWithShopID(baseUrl,tokenStr,shopID,nameStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/projectfiles/index.html?token=%@&id=%@&name=%@&source=1&showBBtn=1&version=%@&lang=%@#!/step2", baseUrl,tokenStr,shopID,nameStr,version,language]]
#define WDZProjectArchiveWebViewUrlWithOutShopID(baseUrl,tokenStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/projectfiles/index.html?token=%@&showBBtn=1&version=%@&lang=%@",baseUrl,tokenStr,version,language]]


/**
 企业注册
 */
#define WDZRegisterWebViewUrl(baseUrl,version,language) [NSString stringWithFormat:@"%@webview/register/index.html?app=1&isWKWebView=1&showBBtn=1&version=%@&lang=%@", baseUrl,version,language]

/**
 顾客意见通用URL
 */
#define WDZCustomeropinionUrl(baseUrl,tokenStr,version,language) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/customeropinion/list.html?token=%@&version=%@&lang=%@",baseUrl, tokenStr,version,language]]
/**
 通过消息列表点进来的URL
 */
#define WDZCustomeropinionUrlByMessage(baseUrl,tokenStr,language,version,feedBackId) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/customeropinion/list.html?token=%@&lang=%@&source=1&version=%@#/detail/%@",baseUrl,tokenStr,language,version,feedBackId]]
/**
 人脸报表
 */
#define WDZFaceRocoUrl(baseUrl,tokenStr,language,version) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/facereport/index.html?token=%@&lang=%@&version=%@",baseUrl,tokenStr,language,version]]

/**
 CRM
 */
#define WDZCRMURL(baseUrl,tokenStr,language,version) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/crm/index.html?token=%@&lang=%@&version=%@",baseUrl,tokenStr,language,version]]

#define WDZClockon(tokenStr,language,version) [NSURL URLWithString:[NSString stringWithFormat:@"http://172.30.18.169/webview/clockon/index.html?token=%@&lang=%@&version=%@",tokenStr,language,version]]

/**
 控制台
 */
#define WDZConsoleUrl(baseUrl,tokenStr,Language,version,isRoot) [NSURL URLWithString:[NSString stringWithFormat:@"%@webview/console/index.html?token=%@&lang=%@&version=%@&isRoot=%d",baseUrl,tokenStr,Language,version,isRoot]]

#define OKString WDZLocalizedString(@"queding", nil)
#define CancleString WDZLocalizedString(@"quxiao", nil)

//判断是否是ipad
#define kisPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
#define IS_IPHONE_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !kisPad : NO)
//判断iPHoneXr
#define IS_IPHONE_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !kisPad : NO)
//判断iPhoneXs
#define IS_IPHONE_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !kisPad : NO)
//判断iPhoneXs Max
#define IS_IPHONE_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !kisPad : NO)

//iPhoneX系列
#define Height_StatusBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 44.0 : 20.0)
#define Height_NavBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 88.0 : 64.0)
#define Height_TabBar ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES) ? 83.0 : 49.0)

#define KIsFullPhone ((IS_IPHONE_X==YES || IS_IPHONE_Xr ==YES || IS_IPHONE_Xs== YES || IS_IPHONE_Xs_Max== YES)?YES:NO)

#define KPhonexSafeBottomHeight (KIsFullPhone?30:0);

/**
 获取可删除文件路径
 */
#define K_getTempCacheFilePath(fileName) [WDZCacheManager getCanDeleteFilePathWithFileName:fileName]

///////////////////daniel///////////////////////

// 拼接可删除文件路径
#define WDZGlobalDeletableFilePath(fileName) [[WDZCacheManager getDeletableDirectory] stringByAppendingPathComponent:fileName]
// 拼接不可删除文件路径
#define WDZGlobalUndeletableFilePath(fileName) [[WDZCacheManager getUndeletableDirectory] stringByAppendingPathComponent:fileName]
// 获取app上传文件的文件夹
#define WDZAppUploadFilePath(fileName) [[WDZCacheManager getAppUploadDirectory] stringByAppendingPathComponent:fileName]

// 获取app上传文件的文件夹
#define WDZAppUploadFolderPath [WDZCacheManager getAppUploadDirectory]

//////////////////daniel///////////////////////

#endif

