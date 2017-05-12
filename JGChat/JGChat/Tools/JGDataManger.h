//
//  JGDataManger.h
//  JGChat
//
//  Created by 黄建国 on 2017/5/11.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JGDataManger : NSObject<NIMKitDataProvider>

+ (instancetype)sharedInstance;

@property (nonatomic,strong) UIImage *defaultUserAvatar;

@property (nonatomic,strong) UIImage *defaultTeamAvatar;

@end
