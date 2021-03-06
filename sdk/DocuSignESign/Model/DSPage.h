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


#import "DSErrorDetails.h"


@protocol DSPage
@end

@interface DSPage : DSObject

/* The number of dots per inch used for the page image. [optional]
 */
@property(nonatomic) NSString* dpi;

@property(nonatomic) DSErrorDetails* errorDetails;
/* Height of the tab in pixels. [optional]
 */
@property(nonatomic) NSString* height;
/*  [optional]
 */
@property(nonatomic) NSString* imageBytes;
/*  [optional]
 */
@property(nonatomic) NSString* mimeType;
/*  [optional]
 */
@property(nonatomic) NSString* pageId;
/*  [optional]
 */
@property(nonatomic) NSString* sequence;
/* Width of the tab in pixels. [optional]
 */
@property(nonatomic) NSString* width;

@end
