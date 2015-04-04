//
//  AppDelegate.h
//  HelloHarman
//
//  Created by Paul Nuesslein on 4/3/15.
//  Copyright (c) 2015 Paul Nuesslein. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HKWControlHandler.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) HKWControlHandler *harmankardonHandler;
@property (strong, nonatomic) UIWindow *window;

@end

