//
//  PostMailViewController.h
//  虎踞龙蟠
//
//  Created by 张晓波 on 6/8/12.
//  Copyright (c) 2012 Ethan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AddPostUserViewController.h"
#import "BBSAPI.h"

@protocol PostMailViewControllerDelegate <NSObject>
-(void)dismissPostMailView;
@end


@interface PostMailViewController : UIViewController <UITextFieldDelegate, UIScrollViewDelegate, UITextViewDelegate>
{    
    UITextField * postUser;
    UIButton * addUserButton;
    
    UITextField * postTitle;
    UILabel * postTitleCount;
    
    UITextView * postContent;
    UIScrollView * postScrollView;
    MBProgressHUD * HUD;
    Mail * rootMail;
    NSString * sentToUser;
    int postType; // 发表类型，0发新邮件，1回复邮件，2已指定发件人
    MyBBS * myBBS;
}
@property(nonatomic, strong)Mail * rootMail;
@property(nonatomic, strong)NSString * sentToUser;
@property(nonatomic, assign)int postType;

-(IBAction)inputTitle:(id)sender;
-(void)cancel;
-(void)send;
@end
