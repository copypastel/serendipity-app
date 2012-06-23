//
//  cpMasterViewController.h
//  serendipity
//
//  Created by Matt Wilson on 6/23/12.
//  Copyright (c) 2012 Square. All rights reserved.
//

#import <UIKit/UIKit.h>

@class cpDetailViewController;

@interface cpMasterViewController : UITableViewController

@property (strong, nonatomic) cpDetailViewController *detailViewController;

@end
