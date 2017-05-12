//
//  NHTeamMemberSelectView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/21.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NHTeamMemberSelectView;
@protocol NHTeamMemberSelectViewDelegate <NSObject>

//选中代理
- (void)didSelect:(NHTeamMemberSelectView *)selectView selectedArr:(NSArray *)selectedArr;

//取消选中代理
- (void)unSelect:(NHTeamMemberSelectView *)selection selectedArr:(NSArray *)selectedArr;
@end

@interface NHTeamMemberSelectView : UIView

@property (nonatomic, weak) id<NHTeamMemberSelectViewDelegate> delegate;

@property (nonatomic, strong) NSArray *arr;

@property(nonatomic, strong) UITableView *memberTab;

@property (nonatomic, strong) NSArray *members;


@end
