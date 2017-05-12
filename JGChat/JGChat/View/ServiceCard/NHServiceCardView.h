//
//  NHServiceCardView.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/25.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <UIKit/UIKit.h>
@class NHServiceCardView;
@protocol NHServiceCardViewDelegate <NSObject>

- (void)backViewClick:(NHServiceCardView *)backView;

@end

@interface NHServiceCardView : UIView

@property (nonatomic, strong) id<NHServiceCardViewDelegate> delegate;

@end
