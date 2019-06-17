//
//  WDZDoodleBoardColorModel.h
//  AFNetworking
//
//  Created by dingkan on 2019/2/22.
//

#import <Foundation/Foundation.h>

typedef enum : NSUInteger {
    WDZDoodleBoardBottomHandleColor,//颜色
    WDZDoodleBoardBottomHandleCancel,//撤销
    WDZDoodleBoardBottomHandleCode,//马塞克
    WDZDoodleBoardBottomHandleEidt,//编辑
    WDZDoodleBoardBottomHandleSignature,//会签
    WDZDoodleBoardBottomHandleTailoring//裁剪
} WDZDoodleBoardBottomHandleType;

@interface WDZDoodleBoardBottomHandleModel : NSObject

@property (nonatomic, assign) WDZDoodleBoardBottomHandleType type;

@property (nonatomic, strong) NSString *unSelectIconName;

@property (nonatomic, strong) NSString *selectIconNAme;

/**
 颜色  色值
 */
@property (nonatomic, strong) NSString * colorStr;

/**
 事件
 */
@property (nonatomic, strong) void(^actionBlock)(void);

+(instancetype)modelWithTpye:(WDZDoodleBoardBottomHandleType)type selectIconName:(NSString *)selectIconName normalIconName:(NSString *)normalIconName actionBlock:(void(^)())actionBlock;

@end

