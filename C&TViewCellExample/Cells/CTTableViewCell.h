//
//  CTTableViewCell.h
//  C&TViewCellExample
//
//  Created by ximiao on 15/7/3.
//  Copyright (c) 2015年 ximiao. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTCell.h"
@interface CTTableViewCell : UITableViewCell<CTCellProtocol>
@property CTCell *contentCell;
- (BOOL) setData:(CTCellData*)data;
@end
