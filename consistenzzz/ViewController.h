//
//  ViewController.h
//  consistenzzz
//
//  Created by Nate Lohn on 11/15/15.
//  Copyright © 2015 Nate Lohn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController < UIPickerViewDelegate, UIPickerViewDataSource >
@property (strong, nonatomic) IBOutlet UIPickerView *desiredSleepPicker;
- (IBAction)buttonPressed:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *picked;

@end

