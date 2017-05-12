//
//  JGChatConfig.h
//  JGChat
//
//  Created by 黄建国 on 2017/5/11.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JGChatConfig : NSObject


+ (instancetype)sharedConfig;

@property (nonatomic,copy)  NSString    *appKey;
@property (nonatomic,copy)  NSString    *apiURL;
@property (nonatomic,copy)  NSString    *cerName;

@end
