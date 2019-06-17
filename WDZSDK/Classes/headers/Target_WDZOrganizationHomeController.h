//
//  Target_WDZOrganizationHomeController.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/28.
//

#import "Target_BaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface Target_WDZOrganizationHomeController : Target_BaseModel

- (UIViewController *)Action_organizationHomeController:(NSDictionary *)params;

- (UIViewController *)Action_fetchViewController:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
