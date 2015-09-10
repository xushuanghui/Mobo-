//
//  WebViewController.h
//  weibo
//
//  Created by zsm on 14-11-18.
//  Copyright (c) 2014年 zsm. All rights reserved.


#import "BaseViewController.h"

@interface WebViewController : BaseViewController
{
    UIWebView *_webView;
}

@property (nonatomic,copy) NSString *urlString;
@end