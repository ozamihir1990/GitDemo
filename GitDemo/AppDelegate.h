//
//  AppDelegate.h
//  GitDemo
//
//  Created by prasanna on 2/20/17.
//  Copyright © 2017 Ashadeep. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

