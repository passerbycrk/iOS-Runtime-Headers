/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisFaceSuggestion : NSObject {
    BOOL  _confirmed;
    NSString * _faceLocalIdentifier;
    BOOL  _isConfirmed;
    NSArray * _matchingFaceLocalIdentifiers;
}

@property (getter=isConfirmed, nonatomic, readonly) BOOL confirmed;
@property (nonatomic, readonly, copy) NSString *faceLocalIdentifier;
@property (nonatomic, readonly, copy) NSArray *matchingFaceLocalIdentifiers;

- (void).cxx_destruct;
- (id)faceLocalIdentifier;
- (id)initWithSuggestionDictionary:(id)arg1;
- (BOOL)isConfirmed;
- (id)matchingFaceLocalIdentifiers;

@end
