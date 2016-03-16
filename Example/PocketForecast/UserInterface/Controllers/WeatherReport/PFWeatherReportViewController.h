////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2015, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////




#import <Foundation/Foundation.h>
#import "PFWeatherClient.h"
#import "PFWeatherReportView.h"

@class PFWeatherReport;
@protocol PFWeatherReportDao;
@protocol PFCityDao;
@class PFTheme;
@class PFRootViewController;


@interface PFWeatherReportViewController : UIViewController
{

    PFWeatherReport *_weatherReport;
    NSString *_cityName;
}

@property(nonatomic, strong) PFWeatherReportView *view;

#pragma mark - Injected w/ initializer

@property(nonatomic, strong, readonly) id <PFWeatherClient> weatherClient;
@property(nonatomic, strong, readonly) id <PFWeatherReportDao> weatherReportDao;
@property(nonatomic, strong, readonly) id <PFCityDao> cityDao;
@property(nonatomic, strong) PFRootViewController *(^rootViewControllerProvider)(void);


- (id)initWithView:(PFWeatherReportView *)view weatherClient:(id <PFWeatherClient>)weatherClient
  weatherReportDao:(id <PFWeatherReportDao>)weatherReportDao cityDao:(id <PFCityDao>)cityDao;

@end