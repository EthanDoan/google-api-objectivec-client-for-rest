// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Spanner API (spanner/v1)
// Description:
//   Cloud Spanner is a managed, mission-critical, globally consistent and
//   scalable relational database service.
// Documentation:
//   https://cloud.google.com/spanner/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: Administer your Spanner databases
 *
 *  Value "https://www.googleapis.com/auth/spanner.admin"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSpannerAdmin;
/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSpannerCloudPlatform;
/**
 *  Authorization scope: View and manage the contents of your Spanner databases
 *
 *  Value "https://www.googleapis.com/auth/spanner.data"
 */
GTLR_EXTERN NSString * const kGTLRAuthScopeSpannerData;

// ----------------------------------------------------------------------------
//   GTLRSpannerService
//

/**
 *  Service for executing Cloud Spanner API queries.
 *
 *  Cloud Spanner is a managed, mission-critical, globally consistent and
 *  scalable relational database service.
 */
@interface GTLRSpannerService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRSpannerQuery.h. The query can the be sent with GTLRService's execute
// methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END
