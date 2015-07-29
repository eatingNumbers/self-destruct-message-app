//
//  SignupViewController.h
//  Ribbit
//
//  Created by Dean Laurea on 7/28/15.
//  Copyright (c) 2015 Dean Laurea. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SignupViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *usernameField;
@property (weak, nonatomic) IBOutlet UITextField *passwordField;
@property (weak, nonatomic) IBOutlet UITextField *emailField;

- (IBAction)signup:(id)sender;

@end
