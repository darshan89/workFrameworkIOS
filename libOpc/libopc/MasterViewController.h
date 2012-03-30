//
//  MasterViewController.h
//  libopc
//
//  Created by openxcell123 technolabs on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ChangeTrackingChange.h"

@class DetailViewController;

@interface MasterViewController : UITableViewController
{
    NSArray *changes;
}

@property (nonatomic, retain) DetailViewController *detailViewController;
@property (nonatomic,retain)NSArray *changes;
@end
