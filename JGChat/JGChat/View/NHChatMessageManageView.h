//
//  NHChatMessageManageView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/26.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NHChatMessageManageView;
@protocol NHChatMessageManageViewDelegate <NSObject>

- (void)searchButClick:(NHChatMessageManageView *)view;

- (void)cleanButClick:(NHChatMessageManageView *)view;

@end

@interface NHChatMessageManageView : UIView

@property (nonatomic, weak) id<NHChatMessageManageViewDelegate> delegate;

@end
