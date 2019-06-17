//
//  SingleBigImageManager.h
//  LaiYiFen
//
//  Created by ovopark_iOS on 15/11/17.
//  Copyright © 2015年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SingleBigImageManager : UIScrollView

- (SingleBigImageManager *)initWithFrame:(CGRect)frame imageOrImageUrlString:(id)imageOrImageUrlString;

- (void)show;

@end
