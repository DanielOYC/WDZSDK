//
//  WDZUserService.h
//  WDZForAppStore
//
//  Created by 王振海 on 2018/10/13.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BaseModelHeader.h"

typedef void(^uploadUserPhotoBlock)(BOOL isSuccess,NSError * _Nullable error);
typedef void(^setUserInfoBlock)(BOOL isSuccess,NSError *error);
typedef void(^setUserPasswordBlock)(BOOL isSuccess,NSError *error);
typedef void(^checkTokenBlock)(BOOL isSuccess ,BOOL isRight,NSError *error);
typedef void(^getUserFollowsBlock)(BOOL isSuccess,WDZUserModelList *model,NSError *error);
typedef void(^getUserFansBlock)(BOOL isSuccess,WDZUserModelList *model,NSError *error);
typedef void(^addFollowsBlock)(BOOL isSuccess,NSError *error);
typedef void(^deleteFollowsBlock)(BOOL isSuccess,NSError *error);
typedef void(^setUploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);
typedef void(^getPhoneVerificationCodeBlock)(BOOL isSuccess ,NSError *error);
typedef void(^getUnfinishCountBlock)(BOOL isSuccess ,NSString *total,NSError *error,WDZUserModel *user);
typedef void(^forExperienceGetPhoneVerificationCodeBlock)(BOOL isSuccess, BOOL everSend ,NSError *error);
typedef void(^genericDemoToken)(BOOL isSuccess, WDZUserModel *userInfoModel ,NSError *error);
typedef void(^ValidateCodeBlock)(BOOL isSuccess, NSString *imageUrlString,NSError *error);
typedef void(^WDZValidateValCodeBlock)(BOOL isSuccess,NSError *error);
typedef void(^getRecentContactorsBlock)(BOOL isSuccess,NSDictionary *result,NSError *error);

NS_ASSUME_NONNULL_BEGIN

@interface WDZUserService : NSObject

//保存数据
+(BOOL)saveUser:(WDZUserModel *)userModel;
/**通过归档的方式获取设置的值*/
+ (WDZUserModel *)getUser;
//删除用户
+ (void)deleteLocalUser;
/**
 保存权限数组
 */
+ (void)savePrivileges:(NSArray *)privileges;

+ (NSArray *)getPrivileges;
/**
 是否拥有名为XXX的权限
 */
+ (BOOL)havePrivilegesWithName:(NSString *)privilegeName withHUDView:(UIView *)HUDView;
+ (BOOL)havePrivilegesWithName:(NSString *)privilegeName;

/**用户登陆接口，*/
+ (void)userLoginWithAccount:(NSString *)_account andPassword:(NSString *)_password isPhone:(BOOL)phoneV andCompletedBlock:(void(^)(BOOL isSuccess,WDZUserModel *userInfoModel,NSString *signUserId,NSString *checkStatus,NSError *error))completedBlock;
//获取用户的企业权限
+ (void)RequestEnterpriseConfigCompletion:(void (^)(BOOL isSuccessed,WDZUserConfigModel *configModel))completion;
//获取用户信息
+ (void)getMyInfoCompletion:(void (^)(BOOL isSuccessed,NSString *result,WDZUserInfoModel *info))completion;

// 获取手机验证码(免注册登录)
+ (void)ForExperienceToGetPhoneVerificatinCode:(NSString *)phone andBlock:(void(^)(BOOL isSuccess, BOOL everSend ,NSError *error))compeletedBlock;
//
+(void)ForExperienceToGetPhoneVerificatinCode:(NSString *)phone andPageCode:(NSString *)pageCode andImageCode:(NSString *)imageCode andBlock:(void(^)(BOOL isSuccess, BOOL everSend ,NSError *error))compeletedBlock;

// 验证手机验证码登录
+ (void)validateValCodeWithPhone:(NSString *)phone andVerificationCode:(NSString *)verificationCode andCompletedBlock:(void(^)(BOOL isSuccess,NSError *error))completedBlock;

// 手机验证返回的用户信息
+ (void)genericDemoTokenWithUserType:(NSInteger )type  andCompletedBlock:(void(^)(BOOL isSuccess, WDZUserModel *userInfoModel ,NSError *error))completedBlock;
/**用户登出接口*/
+ (void)userLogout;

/**
 上传头像接口，
 */
+ (void)uploadUserThumbWithImageData:(NSData *)imageData andCompletedBlock:(uploadUserPhotoBlock)completedBlock andUploadProgressBlock:(setUploadProgressBlock)uploadProgressBlock;

/**
 设置用户信息
 */
+ (void)setUserInfoWithUserNickName:(NSString *)nickName andUserSignature:(NSString *)userSignature andCompletedBlock:(setUserInfoBlock)completedBlock;

/**
 设置用户密码
 */
+ (void)setUserOriginalPassWord:(NSString *)originalUserPassword andNewPassWord:(NSString *)newUserPassword andCompletedBlock:(setUserPasswordBlock)completedBlock;

//获取未完成的个数
+ (void)getUnfinishCount:(getUnfinishCountBlock)compeletedBlock;


//userlist
+ (void)getDealUsersOfEnterpriseWithBlock:(getDealUserBlock)compeletedBlock;

+ (NSArray *)searchByKeyWordForUserList:(WDZUserModelList *)list keyWord:(NSString *)keyWord;

//获取常用联系人
+ (void)getRecentContactorsWithToken:(NSString *)tokenString withBlock:(getRecentContactorsBlock)block;

/**
 通过一个数组创建一个可以直接丢给通讯录展示的数组
 */
+ (NSMutableArray *)getContactlistWithOriginal:(NSMutableArray *)original;

@end

NS_ASSUME_NONNULL_END
