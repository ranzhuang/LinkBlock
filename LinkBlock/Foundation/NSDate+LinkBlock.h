//
//  NSDate+LinkBlock.h
//  LinkBlockProgram
//
//  Created by NOVO on 15/9/3.
//  Copyright (c) 2015年 NOVO. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NSDateNew ([NSDate date])
@interface NSObject(NSDateLinkBlock)
/** 日期转字符串 */
@property (nonatomic,copy,readonly) NSString*        (^dateToStrWithFormat)(NSString* formatStr);
@property (nonatomic,copy,readonly) NSTimeInterval   (^dateTimeIntervalSince1970)();
@property (nonatomic,copy,readonly) NSDateComponents*(^dateComponentsAll)();

#pragma mark - 获取日期项的值
@property (nonatomic,copy,readonly) NSInteger         (^dateYear)();
@property (nonatomic,copy,readonly) NSInteger         (^dateMonth)();
@property (nonatomic,copy,readonly) NSInteger         (^dateDay)();
@property (nonatomic,copy,readonly) NSInteger         (^dateHour)();
@property (nonatomic,copy,readonly) NSInteger         (^dateMinut)();
@property (nonatomic,copy,readonly) NSInteger         (^dateSec)();

#pragma mark - 计算年月日时分秒的差
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusYear)(NSDate* date);
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusMonth)(NSDate* date);
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusDay)(NSDate* date);
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusHour)(NSDate* date);
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusMinut)(NSDate* date);
@property (nonatomic,copy,readonly) NSInteger        (^dateMinusSec)(NSDate* date);

#pragma mark - 增/减年月日时分秒
@property (nonatomic,copy,readonly) NSDate*          (^dateAddTimeInterval)(NSTimeInterval timeInterval);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddYear)(NSInteger year);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddMonth)(NSInteger month);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddDay)(NSInteger day);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddHour)(NSInteger hour);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddMinut)(NSInteger minut);
@property (nonatomic,copy,readonly) NSDate*          (^dateAddSec)(NSInteger sec);

#pragma mark - 设置年月日时分秒
@property (nonatomic,copy,readonly) NSDate*        (^dateSetYear)(NSInteger year);
@property (nonatomic,copy,readonly) NSDate*        (^dateSetMonth)(NSInteger month);
@property (nonatomic,copy,readonly) NSDate*        (^dateSetDay)(NSInteger day);
@property (nonatomic,copy,readonly) NSDate*        (^dateSetHour)(NSInteger hour);
@property (nonatomic,copy,readonly) NSDate*        (^dateSetMinut)(NSInteger minut);
@property (nonatomic,copy,readonly) NSDate*        (^dateSetSec)(NSInteger sec);
/** 获取日期的当天起点时间，相对GMT（格林威尼），24小时制 */
@property (nonatomic,copy,readonly) NSDate*          (^dateDayAtStart)();
/** 获取日期的当天结束时间，相对GMT（格林威尼），24小时制 */
@property (nonatomic,copy,readonly) NSDate*          (^dateDayAtEnd)();
/** 获取当前时区下补充了于GTM（格林威尼）时差后的日期对象 */
@property (nonatomic,copy,readonly) NSDate*          (^dateCurrentZone)();
/** 判断闰年 */
@property (nonatomic,copy,readonly) BOOL             (^dateIsLeapYear)();
/** 判断是否在本日 */
@property (nonatomic,copy,readonly) BOOL             (^dateIsInToday)();
/** 判断是否为本月 */
@property (nonatomic,copy,readonly) BOOL             (^dateIsInMonth)();

@end
