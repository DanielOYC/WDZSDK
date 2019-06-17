//
//  JPImagePainter.h
//  JPImagePainterDemo
//
//  Created by ovopark_iOS on 16/4/11.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

typedef NS_ENUM(NSInteger, CompletedType) {
    CompletedSavedType,
    CompletedCanceledType,
    CompletedDeletedType,
};

#import <UIKit/UIKit.h>
#import "JPImagePainterView.h"
typedef void(^CompletedBlock)(CompletedType type, UIImage *savedImage);

@class JPImagePainter;
@protocol JPImagePainterDelegate <NSObject>

@optional
- (void)deleteButtonClicked:(JPImagePainter *)imagePainter;
- (void)cancelButtonClicked:(JPImagePainter *)imagePainter;
- (void)imagePainter:(JPImagePainter *)imagePainter saveButtonClicked:(UIImage *)savedImage;

@end

@interface JPImagePainter : UIViewController

@property (strong, nonatomic) id<JPImagePainterDelegate>delegate;

@property (strong, nonatomic) UIImage *paintImage;

@property (copy, nonatomic) NSString *paintTitle;

@property (strong, nonatomic)JPImagePainterView *imagePainterView;

@property (assign , nonatomic)BOOL hiddenDeleteButton;

@property (assign, nonatomic) NSInteger tag;
@property (strong, nonatomic) NSDictionary *userInfo;

@property (copy, nonatomic) CompletedBlock completedBlock;

@end
