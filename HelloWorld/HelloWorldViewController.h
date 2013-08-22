//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by shun_tak on 2013/08/20.
//  Copyright (c) 2013年 shun_tak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController
<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (copy, nonatomic) NSString *userName;

- (IBAction)changeGreeting:(id)sender;
@end
