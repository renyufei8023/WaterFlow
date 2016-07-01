//
//  ShopCollectionViewCell.h
//  瀑布流
//
//  Created by 任玉飞 on 16/7/1.
//  Copyright © 2016年 任玉飞. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Shop;

@interface ShopCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) Shop *model;
@end
