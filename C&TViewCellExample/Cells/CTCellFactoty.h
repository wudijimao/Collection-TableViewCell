//
//  CTCellFactoty.h
//  C&TViewCellExample
//
//  Created by ximiao on 15/7/3.
//  Copyright (c) 2015年 ximiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTTableViewCell.h"
#import "CTCollectionViewCell.h"

@interface CTCellFactoty : UITableViewCell
+ (CTTableViewCell*)cellForTableView:(UITableView*)tableview Data:(CTCellData*)data;
+ (CTCollectionViewCell*)cellForCollectionView:(UICollectionView*)collectionView Data:(CTCellData*)data;
+ (CGFloat)cellHeightForData:(CTCellData*)data;
+ (CGFloat)cellHeightForData:(CTCellData *)data Width:(CGFloat)width;

@end
