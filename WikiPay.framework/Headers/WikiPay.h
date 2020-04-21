//
//  WikiPay.h
//  WikiPay
//
//  Created by admin on 2020/4/20.
//  Copyright © 2020 admin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, ResultCode) {
    ResultCodeSuccess,
    ResultCodeUnknownError,
};

typedef void (^WikiPayResult)(ResultCode code, NSDictionary* result);

@interface WikiPay : NSObject
//+ (instancetype)sharedInstance;

+ (BOOL)AppIsInstalled;

+ (void)handleUrl:(NSURL *)aUrl result:(WikiPayResult)aResult;

+ (void)payOrder:(NSString *)orderStr result:(WikiPayResult)aResult;

@end


