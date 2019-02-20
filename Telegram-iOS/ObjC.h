//
//  ObjC.h
//  Telegram-iOS
//
//  Created by Dmitry Shelonin on 20/02/2019.
//  Copyright © 2019 Telegram. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ObjC : NSObject
+ (BOOL)catchException:(void(^)(void))tryBlock error:(__autoreleasing NSError **)error;
@end

NS_ASSUME_NONNULL_END
