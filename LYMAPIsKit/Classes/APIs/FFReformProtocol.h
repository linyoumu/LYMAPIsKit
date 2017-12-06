//
//  FFReformProtocol.h
//  Test123
//
//  Created by LinApple on 2017/12/6.
//  Copyright © 2017年 LinApple. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol FFReformProtocol <NSObject>


/**
 将原始数据转换成外部可以直接使用的数据
 @param originData 原始数据
 @return 转换后数据
 */
- (NSDictionary *)reformData:(NSDictionary *)originData;

//- (NSDictionary *)reformDataWithManager:(APIManager *)manager;

@end
