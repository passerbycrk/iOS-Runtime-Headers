/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class CLLocation, MKAddressBookAddress, NSString, UIImage;



@interface MKSearchResult : MKSearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation>
{
    NSString *_singleLineAddress;
    NSString *_singleLineAddressWithHomeCountry;
    BOOL _hasMergedFormattedAddress;
    NSString *_resultIdentifier;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    CLLocation *_location;
    BOOL _originatedFromHistory;
    MKAddressBookAddress *_address;
    UIImage *_adIcon;
    NSString *_routeDistanceSummary;
}

@property(retain) MKAddressBookAddress *address;
@property(readonly) NSString *resultIdentifier;
@property(readonly) BOOL isAd;
@property(readonly) NSString *adLine1;
@property(readonly) NSString *adLine2;
@property(readonly) BOOL needsReverseGeocodeCheck;
@property(readonly) BOOL performsReverseGeocodeCheck;
@property(readonly) BOOL isDynamicCurrentLocation;
@property(readonly) NSString *displayTitle;
@property(readonly) NSString *infoCardTitle;
@property(readonly) NSString *locationTitle;
@property(readonly) NSString *defaultName;
@property(readonly) NSString *debugDescription;
@property(readonly) CLLocation *location;
@property(readonly) BOOL requiresPanoramaIDCheck;
@property(retain) NSString *panoramaID;
@property(retain) NSString *routeDistanceSummary;
@property(getter=isReverseGeocoded) BOOL reverseGeocoded;
@property(readonly) BOOL hasStructuredAddress;
@property(retain) NSString *author;
@property(getter=isUserCreated,readonly) BOOL userCreated;
@property(readonly) UIImage *adIcon;
@property BOOL originatedFromHistory;
@property ? coordinate;

+ (id)searchResultWithDictionaryRepresentation:(id)arg1;
+ (id)currentLocationSearchResultName;
+ (id)customLocationSearchResultName;
+ (id)defaultNameForType:(NSInteger)arg1;
+ (id)formatStringForMapsURLWithName;
+ (id)formatStringForMapsURLWithLatLon;
+ (id)searchResultWithDictionaryRepresentation:(id)arg1 fileVersion:(NSInteger)arg2;
+ (id)currentLocationSearchResult;
+ (id)customSearchResultWithCoordinate:(struct { double x1; double x2; })arg1;
+ (NSInteger)_indexToInsertResultWithDistance:(double)arg1 distanceDictionary:(id)arg2 sortedArray:(id)arg3;
+ (id)distanceSortedResults:(id)arg1 fromPoint:(struct CGPoint { float x1; float x2; })arg2;

- (id)initWithGMMSearchResult:(id)arg1 type:(NSInteger)arg2 originalQuery:(id)arg3;
- (id)adIcon;
- (void)writeTo:(id)arg1;
- (id)singleLineAddressWithHomeCountry;
- (id)singleLineAddress;
- (BOOL)hasAccurateAddress;
- (id)initWithSearchResult:(id)arg1 address:(id)arg2;
- (BOOL)isAd;
- (BOOL)isUserCreated;
- (BOOL)isAddressBookResult;
- (id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2;
- (void)setAddress:(id)arg1;
- (BOOL)hasStructuredAddress;
- (id)routeDistanceSummary;
- (id)displayTitle;
- (BOOL)needsReverseGeocodeCheck;
- (id)adLine2;
- (id)adLine1;
- (id)resultIdentifier;
- (id)initWithSearchResult:(id)arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (id)initWithSearchResult:(id)arg1;
- (id)initWithSearchResult:(id)arg1 type:(NSInteger)arg2;
- (BOOL)isLocationEqual:(id)arg1 withinDistance:(double)arg2;
- (id)copyWithType:(NSInteger)arg1 name:(id)arg2 mapType:(NSUInteger)arg3 zoomLevel:(NSUInteger)arg4;
- (id)copyWithType:(NSInteger)arg1;
- (id)copyWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1 includeStreetView:(BOOL)arg2 includeAddress:(BOOL)arg3;
- (BOOL)isDynamicCurrentLocation;
- (id)defaultName;
- (void)didUpdateAddress;
- (id)_formattedAddress;
- (id)copyWithLongLat:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1 preserveLocationInfo:(BOOL)arg2;
- (void)setAddressFromSearchResult:(id)arg1;
- (void)setAddressFromPlacemark:(id)arg1;
- (void)becomeDefaultTypeIfCustomType;
- (id)locationTitle;
- (id)infoCardTitle;
- (void)_parseAndMergeFormattedAddress;
- (id)_formattedAddressDictionary;
- (id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1;
- (id)_addressWithHomeCountry:(BOOL)arg1;
- (id)addressDictionary;
- (id)_longLatString;
- (id)routeLocation;
- (BOOL)isInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (BOOL)looksLikeBusiness;
- (void)resetMetadata;
- (BOOL)isReverseGeocoded;
- (void)setReverseGeocoded:(BOOL)arg1;
- (void)becomeDefaultTypeIfAdType;
- (void)setRouteDistanceSummary:(id)arg1;
- (BOOL)originatedFromHistory;
- (void)setOriginatedFromHistory:(BOOL)arg1;
- (BOOL)performsReverseGeocodeCheck;
- (BOOL)requiresPanoramaIDCheck;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (id)subtitle;
- (BOOL)isValid;
- (id)initWithType:(NSInteger)arg1;
- (void)setName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mapsURL;
- (NSInteger)color;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)title;
- (id)name;
- (void)dealloc;
- (id)description;
- (id)location;
- (BOOL)readFrom:(id)arg1;
- (id)author;
- (id)address;
- (id)debugDescription;
- (struct { double x1; double x2; })coordinate;

@end