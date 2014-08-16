//
//  DetailViewController.h
//  stb☆fan_bata1
//
//  Created by kazu on 8/16/14.
//  Copyright (c) 2014 KazukiOomizo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
