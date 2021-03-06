#import <Foundation/Foundation.h>

#import "SpectacleCalculationResult.h"
#import "SpectacleWindowPositionManager.h"

@interface SpectacleWindowPositionCalculator : NSObject

+ (SpectacleCalculationResult *)calculateWindowRect: (CGRect)windowRect visibleFrameOfScreen: (CGRect)visibleFrameOfScreen action: (SpectacleWindowAction)action;

+ (SpectacleCalculationResult *)calculateResizedWindowRect: (CGRect)windowRect visibleFrameOfScreen: (CGRect)visibleFrameOfScreen sizeOffset: (CGFloat)sizeOffset action: (SpectacleWindowAction)action;

@end
