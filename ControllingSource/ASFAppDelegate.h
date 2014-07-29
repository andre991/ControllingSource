//
//  ASFAppDelegate.h
//  ControllingSource
//
//  Created by André Santana Ferreira on 29/07/14.
//  Copyright (c) 2014 André Santana Ferreira. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ASFAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
