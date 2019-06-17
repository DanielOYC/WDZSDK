//
//  WDZBLFilterBarButton.h
//  WDZForAppStore
//
//  Created by 王振海 on 2017/8/29.
//  Copyright © 2017年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, filterBtnState) {
    
    filterBtnStateDeselected,//未选中
    filterBtnStateAscending,//升序
    filterBtnStateDescending//降序
    
};

@interface WDZBLFilterBarButton : UIButton

@property (nonatomic, assign) filterBtnState btnState;

@end
