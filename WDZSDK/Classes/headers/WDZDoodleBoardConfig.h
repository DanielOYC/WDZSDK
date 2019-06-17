//
//  WDZDoodleBoardConfig.h
//  AFNetworking
//
//  Created by dingkan on 2019/3/6.
//

#import <Foundation/Foundation.h>
#import "WDZDoodleBoardBottomHandleModel.h"

typedef NS_OPTIONS(NSUInteger,WDZDoodleBoardHandleType) {
    WDZDoodleBoardHandleEidt                                                         = 1 << 0,//编辑
    WDZDoodleBoardHandleSignature                                                    = 1 << 1,//会签
    WDZDoodleBoardHandleTailoring                                                  = 1 << 2,//裁剪
    WDZDoodleBoardHandleCode                                                       = 1 << 3,//马塞克
};


@protocol WDZDoodleBoardViewDelegate <NSObject>

/**
 编辑
 */
-(void)WDZDoodleBoardViewDidClickEdit;

/**
 会签
 */
-(void)WDZDoodleBoardViewDidClickSignature;

/**
 马塞克
 */
-(void)WDZDoodleBoardViewDidClickCode;

/**
 裁剪
 */
-(void)WDZDoodleBoardViewDidClickTailoring;


/**
 点击颜色
 */
-(void)WDZDoodleBoardViewDidChooseColor:(NSString *)color;

/**
 撤销
 */
-(void)WDZDoodleBoardViewDidClickUndo:(WDZDoodleBoardBottomHandleType)type;

@end



@interface WDZDoodleBoardConfig : NSObject

/**
 底部事件
 */
@property (nonatomic, assign) WDZDoodleBoardHandleType type;

@property (nonatomic, weak) id<WDZDoodleBoardViewDelegate> delegate;

+(instancetype)defaultConfigWithType:(WDZDoodleBoardHandleType)type delegate:(id<WDZDoodleBoardViewDelegate>)delegate;

/**
 获取底部操作栏数据
 */
-(NSMutableArray<WDZDoodleBoardBottomHandleModel *> *)getBottomHandleDatas;

/**
 获取顶部操作子项数据
 */
-(NSMutableArray<WDZDoodleBoardBottomHandleModel *> *)getBottomHandleSubDatasWithType:(WDZDoodleBoardBottomHandleType)type;

@end


