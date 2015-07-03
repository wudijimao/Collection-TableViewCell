//
//  CTBaseCell.m
//  C&TViewCellExample
//
//  Created by ximiao on 15/7/3.
//  Copyright (c) 2015年 ximiao. All rights reserved.
//

#import "CTCell.h"

@implementation CTCell
+ (CGSize)sizeThatFits:(CGSize)size {
    assert(NO && @"不需要调用父类的，并且必须实现这个函数");
    return CGSizeZero;
}
- (BOOL)setData:(id)data {
    return YES;
}
@end
