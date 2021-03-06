#import <Foundation/Foundation.h>
#import "DSObject.h"

/**
* DocuSign REST API
* The DocuSign REST API provides you with a powerful, convenient, and simple Web services API for interacting with DocuSign.
*
* OpenAPI spec version: v2
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "DSAddOn.h"
#import "DSFeatureSet.h"
#import "DSSeatDiscount.h"


@protocol DSAccountBillingPlan
@end

@interface DSAccountBillingPlan : DSObject

/* Reserved: [optional]
 */
@property(nonatomic) NSArray<DSAddOn>* addOns;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* canCancelRenewal;
/* When set to **true**, specifies that you can upgrade the account through the API. [optional]
 */
@property(nonatomic) NSString* canUpgrade;
/* Specifies the ISO currency code for the account. [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* When set to **true**, then customer support is provided as part of the account plan. [optional]
 */
@property(nonatomic) NSString* enableSupport;
/* The number of seats (users) included. [optional]
 */
@property(nonatomic) NSString* includedSeats;
/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* incrementalSeats;
/*  [optional]
 */
@property(nonatomic) NSString* isDowngrade;
/*  Any other percentage discount for the plan.  [optional]
 */
@property(nonatomic) NSString* otherDiscountPercent;
/*  [optional]
 */
@property(nonatomic) NSString* paymentCycle;
/*  The payment method used with the plan. The possible values are: CreditCard, PurchaseOrder, Premium, or Freemium.  [optional]
 */
@property(nonatomic) NSString* paymentMethod;
/*  [optional]
 */
@property(nonatomic) NSString* perSeatPrice;
/* Identifies the type of plan. Examples include Business, Corporate, Enterprise, Free. [optional]
 */
@property(nonatomic) NSString* planClassification;
/* A complex type that sets the feature sets for the account. It contains the following information (all string content):  * currencyFeatureSetPrices - Contains the currencyCode and currencySymbol for the alternate currency values for envelopeFee, fixedFee, seatFee that are configured for this plan feature set. * envelopeFee - An incremental envelope cost for plans with envelope overages (when isEnabled=true). * featureSetId - A unique ID for the feature set. * fixedFee - A one-time fee associated with the plan (when isEnabled=true). * isActive - Specifies whether the feature set is actively set as part of the plan. * isEnabled - Specifies whether the feature set is actively enabled as part of the plan. * name - The name of the feature set. * seatFee - An incremental seat cost for seat-based plans (when isEnabled=true).  [optional]
 */
@property(nonatomic) NSArray<DSFeatureSet>* planFeatureSets;
/*  [optional]
 */
@property(nonatomic) NSString* planId;
/* The name of the Billing Plan. [optional]
 */
@property(nonatomic) NSString* planName;
/* The renewal status for the account. The acceptable values are:  * auto: The account automatically renews. * queued_for_close: Account will be closed at the billingPeriodEndDate. * queued_for_downgrade: Account will be downgraded at the billingPeriodEndDate. [optional]
 */
@property(nonatomic) NSString* renewalStatus;
/*  A complex type that contains any seat discount information.  Values are: BeginSeatCount, EndSeatCount, and SeatDiscountPercent.   [optional]
 */
@property(nonatomic) NSArray<DSSeatDiscount>* seatDiscounts;
/* The support incident fee charged for each support incident. [optional]
 */
@property(nonatomic) NSString* supportIncidentFee;
/* The support plan fee charged for this plan. [optional]
 */
@property(nonatomic) NSString* supportPlanFee;

@end
