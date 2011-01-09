/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MLPlaylist, MPGeniusMix;



@interface MPMediaServerPlaylist : NSObject <NSCoding>
{
    MLPlaylist *_playlist;
    MPGeniusMix *_geniusMix;
}


- (id)mediaTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)count;
- (id)name;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)itemsQuery;
- (struct CGImage { }*)geniusMixArtworkOfSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithMLPlaylist:(id)arg1;
- (id)geniusMixRepresentativeArtists;
- (id)isWorkoutMix;
- (id)seedItems;
- (id)playlistAttributes;

@end