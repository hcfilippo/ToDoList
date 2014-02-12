//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by hcfilippo on 14-2-13.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
