//
//  InboxTableViewController.h
//  Ribbit
//
//  Created by Dean Laurea on 7/26/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface InboxTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;

- (IBAction)logout:(id)sender;

@end
