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


#import "DSMatchBox.h"
#import "DSNameValue.h"


@protocol DSDocument
@end

@interface DSDocument : DSObject

/* Reserved: TBD [optional]
 */
@property(nonatomic) NSString* applyAnchorTabs;
/*  [optional]
 */
@property(nonatomic) NSString* display;
/* The document’s bytes. This field can be used to include a base64 version of the document bytes within an envelope definition instead of sending the document using a multi-part HTTP request. The maximum document size is smaller if this field is used due to the overhead of the base64 encoding. [optional]
 */
@property(nonatomic) NSString* documentBase64;
/*  [optional]
 */
@property(nonatomic) NSArray<DSNameValue>* documentFields;
/*  [optional]
 */
@property(nonatomic) NSString* documentGroup;
/* Specifies the document ID number that the tab is placed on. This must refer to an existing Document's ID attribute. [optional]
 */
@property(nonatomic) NSString* documentId;
/* When set to **true**, the document is been already encrypted by the sender for use with the DocuSign Key Manager Security Appliance.   [optional]
 */
@property(nonatomic) NSString* encryptedWithKeyManager;
/* The file extension type of the document. If the document is not a PDF it is converted to a PDF.   [optional]
 */
@property(nonatomic) NSString* fileExtension;
/*  [optional]
 */
@property(nonatomic) NSString* fileFormatHint;
/*  [optional]
 */
@property(nonatomic) NSString* includeInDownload;
/* Matchboxes define areas in a document for document matching when you are creating envelopes. They are only used when you upload and edit a template.   A matchbox consists of 5 elements:  * pageNumber - The document page number  on which the matchbox will appear.  * xPosition - The x position of the matchbox on a page.  * yPosition - The y position of the matchbox on a page. * width - The width of the matchbox.  * height - The height of the matchbox.   [optional]
 */
@property(nonatomic) NSArray<DSMatchBox>* matchBoxes;
/*  [optional]
 */
@property(nonatomic) NSString* name;
/*  [optional]
 */
@property(nonatomic) NSString* order;
/*  [optional]
 */
@property(nonatomic) NSString* pages;
/*  [optional]
 */
@property(nonatomic) NSString* password;
/* The file id from the cloud storage service where the document is located. This information is returned using [ML:GET /folders] or [ML:/folders/{folderid}].  [optional]
 */
@property(nonatomic) NSString* remoteUrl;
/*  [optional]
 */
@property(nonatomic) NSString* signerMustAcknowledge;
/* When set to **true**, the sender cannot change any attributes of the recipient. Used only when working with template recipients.  [optional]
 */
@property(nonatomic) NSString* templateLocked;
/* When set to **true**, the sender may not remove the recipient. Used only when working with template recipients. [optional]
 */
@property(nonatomic) NSString* templateRequired;
/* When set to **true**, PDF form field data is transformed into document tab values when the PDF form field name matches the DocuSign custom tab tabLabel. The resulting PDF form data is also returned in the PDF meta data when requesting the document PDF. See the [ML:Transform PDF Fields] section for more information about how fields are transformed into DocuSign tabs.  [optional]
 */
@property(nonatomic) NSString* transformPdfFields;
/*  [optional]
 */
@property(nonatomic) NSString* uri;

@end
