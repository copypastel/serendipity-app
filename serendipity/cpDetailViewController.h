//
//  cpDetailViewController.h
//  serendipity
//
//  Created by Matt Wilson on 6/23/12.
//  Copyright (c) 2012 Square. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface cpDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
