//
//  WXDailyForecast.m
//  SimpleWeather
//
//  Created by Alejandro Juárez Robles on 5/12/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import "WXDailyForecast.h"

@implementation WXDailyForecast

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSMutableDictionary *paths = [[super JSONKeyPathsByPropertyKey] mutableCopy];
    paths[@"tempHigh"] = @"temp.max";
    paths[@"tempLow"] = @"temp.min";
    return paths;
}

@end
