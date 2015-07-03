//
//  CTBaseCell.h
//  C&TViewCellExample
//
//  Created by ximiao on 15/7/3.
//  Copyright (c) 2015年 ximiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTCellData.h"

@protocol CTCellProtocol <NSObject>
- (BOOL)setData:(CTCellData*)data;
@end

@interface CTCell : UIView<CTCellProtocol>
+ (CGSize)sizeThatFits:(CGSize)size;
- (BOOL)setData:(CTCellData*)data;
@end
