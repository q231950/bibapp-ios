//
//  BAOptionsViewController.h
//  bibapp
//
//  Created by Johannes Schultze on 04.12.12.
//  Copyright (c) 2012 Johannes Schultze. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BAAppDelegate.h"

@interface BAOptionsViewController : UITableViewController

@property(strong, nonatomic) BAAppDelegate *appDelegate;
@property (weak, nonatomic) IBOutlet UISwitch *saveLocalSwitch;
@property (weak, nonatomic) IBOutlet UISwitch *countPixelSwitch;
@property (weak, nonatomic) IBOutlet UILabel *catalogueLabel;
@property (weak, nonatomic) IBOutlet UILabel *versionLabel;

- (IBAction)saveLocalSwithAction:(id)sender;
- (IBAction)countPixelSwitchAction:(id)sender;

@end