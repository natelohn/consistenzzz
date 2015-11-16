//
//  ViewController.m
//  consistenzzz
//
//  Created by Nate Lohn on 11/15/15.
//  Copyright © 2015 Nate Lohn. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@property (strong, nonatomic) NSArray *desiredSleepArray;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)buttonPressed:(id)sender {
    NSString *desiredSleepString = [ _desiredSleepArray objectAtIndex:[ _desiredSleepPicker selectedRowInComponent:0]];
    
    _picked.text = desiredSleepString;
}
@end
