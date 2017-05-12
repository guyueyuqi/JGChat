//
//  NHLocationAttachment.h
//  NestHouse
//
//  Created by 黄建国 on 2017/4/28.
//  Copyright © 2017年 黄建国. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NTESCustomAttachmentDefines.h"
@interface NHLocationAttachment : NSObject<NIMCustomAttachment,NTESCustomAttachmentInfo>

//地图图片url
@property (nonatomic, strong) NSString *mapImageUrl;
//地图地址
@property (nonatomic, strong) NSString *mapAdress;
//详细地址
@property (nonatomic, strong) NSString *mapAdressDetail;

@end
