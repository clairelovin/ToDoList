//
//  ToDoItem.h
//  ToDoList
//
//  Created by clairelovin on 15/10/28.
//  Copyright © 2015年 clairelovin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
