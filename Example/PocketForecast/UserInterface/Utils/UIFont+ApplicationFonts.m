////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2015, Typhoon Framework Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////




#import "UIFont+ApplicationFonts.h"


@implementation UIFont (ApplicationFonts)

+ (UIFont*)applicationFontOfSize:(CGFloat)size
{
    return [UIFont fontWithName:@"Varela Round" size:size];
}

+ (UIFont*)temperatureFontOfSize:(CGFloat)size
{
    return [UIFont fontWithName:@"Questrial" size:size];
}


@end