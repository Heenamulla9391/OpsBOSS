//
//  AppDelegate.h
//  OpsBOSS
//
//  Created by nWorks Technologies on 01/03/17.
//  Copyright © 2017 nWorks Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

