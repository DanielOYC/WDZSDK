//
//  WDZEqualSpaceFlowLayout.h
//  WDZForAppStore
//
//  Created by Hayder on 2018/5/3.
//  Copyright © 2018年 Wandianzhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol  WDZEqualSpaceFlowLayoutDelegate<UICollectionViewDelegateFlowLayout>
@end

@interface WDZEqualSpaceFlowLayout : UICollectionViewFlowLayout
@property (nonatomic,weak) id<WDZEqualSpaceFlowLayoutDelegate> delegate;
@end
