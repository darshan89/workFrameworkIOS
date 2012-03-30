//
//  ChangeTrackingChange.h
//  libopc
//
//  Created by openxcell123 technolabs on 3/30/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <opc/opc.h>

@interface ChangeTrackingChange : NSObject
{
    NSString *mode;
    NSString *par;
    CGSize size;
}

@property (nonatomic,retain)NSString *mode;
@property (nonatomic,retain)NSString *par;
@property (nonatomic)CGSize size;

+(NSArray *)loadChangesFromFile:(NSString *)path;
@end
