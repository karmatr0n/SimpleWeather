//
//  WXBackgroundImage.m
//  SimpleWeather
//
//  Created by Alejandro Juárez Robles on 5/30/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import "WXBackgroundImage.h"

@implementation WXBackgroundImage

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return @{
             @"title": @"photo_title",
             @"file_url": @"photo_file_url",
             @"url": @"photo_url",
             @"ownerName": @"owner_name",
             @"ownerUrl": @"owner_url",
             @"width": @"width",
             @"height": @"height"
            };
}

@end
