//
//  LaunchViewController.h
//  PhotoTest1
//
//  Created by Mitchell Porter on 12/28/13.
//  Copyright (c) 2013 Mitchell Porter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>




@interface LaunchViewController : UIViewController

-(IBAction)login;
-(IBAction)signup;
-(IBAction)termsOfService;

@property (strong, nonatomic) IBOutlet UIImageView *launchBackground;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *backBarButton;

@end
