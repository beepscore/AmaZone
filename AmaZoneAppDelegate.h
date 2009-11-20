//
//  AmaZoneAppDelegate.h
//  AmaZone
//
//  Created by Steve Baker on 11/19/09.
//  Copyright 2009 Beepscore LLC. All rights reserved.
//  Ref Hillegass Ch 28

#import <Cocoa/Cocoa.h>

@interface AmaZoneAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *window;
    
    IBOutlet NSProgressIndicator *progress;
    IBOutlet NSTextField *searchField;
    IBOutlet NSTableView *tableView;
}

@property (assign) IBOutlet NSWindow *window;

- (IBAction)fetchBooks:(id)sender;

@end
