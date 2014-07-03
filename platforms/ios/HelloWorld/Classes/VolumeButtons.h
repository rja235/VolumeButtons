//
//  VolumeButtons.h
//  VolumeButtons
//
//  Created by Ryan Allen on 6/20/14.
//
//


#import <Foundation/Foundation.h>

typedef void (^ButtonBlock)();

@interface VolumeButtons : NSObject
{
    float launchVolume;
    BOOL hadToLowerVolume;
    BOOL hadToRaiseVolume;
    
    BOOL _isStealingVolumeButtons;
    BOOL _suspended;
    UIView *_volumeView;
}

@property (nonatomic, copy) ButtonBlock upBlock;
@property (nonatomic, copy) ButtonBlock downBlock;
@property (readonly) float launchVolume;

-(void)startStealingVolumeButtonEvents;
-(void)stopStealingVolumeButtonEvents;

@end