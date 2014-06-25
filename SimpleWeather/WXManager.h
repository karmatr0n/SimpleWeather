//
//  WXManager.h
//  SimpleWeather
//
//  Created by Alejandro Juárez Robles on 5/12/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;

#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

#import "WXCondition.h"
#import "WXBackgroundImage.h"

@interface WXManager : NSObject <CLLocationManagerDelegate>

+ (instancetype)sharedManager;

@property (nonatomic, strong, readonly) CLLocation *currentLocation;
@property (nonatomic, strong, readonly) WXCondition *currentCondition;
@property (nonatomic, strong, readwrite) WXBackgroundImage *currentBackgroundImage;
@property (nonatomic, strong, readonly) NSArray *hourlyForecast;
@property (nonatomic, strong, readonly) NSArray *dailyForecast;

- (void)findCurrentLocation;

@end
