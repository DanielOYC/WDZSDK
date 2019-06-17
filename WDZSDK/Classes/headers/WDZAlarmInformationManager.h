//
//  WDZAlarmInformationManager.h
//  WDZAlarmInterfaceMoudle
//
//  Created by 李轩霖 on 2019/3/5.
//

#import <Foundation/Foundation.h>
#import "WDZVideoModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^WDZAlarmManagerBlock)(id resultObject);

@protocol WDZAlarmManagerDelegate <NSObject>

-(void)WDZAlarmManagerPushVC:(NSString *)vcName dict:(NSDictionary *)dict result:(WDZAlarmManagerBlock)block;

@end

@interface WDZAlarmInformationManager : NSObject

/**
 创建+引用
 */
+ (instancetype)shareManager;

/**
 销毁
 */
+(void)attempDealloc;

@property (nonatomic , weak)id<WDZAlarmManagerDelegate> delegate;

@property (nonatomic , weak)UINavigationController *naVc;

//-(void)pushWDZMPlayViewControllerWithVideo:(WDZVideoModel *)video videoList:(NSMutableArray *)videoList shop:(WDZShopModel *)shopModel createTime:(NSString *)createTimeStr;

-(void)pushVC:(NSString *)vcName dict:(NSDictionary *)dict;

-(void)pushVC:(NSString *)vcName dict:(NSDictionary *)dict result:(WDZAlarmManagerBlock)block;

//-(void)pushWDZCreateIssueViewControllerWithattachType:(NSInteger)attachType image:(UIImage *)image attachArr:(NSArray *)attachArr issueType:(NSInteger)issueType issueName:(NSString *)issueName selectedShop:(WDZShopModel *)selectedShop issueRemark:(NSString *)issueRemark alarmID:(NSString *)alarmID addObserver:(id)observer selector:(SEL)aSelector;

@end

NS_ASSUME_NONNULL_END
