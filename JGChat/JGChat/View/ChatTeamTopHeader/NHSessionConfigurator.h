//
//  NHSessionConfigurator.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/24.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <NIMKit/NIMKit.h>
#import "NIMSessionConfigurator.h"
#import "NIMSessionConfigurateProtocol.h"
@class NIMSessionViewController;
@interface NHSessionConfigurator : NIMSessionConfigurator

- (void)setup:(NIMSessionViewController *)vc;

@property (nonatomic, strong) NIMSession *session;

@end
