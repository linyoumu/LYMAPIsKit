//
//  APIRequestProtocol.h
//  Test123
//
//  Created by LinApple on 2017/12/6.
//  Copyright © 2017年 LinApple. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "FFReformProtocol.h"

@protocol APIRequestProtocol <NSObject>

@required;
/// 请求的URL
- (NSString *)apiRequestURL;
/// 请求的参数
- (NSDictionary *)apiRequestParams;
/// 请求成功的数据加工
- (id)fetchDataWithReformer:(NSDictionary <FFReformProtocol>*)reformer;

@end
