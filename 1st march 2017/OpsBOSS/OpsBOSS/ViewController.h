//
//  ViewController.h
//  OpsBOSS
//
//  Created by nWorks Technologies on 01/03/17.
//  Copyright © 2017 nWorks Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UITextField *userNameOrAccountEmailTextField;

@property (weak, nonatomic) IBOutlet UITextField *passwordTextField;

@end

