//
//  ViewController.h
//  HidingObjects
//
//  Created by SBT on 01/05/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentCotrol;
@property (weak, nonatomic) IBOutlet UILabel *Label;

- (IBAction)HideButton:(id)sender;
- (IBAction)RevealButton:(id)sender;

@end

