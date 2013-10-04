//
//  FirstViewController.h
//  SegueTest
//
//  Created by Lacock, Ty on 10/4/13.
//  Copyright (c) 2013 TWL. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *fName;
@property (strong, nonatomic) IBOutlet UILabel *phone;
@property (strong, nonatomic) IBOutlet UILabel *bDay;

@property (strong, nonatomic) NSString *fNameText;
@property (strong, nonatomic) NSString *phoneText;
@property (strong, nonatomic) NSString *bDayText;

@end
