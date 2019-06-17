//
//  NSError+Http.h
//  WDZStore
//
//  Created by 郑来贤 on 15/6/3.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  用户请求返回后，先判断这个返回这是否ok，然后再更具具体的模块分别判断，比如user,video
 */


@interface NSError (Http)

#pragma mark  HttpRequest and ErrMsg

typedef NS_ENUM(NSInteger, HttpErrType) {
    
    kHttpNotKnownErr      = -1000,
    kHttpNoErr            = 0,
    kHttpException        = 1000,
    kHttpTimeOut                ,
    kHttpConnectionErr,
    kHttpParamtersErr,
    kHttpFileFormatErr,
    KHttpUserTokenExpire,
    kHttpTokenInvaild,
    kHttpUserExpired,
    kHttpUserNoPermission,
    kHttpBackToLogin,//请求后发现异常，需要返回到登录页面  涉及  token 失效 用户密码已修改等
};

+ (NSError *)judgeHttpErrWithString:(NSString *)judgeInfo;

+(void)judeHttpErrorWithString:(NSString *)judgeInfo;

@end
