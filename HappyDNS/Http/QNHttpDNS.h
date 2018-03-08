//
//  QNHttpDNS.h
//  HappyDNS
//
//  Created by 何昊宇 on 2018/3/6.
//  Copyright © 2018年 Qiniu Cloud Storage. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QNResolverDelegate.h"

@interface QNHttpDNS : NSObject<QNResolverDelegate>
- (NSArray *)query:(QNDomain *)domain networkInfo:(QNNetworkInfo *)netInfo error:(NSError *__autoreleasing *)error;

@property (nonatomic, strong, readonly) NSString *accountId;

@property (nonatomic, strong, readonly) NSString *encryptKey;

/**
 *    单位 s
 */
@property (nonatomic, assign, readonly) long expireTime;

/**
 *    http DNS 初始化
 */
- (instancetype)initWithAccountId:(NSString *)accountId;

/**
 *    http DNS 加密初始化
 */
- (instancetype)initWithAccountId:(NSString *)accountId
                       encryptKey:(NSString *)encryptKey
                       expireTime:(long) expireTime;

@end
