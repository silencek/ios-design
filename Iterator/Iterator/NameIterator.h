//
//  NameIterator.h
//  Iterator
//
//  Created by 杨晴贺 on 8/25/16.
//  Copyright © 2016 silence. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iterator.h"

@interface NameIterator : NSObject<Iterator>

@property (nonatomic,copy) NSMutableArray *array ;

@property (nonatomic,assign) NSInteger index ;

@end
