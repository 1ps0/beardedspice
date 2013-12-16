//
//  MediaStrategyRegistry.h
//  BeardedSpice
//
//  Created by Jose Falcon on 12/15/13.
//  Copyright (c) 2013 Tyler Rhodes / Jose Falcon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MediaStrategy.h"

@interface MediaStrategyRegistry : NSObject
{
    NSMutableArray *availableStrategies;
}

+(id) addDefaultMediaStrategies:(MediaStrategyRegistry *) registry;
+(id) getDefaultRegistry;

-(void) addMediaStrategy:(MediaStrategy *) strategy;
-(void) removeMediaStrategy:(MediaStrategy *) strategy;
-(void) containsMediaStrategy:(MediaStrategy *) strategy;
-(MediaStrategy *) getMediaStrategyForURL:(NSString *) URL;

@end
