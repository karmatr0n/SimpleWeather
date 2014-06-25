//
//  WXClient.h
//  SimpleWeather
//
//  Created by Alejandro Juárez Robles on 5/12/14.
//  Copyright (c) 2014 MonsterLabs. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
#import <ReactiveCocoa/ReactiveCocoa/ReactiveCocoa.h>

@interface WXClient : NSObject

- (RACSignal *)fetchJSONFromURL:(NSURL *)url;
- (RACSignal *)fetchCurrentConditionsForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchHourlyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchDailyForecastForLocation:(CLLocationCoordinate2D)coordinate;
- (RACSignal *)fetchBackgroundImageForLocation:(CLLocationCoordinate2D)coordinate;
@end
