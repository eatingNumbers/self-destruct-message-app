//
//  ImageViewController.h
//  Ribbit
//
//  Created by Dean Laurea on 8/24/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>

@interface ImageViewController : UIViewController

@property (nonatomic, strong) PFObject *message;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
