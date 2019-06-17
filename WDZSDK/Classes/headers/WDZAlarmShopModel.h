//
//  WDZAlarmShopModel.h
//  WDZForAppStore
//
//  Created by  ovopark_iOS1 on 2018/3/20.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WDZAlarmShopModel : NSObject
//depId = 9617,
@property (nonatomic , strong)NSString *depId;
//depStatus = 1,
@property (nonatomic , strong)NSString *depStatus;
//depName = "A Suzhou -20.11录像下载测试，不要做录像回放！！！",
@property (nonatomic , strong)NSString *depName;
//pinyin = "a suzhou -20.11luxiangxiazaiceshi，buyaozuoluxianghuifang！！！",
@property (nonatomic , strong)NSString *pinyin;
//pyName = "a suzhou -20.11luxiangxiazaiceshi，buyaozuoluxianghuifang！！！",
@property (nonatomic , strong)NSString *pyName;
@end

@interface WDZAlarmShopSettingModel : NSObject

@property (nonatomic , strong)NSArray<WDZAlarmShopModel *> *data;

@property (nonatomic , strong)NSString *openNum;

@property (nonatomic , strong)NSString *closeNum;

@end
