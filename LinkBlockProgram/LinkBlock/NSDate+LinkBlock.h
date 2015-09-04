//
//  NSDate+LinkBlock.h
//  LinkBlockProgram
//
//  Created by NOVO on 15/9/3.
//  Copyright (c) 2015年 QuXingYi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject(NSDateLinkBlock)

@property (nonatomic,copy) NSString*        (^dateToStrWithFormate)(NSString* formateStr);

#pragma mark - Calculating the difference the two dates（计算日期差值
@property (nonatomic,copy) NSInteger        (^dateMinusYear)(NSDate* date);
@property (nonatomic,copy) NSInteger        (^dateMinusMonth)(NSDate* date);
@property (nonatomic,copy) NSInteger        (^dateMinusDay)(NSDate* date);
@property (nonatomic,copy) NSInteger        (^dateMinusHour)(NSDate* date);
@property (nonatomic,copy) NSInteger        (^dateMinusMinut)(NSDate* date);
@property (nonatomic,copy) NSInteger        (^dateMinusSec)(NSDate* date);

#pragma mark - The date object increased time （计算日期差值
@property (nonatomic,copy) NSDate*          (^dateAddTimeInterval)(NSTimeInterval timeInterval);
@property (nonatomic,copy) NSDate*          (^dateAddYear)(NSInteger year);
@property (nonatomic,copy) NSDate*          (^dateAddMonth)(NSInteger month);
@property (nonatomic,copy) NSDate*          (^dateAddDay)(NSInteger day);
@property (nonatomic,copy) NSDate*          (^dateAddHour)(NSInteger hour);
@property (nonatomic,copy) NSDate*          (^dateAddMinut)(NSInteger minut);
@property (nonatomic,copy) NSDate*          (^dateAddSec)(NSInteger sec);



@end