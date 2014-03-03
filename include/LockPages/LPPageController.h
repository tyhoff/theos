//
//  LPPageController.h
//  LockInfo7
//
//  Created by David Ashman on 1/30/14.
//  Copyright (c) 2014 LockInfo, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LPPage-Protocol.h"

@interface LPPageController : NSObject
{
    NSMutableArray* _pages;
    int _startIndex;
}

+(LPPageController*) sharedInstance;
-(void) addPage:(id<LPPage>) page;

@end
