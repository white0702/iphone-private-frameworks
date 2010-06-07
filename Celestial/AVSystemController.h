/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <Foundation/NSObject.h>


@interface AVSystemController : NSObject {
	AVSystemControllerPrivate* _priv;
}
+(void)initialize;
+(id)sharedAVSystemController;
-(id)init;
-(void)dealloc;
-(BOOL)changeActiveCategoryVolumeBy:(float)by fallbackCategory:(id)category resultVolume:(float*)volume affectedCategory:(id*)category4;
-(BOOL)changeActiveCategoryVolumeBy:(float)by;
-(BOOL)setActiveCategoryVolumeTo:(float)to fallbackCategory:(id)category resultVolume:(float*)volume affectedCategory:(id*)category4;
-(BOOL)setActiveCategoryVolumeTo:(float)to;
-(BOOL)getActiveCategoryVolume:(float*)volume andName:(id*)name fallbackCategory:(id)category;
-(BOOL)getActiveCategoryVolume:(float*)volume andName:(id*)name;
-(BOOL)changeActiveCategoryVolumeBy:(float)by forRoute:(id)route andDeviceIdentifier:(id)identifier;
-(BOOL)setActiveCategoryVolumeTo:(float)to forRoute:(id)route andDeviceIdentifier:(id)identifier;
-(BOOL)getActiveCategoryVolume:(float*)volume andName:(id*)name forRoute:(id)route andDeviceIdentifier:(id)identifier;
-(BOOL)toggleActiveCategoryMuted;
-(BOOL)toggleActiveCategoryMutedForRoute:(id)route andDeviceIdentifier:(id)identifier;
-(BOOL)getActiveCategoryMuted:(BOOL*)muted;
-(BOOL)getActiveCategoryMuted:(BOOL*)muted forRoute:(id)route andDeviceIdentifier:(id)identifier;
-(BOOL)changeVolumeBy:(float)by forCategory:(id)category;
-(BOOL)setVolumeTo:(float)to forCategory:(id)category;
-(BOOL)getVolume:(float*)volume forCategory:(id)category;
-(id)routeForCategory:(id)category;
-(id)volumeCategoryForAudioCategory:(id)audioCategory;
-(id)pickableRoutesForCategory:(id)category;
-(BOOL)currentRouteHasVolumeControl;
-(id)attributeForKey:(id)key;
-(BOOL)setAttribute:(id)attribute forKey:(id)key error:(id*)error;
-(void)makeError:(id*)error withDescription:(id)description code:(long)code;
-(BOOL)okToNotifyFromThisThread;
-(void)handleServerDied;
-(void)postFullMuteDidChangeNotification:(void*)postFullMute;
-(void)postEffectiveVolumeNotification:(void*)notification;
@end

