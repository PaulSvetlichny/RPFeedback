//
//  RPFeedbackClient.h
//  AFTesting
//
//  Created by Plumb on 8/28/16.
//  Copyright © 2016 docureach.rp. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>
#import <CoreLocation/CoreLocation.h>
#import "Feedback.h"
#import "RPLocation.h"

@interface RPFeedbackClient : AFHTTPSessionManager

///------------------------------------------------
/// @name Initialization
///------------------------------------------------

/**
 * +sharedClient is the applications client to
 * connect with the servers app wide.
 */
+ (RPFeedbackClient *)sharedClientWithKey:(NSString *)key
                                   secret:(NSString *)secret;

///------------------------------------------------
/// @name Requests
///------------------------------------------------

/**
 * -POSTFeedback:completion: posts
 * the user review to ReviewPush servers.
 *
 * @required params: see docs
 * at http://developer.reviewpush.com/REST_API/Company_API/Feedback.html
 */
- (void)POSTFeedback:(Feedback *)review
          completion:(void (^)(BOOL success, Feedback *feedBack, NSDictionary *reviewSiteLinks, NSString *errorString))completionBlock;

/**
 * -GETLocationsNearLocation:completion requests
 * all locations for this company near the supplied
 * location. If no location is supplied, all company
 * level locations will be returned.
 */
- (void)GETLocationsNearLocation:(CLLocation *)location
                      completion:(void(^)(BOOL success,
                                          NSArray *locations,
                                          NSString *errorMessage))completionBlock;

/**
 * -GETLocation:Completion: gets the
 * supplied location. The only
 * required property on location
 * is identifier.
 */
- (void)GETLocation:(RPLocation *)location
         completion:(void(^)(BOOL success,
                             RPLocation *location,
                             NSString *errorMessage))completionBlock;



@end
