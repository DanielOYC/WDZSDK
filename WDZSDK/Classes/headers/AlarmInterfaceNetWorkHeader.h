//
//  AlarmInterfaceNetWorkHeader.h
//  WDZAlarmInterfaceMoudle
//
//  Created by 李轩霖 on 2019/2/28.
//

#ifndef AlarmInterfaceNetWorkHeader_h
#define AlarmInterfaceNetWorkHeader_h




/**
 获取企业下的所有门店 以及状态
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_getAllDepAndStatusByGroupId @"/service/getAllDepAndStatusByGroupId.action"

/**
 全部开启
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_configAllDevice @"service/configAllDevice.action"

/**
 单独开启/关闭门店
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_openOrOffDep @"service/openOrOffDep.action"

#define WDZ_ALARM_SERVICE_openOrOffOneDevice @"service/openOrOffOneDevice.action"

/**
 根据门店ID 获取所有设备 以及状态
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_getAllDeviceStatusByDepId @"service/getAllDeviceStatusByDepId.action"

/**
 4.提交设置告警
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_setConfigInfo @"service/setConfigInfo.action"

/**
 6.根据门店ID 获取所有设备列表
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_getAllDeviceStatusByDepIdNew @"service/getAllDeviceStatusByDepIdNew.action"

/**
 获取保险公司电话
 
 @return <#return value description#>
 */
#define WDZ_ALARM_SERVICE_getInsurancePhone @"service/getInsurancePhone.action"




#endif /* AlarmInterfaceNetWorkHeader_h */
