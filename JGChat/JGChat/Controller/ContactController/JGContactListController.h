//
//  JGContactListController.h
//  JGChat
//
//  Created by 黄建国 on 2017/5/12.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NIMContactSelectConfig.h"
@interface JGContactListController : UIViewController

@property (nonatomic, strong, readonly) id<NIMContactSelectConfig> config;

@end
