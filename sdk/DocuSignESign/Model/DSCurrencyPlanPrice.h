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


#import "DSCreditCardTypes.h"


@protocol DSCurrencyPlanPrice
@end

@interface DSCurrencyPlanPrice : DSObject

/* Specifies the ISO currency code for the account. [optional]
 */
@property(nonatomic) NSString* currencyCode;
/* Specifies the currency symbol for the account. [optional]
 */
@property(nonatomic) NSString* currencySymbol;
/*  [optional]
 */
@property(nonatomic) NSString* perSeatPrice;

@property(nonatomic) DSCreditCardTypes* supportedCardTypes;
/* The support incident fee charged for each support incident. [optional]
 */
@property(nonatomic) NSString* supportIncidentFee;
/* The support plan fee charged for this plan. [optional]
 */
@property(nonatomic) NSString* supportPlanFee;

@end
