//
//  NetworkHelper.h
//  Test123
//
//  Created by LinApple on 2017/12/6.
//  Copyright © 2017年 LinApple. All rights reserved.
//
#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const POST;
FOUNDATION_EXTERN NSString * const GET;

@interface NetworkHelper : NSObject

+ (instancetype)sharedInstance;

- (void)requestMethod:(NSString *)method url:(NSString *)url parameters:(id)parameters finishBlock:(void (^)(id data, NSError *error))finishBlock;

@end
