//
//  InboxTableViewController.h
//  Ribbit
//
//  Created by Dean Laurea on 7/26/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

@interface InboxTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *messages;
@property (nonatomic, strong) PFObject *selectedMessage;
@property (nonatomic, strong) MPMoviePlayerController *moviePlayer;

- (IBAction)logout:(id)sender;

@end
