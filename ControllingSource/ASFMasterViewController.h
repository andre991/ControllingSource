//
//  ASFMasterViewController.h
//  ControllingSource
//
//  Created by André Santana Ferreira on 29/07/14.
//  Copyright (c) 2014 André Santana Ferreira. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface ASFMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
