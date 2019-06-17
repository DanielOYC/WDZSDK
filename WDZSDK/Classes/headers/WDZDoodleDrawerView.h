//
//  WDZDoodleDrawerView.h
//  WDZForAppStore
//
//  Created by dingkan on 2018/9/4.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WDZDoodleDrawerPaintPath;

typedef enum : NSUInteger {
    WDZDoodleDrawerViewNormal,
    WDZDoodleDrawerViewSex,//马塞克
} WDZDoodleDrawerViewType;

@interface WDZDoodleDrawerView : UIImageView

@property (nonatomic, assign) WDZDoodleDrawerViewType type;

@property (nonatomic, assign) BOOL canDrawer;

@property (nonatomic, strong) UIColor *lineColor;

@property (nonatomic, assign) CGFloat lineWidth;

/**
 *  撤销的线条数组
 */
@property (nonatomic, strong)NSMutableArray * canceledLines;
/**
 *  线条数组
 */
@property (nonatomic, strong)NSMutableArray * lines;

/**
 马塞克状态
 */
@property (nonatomic, assign) BOOL canUndoSex;

/**
 *  清屏
 */
- (void)clearScreen;

/**
 *  撤销
 */
- (void)undo;

/**
 *  恢复
 */
- (void)redo;

/**
    获取编辑图片
 */
-(UIImage *)getEidtImg;

/**
 是否编辑过
 */
-(BOOL)isEdit;
/**
 马塞克清除
 */
-(void)clearSex;
-(void)refreshSexImg;

-(void)hiddenLayer;
-(void)showLayer;

-(WDZDoodleDrawerPaintPath *)getDrawPath;

/**
 刷新位置
 */
-(void)refreshPathWithOldFrame:(CGRect)oldFrame newFrame:(CGRect)newFrame;

@end
