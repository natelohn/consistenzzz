//
//  ViewController.h
//  consistenzzz
//
//  Created by Nate Lohn on 11/15/15.
//  Copyright © 2015 Nate Lohn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *testButton;
- (IBAction)testButtonAction:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *testWant;
@property (weak, nonatomic) IBOutlet UILabel *testActual;
@property (weak, nonatomic) IBOutlet UILabel *testSleepDebt;

@end

