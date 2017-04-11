//
//  DMNavSettingConfig.h
//  Pods
//
//  Created by billyye on 2017/4/11.
//
//

#import <Foundation/Foundation.h>
#import "DMSettingDefines.h"

@interface DMNavSettingConfig : NSObject
@property (nonatomic, assign) DMSettingMapType mapType;
@property (nonatomic, assign) DMSettingBusinessType businessType;
@property (nonatomic, assign) DMSettingNavAppType navAppType;
@property (nonatomic, assign) DMSettingNavDirection navDirection;
@property (nonatomic, assign) DMSettingNavNightMode navNightMode;
@end
