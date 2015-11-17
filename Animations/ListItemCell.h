//
//  ListItemCell.h
//  Facebook-POP-Animation
//
//  Created by YouXianMing on 15/11/16.
//  Copyright © 2015年 ZiPeiYi. All rights reserved.
//

#import <UIKit/UIKit.h>

static NSString *listItemCellString = @"ListItemCell";

@interface ListItemCell : UITableViewCell

@property (nonatomic, weak) id data;

/**
 *  Load data.
 */
- (void)loadContent;

@end