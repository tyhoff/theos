//
//  LPPageProvider.h
//  LockInfo7
//
//  Created by David Ashman on 1/30/14.
//  Copyright (c) 2014 LockInfo, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

enum {
    LPPageLayoutOptionNone = 1 << 0,
    LPPageLayoutOptionDate = 1 << 1,
    LPPageLayoutOptionSlideToUnlock = 1 << 2
};
typedef NSUInteger LPPageLayoutOptions;

#define LPPageLockScreenNotificationsPriority 1000

@protocol LPPage <NSObject>

-(UIView*) view;
-(NSInteger) priority;
-(LPPageLayoutOptions) layoutOptions;

@optional
-(void) pageWillPresent;
-(void) pageDidPresent;
-(void) pageWillDismiss;
-(void) pageDidDismiss;

@end
