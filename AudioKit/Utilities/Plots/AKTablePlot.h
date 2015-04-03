//
//  AKTablePlot.h
//  AudioKit
//
//  Created by Aurelius Prochazka on 2/9/15.
//  Copyright (c) 2015 Aurelius Prochazka. All rights reserved.
//

#import "AKTable.h"

#if TARGET_OS_IPHONE
@import UIKit;
/// Plots the values of the given table
IB_DESIGNABLE
@interface AKTablePlot : UIView
#elif TARGET_OS_MAC
@import Cocoa;
/// Plots the values of the given table
IB_DESIGNABLE
@interface AKTablePlot : NSView
#endif

/// Creates the table plot
/// @param frame Bounding frame for the plot
/// @param table Table to plot
- (instancetype)initWithFrame:(CGRect)frame table:(AKTable *)table;

@property AKTable *table;

@end
