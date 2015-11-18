//
//  ViewController.h
//  consistenzzz
//
//  Created by Nate Lohn on 11/15/15.
//  Copyright © 2015 Nate Lohn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIView *picker;
@property (weak, nonatomic) IBOutlet UISegmentedControl *wantHourSelector;
@property (weak, nonatomic) IBOutlet UISegmentedControl *wantMinSelector;
@property (weak, nonatomic) IBOutlet UISegmentedControl *getHourSelector;
@property (weak, nonatomic) IBOutlet UISegmentedControl *getMinSelector;

@property (weak, nonatomic) IBOutlet UIButton *testButton;
- (IBAction)testButtonAction:(id)sender;

@end

