//
//  ItemViewController.h
//  Test_xib1
//
//  Created by shimi on 13-3-7.
//  Copyright (c) 2013年 com.shimi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ItemViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *priceLabel;
@property (weak, nonatomic) IBOutlet UILabel *descriptionLabel;

@end
