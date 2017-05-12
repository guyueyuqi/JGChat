//
//  NHMaterialGifMessageContentView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/26.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <NIMKit/NIMKit.h>
static NSString *const MaterialGifClick = @"MaterialGifClick";

@interface NHMaterialGifMessageContentView : NIMSessionMessageContentView

@property (nonatomic, strong) UIImageView *gImageView;

@end
