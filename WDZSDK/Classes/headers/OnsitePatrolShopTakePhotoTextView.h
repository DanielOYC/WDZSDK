//
//  OnsitePatrolShopTakePhotoTextView.h
//  WanDianZhang
//
//  Created by ovopark_iOS on 16/6/30.
//  Copyright © 2016年 JaryPan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class OnsitePatrolShopTakePhotoTextView;
@protocol OnsitePatrolShopTakePhotoTextViewDelegate <NSObject>

@optional
- (void)textInputViewDidBeginEditing:(OnsitePatrolShopTakePhotoTextView *)textView;
- (void)textInputViewDidEndEditing:(OnsitePatrolShopTakePhotoTextView *)textView;

@end

@interface OnsitePatrolShopTakePhotoTextView : UIView

@property (weak, nonatomic) id<OnsitePatrolShopTakePhotoTextViewDelegate>delegate;

@property (copy, nonatomic) NSString *inputText;

- (void)resignFirstResponder;

@end
