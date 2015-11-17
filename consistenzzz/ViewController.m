//
//  ViewController.m
//  consistenzzz
//
//  Created by Nate Lohn on 11/15/15.NS
//  Copyright © 2015 Nate Lohn. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

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

- (IBAction)testButtonAction:(id)sender {
    float want = 6 + self.wantHourSelector.selectedSegmentIndex;
    NSLog(@"want = %f", want);
    
}
@end
