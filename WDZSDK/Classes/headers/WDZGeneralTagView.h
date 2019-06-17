//
//  WDZGeneralTagView.h
//  AFNetworking
//
//  Created by dingkan on 2019/5/8.
//

#import <UIKit/UIKit.h>
#import "WDZGeneralTagConfigManager.h"
#import "WDZGeneralTagModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface WDZGeneralTagView : UIView

/**
 初始化标签view
 datas:  数据模型
 config:  配置文件
 className： 自定义view的class
 */
+(instancetype)createGeneralTagViewWithModelDatas:(NSArray<WDZGeneralTagModel *> *)datas config:(WDZGeneralTagConfigManager *)config registerClass:(NSString *)className;

/**
 初始化标签view
 datas:  数据模型
 config:  配置文件
 */
+(instancetype)createGeneralTagViewWithModelDatas:(NSArray<WDZGeneralTagModel *> *)datas config:(WDZGeneralTagConfigManager *)config;


/**
 刷新指定数据
 */
-(void)refreshSpecifiedModel:(WDZGeneralTagModel *)model;


/**
 刷新所有数据
 */
-(void)refreshAllDatas:(NSArray<WDZGeneralTagModel *> *)datas;


-(void)moveToCurrentTagWithIndex:(NSInteger)index;

@end

NS_ASSUME_NONNULL_END
