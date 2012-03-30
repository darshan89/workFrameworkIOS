//
//  AppDelegate.h
//  libopc
//
//  Created by openxcell123 technolabs on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MasterViewController.h"
#import "ChangeTrackingChange.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    NSURL *url;
    NSOperationQueue *queue;
    MasterViewController *viewController;
}

@property (nonatomic, retain) UIWindow *window;

@property (nonatomic, retain) UINavigationController *navigationController;

-(void)load:(id)sender;
-(void)loaded:(id)sender;

@end
