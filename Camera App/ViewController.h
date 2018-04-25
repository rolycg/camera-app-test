//
//  ViewController.h
//  Camera App
//
//  Created by Rolando Cruz on 4/16/18.
//  Copyright © 2018 Rolando Cruz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UIImagePickerControllerDelegate>

@property (weak, nonatomic) IBOutlet UIButton *cameraButton;
@property (weak, nonatomic) IBOutlet UIImageView *Image;
@property (weak, nonatomic) IBOutlet UIButton *takePhotoButton;

- (IBAction)TakePhotoAction:  (id)sender;
- (IBAction)OpenCamera:(id)sender;

@end

