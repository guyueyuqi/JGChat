//
//  NHSearchChatHistoryObject.m
//  NestHouse
//
//  Created by 黄建国 on 2017/4/27.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import "NHSearchChatHistoryObject.h"

@implementation NHSearchChatHistoryObject

- (instancetype)initWithMessage:(NIMMessage *)message{
    self = [super init];
    if (self) {
        _message = message;
        [self calculateHistoryItemHeight];
    }
    return self;
}


- (void)calculateHistoryItemHeight{
    NSString *content = _message.text;
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectZero];
    label.numberOfLines = 0;
    label.font = [UIFont systemFontOfSize:12.f];
    label.text = content;
    CGSize  labelSize   = [label sizeThatFits:CGSizeMake(260.f * WIDTH/320, CGFLOAT_MAX)];
    CGFloat labelHeight = MAX(15.f, labelSize.height);
    CGFloat height      = labelHeight + 30.f + 8.f;
    _uiHeight = height;
}

@end
