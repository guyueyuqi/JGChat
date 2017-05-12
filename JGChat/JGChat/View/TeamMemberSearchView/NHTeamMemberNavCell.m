//
//  NHTeamMemberNavCell.m
//  NestHouse
//
//  Created by 黄建国 on 2017/4/21.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import "NHTeamMemberNavCell.h"
@interface NHTeamMemberNavCell()

@property (nonatomic, strong) UIImageView *iconView;

@end
@implementation NHTeamMemberNavCell

- (instancetype)initWithFrame:(CGRect)frame{
    if (self = [super initWithFrame:frame]) {
        [self setupUI];
    }
    return self;
}

#pragma mark - 绘制UI
- (void)setupUI{
    self.iconView = [[UIImageView alloc]initWithFrame:CGRectMake(0, 0, 30, 30)];
    self.iconView.backgroundColor = [UIColor blueColor];
    self.iconView.layer.cornerRadius = 15;
    self.iconView.clipsToBounds = YES;
    [self.contentView addSubview:self.iconView];
}

@end
