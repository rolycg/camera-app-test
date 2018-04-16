//
//  AppDelegate.h
//  Camera App
//
//  Created by Rolando Cruz on 4/16/18.
//  Copyright © 2018 Rolando Cruz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

