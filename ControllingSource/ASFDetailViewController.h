//
//  ASFDetailViewController.h
//  ControllingSource
//
//  Created by André Santana Ferreira on 29/07/14.
//  Copyright (c) 2014 André Santana Ferreira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASFDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
