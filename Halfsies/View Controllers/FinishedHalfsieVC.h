//
//  FinishedHalfsieVC.h
//  PhotoTest1
//
//  Created by Mitchell Porter on 3/6/14.
//  Copyright (c) 2014 Mitchell Porter. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Parse/Parse.h>
#import <AssetsLibrary/AssetsLibrary.h>

@interface FinishedHalfsieVC : UIViewController

@property (strong, nonatomic) PFObject *messagePassedFromInbox;
@property (nonatomic, retain) UIActionSheet *shareButtonForActionSheet;
@property (nonatomic, retain) NSURL *imageFileURL;
@property (nonatomic, retain) NSData *imageData;
@property (nonatomic, retain) ACAccount *facebookAccount;
@property (nonatomic, strong) UIImage *image;

- (IBAction)shareButton;
- (IBAction)backButton;

@end

