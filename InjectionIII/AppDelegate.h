//
//  AppDelegate.h
//  InjectionIII
//
//  Created by John Holdsworth on 06/11/2017.
//  Copyright © 2017 John Holdsworth. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "InjectionServer.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak) IBOutlet NSMenuItem *enableWatcher;
@property (weak) InjectionServer *lastConnection;

- (void)setMenuIcon:(NSString *)tiffName;

@end

extern AppDelegate *appDelegate;
