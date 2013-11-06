//
//  PlayingCard.h
//  Matchismo
//
//  Created by LKY on 5/11/13.
//  Copyright (c) 2013 SCB. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
