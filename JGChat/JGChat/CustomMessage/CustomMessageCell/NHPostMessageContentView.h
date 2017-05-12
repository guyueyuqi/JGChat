//
//  NHPostMessageContentView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/28.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <NIMKit/NIMKit.h>
static NSString *const PostMessageClick = @"PostMessageClick";

@interface NHPostMessageContentView : NIMSessionMessageContentView

@property (nonatomic, strong) UIImageView *postImageView;

@property (nonatomic, strong) UILabel *postContentLab;

@property (nonatomic, strong) UILabel *postTopicLab;

@end
