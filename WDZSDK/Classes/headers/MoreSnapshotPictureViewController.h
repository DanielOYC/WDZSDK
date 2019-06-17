//
//  MoreSnapshotPictureViewController.h
//  LaiYiFen
//
//  Created by ovopark_iOS on 16/1/12.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MoreSnapshotPictureView.h"
#import "WDZBaseViewController.h"
@interface MoreSnapshotPictureViewController : WDZBaseViewController

@property (strong, nonatomic) MoreSnapshotPictureView *moreSnapshotPictureView;

@property (copy, nonatomic) NSString *shopName;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *cameraName;
@property (copy, nonatomic) NSString *cameraID;

@end
