//
//  APIResponseProtocol.h
//  Test123
//
//  Created by LinApple on 2017/12/6.
//  Copyright © 2017年 LinApple. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol APIResponseProtocol <NSObject>

@optional;
/// 响应成功后的处理
- (void)apiResponseSuccess:(id<APIRequestProtocol>)request;

@end
