//
//  AppDelegate.h
//  day21_iOS_coreDataPractice
//
//  Created by Student P_08 on 08/11/17.
//  Copyright © 2017 pranjal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

