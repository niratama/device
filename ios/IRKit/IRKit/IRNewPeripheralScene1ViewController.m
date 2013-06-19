//
//  IRNewPeripheralScene1ViewController.m
//  IRKit
//
//  Created by Masakazu Ohtsuka on 2013/05/17.
//  Copyright (c) 2013年 KAYAC Inc. All rights reserved.
//

#import "IRNewPeripheralScene1ViewController.h"
#import "IRNewPeripheralScene2ViewController.h"
#import "IRKit.h"

@interface IRNewPeripheralScene1ViewController ()

@property (nonatomic) UILabel *label;
@property (nonatomic) id observer;

@end

@implementation IRNewPeripheralScene1ViewController

- (void)loadView {
    LOG_CURRENT_METHOD;
    
    CGRect frame = [[UIScreen mainScreen] bounds];
    LOG(@"frame: %@", NSStringFromCGRect(frame));
    UIView *view = [[UIView alloc] initWithFrame:frame];

    // image
    UIImageView *imageView = [[UIImageView alloc] initWithImage: [UIImage imageNamed:@"IRKitResources.bundle/scene1.png"]];
    imageView.frame = frame;
    [view addSubview: imageView];
    
    // label
    _label = [[UILabel alloc] init];
    _label.textAlignment = NSTextAlignmentCenter;
    _label.opaque        = NO;
    _label.textColor       = [UIColor whiteColor];
    _label.backgroundColor = [UIColor clearColor];
    _label.adjustsFontSizeToFitWidth = YES;
    frame.origin.x = 0;
    frame.origin.y = frame.size.height / 2 - 50;
    frame.size.height = 100;
    LOG(@"label.frame: %@", NSStringFromCGRect(frame));    
    _label.frame = frame;
    [view addSubview:_label];
    
    self.view = view;
}

- (void)viewDidLoad {
    LOG_CURRENT_METHOD;
    [super viewDidLoad];
    
    _label.text = @"IRKitデバイスを接続してください";
}

- (void) viewWillAppear:(BOOL)animated {
    LOG_CURRENT_METHOD;
    [super viewWillAppear:animated];

    self.title = @"Scene 1";
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc]
         initWithBarButtonSystemItem:UIBarButtonSystemItemCancel
                              target:self.navigationController.delegate
                              action:@selector(cancelButtonPressed:)];

    _observer = [[NSNotificationCenter defaultCenter]
        addObserverForName:IRKitDidConnectPeripheralNotification
                    object:nil
                     queue:[NSOperationQueue mainQueue]
                usingBlock:^(NSNotification *note) {
                    LOG( @"new irkit connected");
                    IRNewPeripheralScene2ViewController *c =
                        [[IRNewPeripheralScene2ViewController alloc] init];
                    [self.navigationController pushViewController:c animated:YES];
                }];
}

- (void) viewWillDisappear:(BOOL)animated {
    LOG_CURRENT_METHOD;
    [super viewWillDisappear:animated];
    
    [[NSNotificationCenter defaultCenter] removeObserver: _observer];
}

#pragma mark -
#pragma mark UI events

- (void)didReceiveMemoryWarning
{
    LOG_CURRENT_METHOD;
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
