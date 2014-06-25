//
//  WXBackgroundImage.h
//  SimpleWeather
//
//  Created by Alejandro Juárez Robles on 5/30/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import <Mantle.h>

@interface WXBackgroundImage : MTLModel <MTLJSONSerializing>


@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *url;
@property (nonatomic, strong) NSString *file_url;
@property (nonatomic, strong) NSString *ownerName;
@property (nonatomic, strong) NSString *ownerUrl;
@property (nonatomic, strong) NSNumber *width;
@property (nonatomic, strong) NSNumber *height;

@end
