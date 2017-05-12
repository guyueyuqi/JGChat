//
//  NHPostMessageAttachment.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/28.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTESCustomAttachmentDefines.h"

@interface NHPostMessageAttachment : NSObject<NIMCustomAttachment,NTESCustomAttachmentInfo>

//帖子的url
@property (nonatomic, strong) NSString *postImageUrl;
//帖子的content
@property (nonatomic, strong) NSString *postContent;
//帖子的话题
@property (nonatomic, strong) NSString *postTopic;


@end
