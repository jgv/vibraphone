//
//  ViewController.h
//  Vibraphone
//
//  Created by Jonathan Vingiano on 4/4/14.
//  Copyright (c) 2014 Jonathan Vingiano. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AudioToolbox/AudioToolbox.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) IBOutlet UIImageView *imageView;

@end
