//
//  WDZPeopleModel.h
//  WDZStore
//
//  Created by keda on 14-10-27.
//  Copyright (c) 2014年 zhenglaixian. All rights reserved.
//

#pragma mark  -- noti

UIKIT_EXTERN NSString *const WDZShopDidRequestShopManagersSuccessNoti;
UIKIT_EXTERN NSString *const WDZShopDidRequestShopManagersFailNoti;

UIKIT_EXTERN NSString *const WDZShopDidSelectdShopSuccessNoti;

#pragma mark ---------------------------------
@class WDZShopModel,WDZShopListModel,WDZWeatherInfoModel;
typedef void(^getPeopleCountBlock)(BOOL isSuccess ,WDZShopModel *model, NSError *error );
typedef void(^getShopDetailBlock)(BOOL isSuccess ,WDZShopModel *model, NSError *error );
typedef void(^getPresetsByStoreBlock)(BOOL isSuccess ,WDZShopListModel *modelList, NSError *error );
typedef void(^getShopsBlock)(BOOL isSuccess ,WDZShopListModel *modelList, NSError *error );
typedef void(^addSubscibeBlock)(BOOL isSuccess , NSError *error );
typedef void(^cancleSubscibeBlock)(BOOL isSuccess , NSError *error );
typedef void(^editShopInfoBlock)(BOOL isSuccess , NSError *error );

typedef void(^getEnterpriseTagsBlock)(BOOL isSuccess,NSArray *tags , NSError *error);

typedef void(^uploadShotPicBlock)(BOOL isSuccess, NSError *error);
typedef void(^setUploadProgressBlock)(NSUInteger bytesWritten, long long totalBytesWritten, long long totalBytesExpectedToWrite);

typedef void(^getShopManagersBlock)(BOOL isSuccess,WDZShopModel *shop, NSError *error);



#import "BaseModelHeader.h"
#import "DBResultSetHandleDelegate.h"


@interface WDZShopModel : WDZBaseModel <NSCoding,DBResultSetHandleDelegate>

/**
 门店是否过期
 */
@property (nonatomic, strong) NSString *servicePermission;

//掌讯首页门店的类型
@property (nonatomic , retain)NSString *tagType;

@property (assign , nonatomic) BOOL selected;
//归属地
@property (strong , nonatomic) NSString *location;

@property (nonatomic , strong) NSString *deviceCount;//门店下设备个数

// 门店的ID
@property (assign , nonatomic) int isShop;

@property (strong , nonatomic) NSString *ID;

@property (strong , nonatomic) NSString *customersOfDay;

@property (strong , nonatomic) NSString *IncomeOfDay;

@property (strong , nonatomic) NSString *inRate;

@property (strong , nonatomic) NSString *keDanJia;

@property (strong , nonatomic) NSString *packageRate;

@property (strong , nonatomic) NSString *tramsferRate;

@property (strong , nonatomic) NSString *shopCount;// 店数

@property (strong , nonatomic) NSString *name;// 店名

@property (strong , nonatomic) NSArray  *customersOfWeeks;

@property (strong , nonatomic) NSArray  *arrayForDetail;

@property (strong , nonatomic) NSString *totalForDetail;

@property (strong , nonatomic) NSArray  *pointTasks;

@property (strong , nonatomic) NSArray *devices;

@property (strong , nonatomic) NSString *weatherImageType;

@property (strong , nonatomic) NSString *weatherImage;

@property (strong , nonatomic) NSString *temperature;

@property (assign , nonatomic) BOOL getShopDetailSuccess;

@property (strong , nonatomic) NSString *shopAddress;

@property (strong , nonatomic) NSString *shoperTel;

@property (assign , nonatomic) BOOL  isSelected;
/**店员人数*/
@property (nonatomic, copy) NSString *salespersonNum;
/**设备数*/
@property (nonatomic , retain) NSString *devCount;

//@property (strong , nonatomic) AMapPOI *mapPOI;
// 门店地址经度
@property (assign, nonatomic) double longitude;
// 门店地址维度
@property (assign, nonatomic) double latitude;


//门店缩略图
@property (nonatomic , retain)NSString *thumbnailUrl;
/**
 *  是否收藏门店
 */
@property (assign , nonatomic) BOOL isFavored;

/**
 *  得分
 */
@property (strong , nonatomic) NSString  *scores;

@property (strong , nonatomic) NSArray   *managers;
/**
 拼音首字符
 */
@property (nonatomic, strong) NSString *pyName;

/**
 高度
 */
@property (nonatomic, assign) CGFloat cellHeight;

/**
 数据库使用属性
 */
/**
 是否没有设备
 */
@property (nonatomic, assign) BOOL hasNoDevice;
/**
 门店名称 拼音
 */
@property (nonatomic, copy) NSString *shopNamePY;
/**
 上次更新时间
 */
@property (nonatomic, assign) long long lastupdate;
/**
 组织架构门店选择选择
 */
@property (nonatomic, assign) BOOL organizationSelected;


/**
 本月客流
 */
@property (nonatomic, copy) NSString *monthFlow;
/**
 本月销售额
 */
@property (nonatomic, copy) NSString *monthSales;
/**
 店长名字
 */
@property (nonatomic, copy) NSString *contactor;

/**
 是否是门店管理员
 */
@property (nonatomic , retain)NSString *isShopManager;
/**
 带宽
 */
@property (nonatomic , retain)NSString *bandWidth;
/**
 组织架构
 */
@property (nonatomic , retain)NSString *organizeName;
/**
 组织架构ID
 */
@property (nonatomic , retain)NSString *organizeId;
/**
 企业ID
 */
@property (nonatomic , retain)NSString *group_id;
/**
 门店ID
 */
@property (nonatomic , retain)NSString *shopId;
/**
 视频设备限制数
 */
@property (nonatomic , retain)NSString *ipcCountLimit;
/**
 上班时间
 */
@property (nonatomic , retain)NSString *startWorkTime;
/**
 下班时间
 */
@property (nonatomic , retain)NSString *endWorkTime;
/**
 门店面积
 */
@property (nonatomic , retain)NSString *storeArea;

//解析门店数据
- (void)parseModelWithDic:(NSDictionary *)dic;

@end

@interface WDZShopListModel : WDZBaseModel



@end

@interface WDZWeatherInfoModel : WDZBaseModel

@property (strong , nonatomic) NSString *ID;
@property (strong , nonatomic) NSString *temperature;

@end



