//
//  NHMapMessageContentView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/28.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <NIMKit/NIMKit.h>
static NSString *const MapMessageClick = @"MapMessageClick";

@interface NHMapMessageContentView : NIMSessionMessageContentView

@property (nonatomic, strong) UILabel *mapAdress;

@property (nonatomic, strong) UILabel *mapAdressDetail;

@property (nonatomic, strong) UIImageView *mapImageView;

@end
