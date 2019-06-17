//
//  NSError+User.h
//  WDZStore
//
//  Created by 郑来贤 on 15/6/2.
//  Copyright (c) 2015年 zhenglaixian. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  这个主要是用于反馈和用户有关的一下错误，和错误码
 */


#pragma mark  UserErrCode and ErrMsg

typedef NS_ENUM(NSInteger, UserErrType) {

    KUserNotKnownErr      = -100,
    kUserNoErr            = 0,
    kUserNameIsNuLL       = 100,
    kUserPswIsNuLL        = 101,
    kUserLoginFail        = 102, //psw err or account err
    kUserEmailIsNuLL      = 103, //email login
    kUserLoginByOther     ,
    kUserEmailHasRegister ,
    kUserEmailFormatErr   ,
    kUserNameHasRegister  ,
    kUserPhoneHasRegister ,
    kUserPhoneFormatErr   ,
    kUserVerificationCodeErr,
    kUserVerificationCodeExpire,
    kUserGetVerificationCodeErr,
    kUserEmailNotFound,
    kUserOriPswErr,
    kUserForzen// 账户冻结
};

@interface NSError (User)

+ (NSError *)judgeUserErrWithString:(NSString *)judgeInfo;

@end
