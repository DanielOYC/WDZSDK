//
//  WDZPopOverMenu.h
//  WDZPopOverMenu
//
//  Created by liufengting on 16/4/5.
//  Copyright © 2016年 liufengting. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  WDZPopOverMenuDoneBlock
 *
 *  @param index SlectedIndex
 */
typedef void (^WDZPopOverMenuDoneBlock)(NSInteger selectedIndex);
/**
 *  WDZPopOverMenuDismissBlock
 */
typedef void (^WDZPopOverMenuDismissBlock)();

/**
 *  WDZPopOverMenuCell
 */
@interface WDZPopOverMenuCell : UITableViewCell

@end
/**
 *  WDZPopOverMenuView
 */
@interface WDZPopOverMenuView : UIControl

@end

/**---------------------------------------------------------------------
 *  -----------------------WDZPopOverMenu-----------------------
 */
@interface WDZPopOverMenu : NSObject

/**
 *  setTintColor
 *
 *  @param tintColor tintColor
 */
+(void)setTintColor:(UIColor *)tintColor;

/**
 *  show method with sender without images
 *
 *  @param sender       sender
 *  @param menuArray    menuArray
 *  @param doneBlock    WDZPopOverMenuDoneBlock
 *  @param dismissBlock WDZPopOverMenuDismissBlock
 */
+ (void) showForSender:(UIView *)sender
              withMenu:(NSArray<NSString*> *)menuArray
             doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
          dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;

/**
 *  show method with sender with imageNameArray
 *
 *  @param sender         sender
 *  @param menuArray      menuArray
 *  @param imageNameArray imageNameArray
 *  @param doneBlock      WDZPopOverMenuDoneBlock
 *  @param dismissBlock   WDZPopOverMenuDismissBlock
 */
+ (void) showForSender:(UIView *)sender
              withMenu:(NSArray<NSString*> *)menuArray
        imageNameArray:(NSArray<NSString*> *)imageNameArray
             doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
          dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;

/**
 *  show method for barbuttonitems with event without images
 *
 *  @param event          UIEvent
 *  @param menuArray      menuArray
 *  @param doneBlock      WDZPopOverMenuDoneBlock
 *  @param dismissBlock   WDZPopOverMenuDismissBlock
 */
+ (void) showFromEvent:(UIEvent *)event
              withMenu:(NSArray<NSString*> *)menuArray
             doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
          dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;

/**
 *  show method for barbuttonitems with event with imageNameArray
 *
 *  @param event          UIEvent
 *  @param menuArray      menuArray
 *  @param imageNameArray imageNameArray
 *  @param doneBlock      WDZPopOverMenuDoneBlock
 *  @param dismissBlock   WDZPopOverMenuDismissBlock
 */
+ (void) showFromEvent:(UIEvent *)event
              withMenu:(NSArray<NSString*> *)menuArray
        imageNameArray:(NSArray<NSString*> *)imageNameArray
             doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
          dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;

/**
 *  show method with SenderFrame without images
 *
 *  @param senderFrame  senderFrame
 *  @param menuArray    menuArray
 *  @param doneBlock    doneBlock
 *  @param dismissBlock dismissBlock
 */
+ (void) showFromSenderFrame:(CGRect )senderFrame
                    withMenu:(NSArray<NSString*> *)menuArray
                   doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
                dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;
/**
 *  show method with SenderFrame with imageNameArray
 *
 *  @param senderFrame    senderFrame
 *  @param menuArray      menuArray
 *  @param imageNameArray imageNameArray
 *  @param doneBlock      doneBlock
 *  @param dismissBlock   dismissBlock

 */
+ (void) showFromSenderFrame:(CGRect )senderFrame
                    withMenu:(NSArray<NSString*> *)menuArray
              imageNameArray:(NSArray<NSString*> *)imageNameArray
                   doneBlock:(WDZPopOverMenuDoneBlock)doneBlock
                dismissBlock:(WDZPopOverMenuDismissBlock)dismissBlock;
/**
 *  dismiss method
 */
+ (void) dismiss;

@end
