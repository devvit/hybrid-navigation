//
//  HBDNavigatorRegistry.h
//  NavigationHybrid
//
//  Created by 李生 on 2021/1/7.
//

#import "HBDNavigator.h"

NS_ASSUME_NONNULL_BEGIN

@interface HBDNavigatorRegistry : NSObject

- (void)registerNavigator:(id<HBDNavigator>)navigator;

- (id<HBDNavigator>)navigatorForAction:(NSString *)action;

- (id<HBDNavigator>)navigatorForLayout:(NSString *)layout;

- (NSArray<id<HBDNavigator>> *) allNavigators;

- (NSArray<NSString *> *) allLayouts;

@end

NS_ASSUME_NONNULL_END
