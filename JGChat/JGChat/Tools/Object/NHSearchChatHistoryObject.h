//
//  NHSearchChatHistoryObject.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/27.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, NHSearchLocalHistoryType){
    SearchLocalHistoryTypeEntrance,
    SearchLocalHistoryTypeContent,
};

@class NHSearchChatHistoryObject;
@protocol NHSearchObjectRefresh <NSObject>

- (void)refresh:(NHSearchChatHistoryObject *)object;

@end

@interface NHSearchChatHistoryObject : NSObject

@property (nonatomic,copy)   NSString *content;

@property (nonatomic,assign) CGFloat uiHeight;

@property (nonatomic,assign) NHSearchLocalHistoryType type;

@property (nonatomic,readonly) NIMMessage *message;

- (instancetype)initWithMessage:(NIMMessage *)message;


@end
