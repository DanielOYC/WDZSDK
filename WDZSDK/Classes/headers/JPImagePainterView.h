//
//  JPImagePainterView.h
//  JPImagePainterDemo
//
//  Created by ovopark_iOS on 16/4/11.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JPImagePainterView;

@protocol JPImagePainterViewDelegate <NSObject>

@optional
- (void)deleteButtonClicked:(JPImagePainterView *)painterView;
- (void)cancelButtonClicked:(JPImagePainterView *)painterView;
- (void)imagePainterView:(JPImagePainterView *)painterView saveButtonClicked:(UIImage *)savedImage;

@end

@interface JPImagePainterView : UIView

@property (nonatomic , retain)UIButton *deleteButton;

@property (strong, nonatomic) id<JPImagePainterViewDelegate>delegate;

@property (copy, nonatomic) NSString *title;

- (instancetype)initWithFrame:(CGRect)frame andImage:(UIImage *)image;

@property (strong, nonatomic) id userInfo;

@end
