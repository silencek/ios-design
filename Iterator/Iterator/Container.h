//
//  Container.h
//  Iterator
//
//  Created by 杨晴贺 on 8/25/16.
//  Copyright © 2016 silence. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iterator.h"

@protocol Container <NSObject>

- (id<Iterator>)getIterator ;

@end
