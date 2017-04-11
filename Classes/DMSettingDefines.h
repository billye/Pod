//
//  DMSettingDefines.h
//  Pods
//
//  Created by billyye on 2017/4/11.
//
//

#ifndef DMSettingDefines_h
#define DMSettingDefines_h

/**
 * @brief 当前地图的版本
 */
typedef NS_ENUM(NSInteger, DMSettingMapType) {
    DMSettingMapTypeChina = 0,  //国内版地图
    DMSettingMapTypeInternational = 1, //国际版地图
};

/**
 * @brief 当前司机可接单的车型
 */
typedef NS_ENUM(NSInteger, DMSettingBusinessType) {
    DMSettingBusinessTypeLuxury = 1 <<0,  //豪华车
    DMSettingBusinessTypeSpecial = 1 <<1, //专车
    DMSettingBusinessTypeFastCar = 1 <<2, //快车
    DMSettingBusinessTypeTaxi = 1 <<3,    //出租车
    DMSettingBusinessTypeCarpool = 1 <<3, //拼车
};

/**
 * @brief 地图导航类型
 */
typedef NS_ENUM(NSInteger, DMSettingNavAppType) {
    DMSettingNavAppTypeUnknow = 0,
    DMSettingNavAppTypeInternal = 1, //内置地图app导航
    DMSettingNavAppTypeBaiDuMap = 2, //百度地图app导航
    DMSettingNavAppTypeGaoDeMap = 3,//高德地图app导航
    DMSettingNavAppTypeBaiDuNav = 4, //百度导航app导航
    DMSettingNavAppTypeGaoDeNav = 5, //高德导航app导航
};

/**
 * @brief 地图导航方向
 */
typedef NS_ENUM(NSInteger, DMSettingNavDirection) {
    DMSettingNavDirectionFollowCar = 0,  //跟随车头
    DMSettingNavDirectionAlwaysNorth = 1, //始终向北
};

/**
 * @brief 地图导航方向
 */
typedef NS_ENUM(NSInteger, DMSettingNavNightMode) {
    DMSettingNavNightModeAuto = 0,  //自动
    DMSettingNavNightModeAlwaysDaytime = 1, //始终日间
    DMSettingNavNightModeAlwaysNight = 2,  //始终夜间
};


#endif /* DMSettingDefines_h */
