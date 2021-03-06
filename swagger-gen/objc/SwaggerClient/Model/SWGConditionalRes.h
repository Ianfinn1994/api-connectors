#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Bybit API
* ## REST API for the Bybit Exchange. Base URI: [https://api-testnet.bybit.com]  
*
* OpenAPI spec version: 1.0.0
* Contact: support@bybit.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGConditionalRes
@end

@interface SWGConditionalRes : SWGObject


@property(nonatomic) NSString* stopOrderId;

@property(nonatomic) NSNumber* userId;

@property(nonatomic) NSString* stopOrderStatus;

@property(nonatomic) NSString* symbol;

@property(nonatomic) NSString* side;

@property(nonatomic) NSString* orderType;

@property(nonatomic) NSNumber* price;

@property(nonatomic) NSNumber* qty;

@property(nonatomic) NSString* timeInForce;

@property(nonatomic) NSString* stopOrderType;

@property(nonatomic) NSNumber* basePrice;

@property(nonatomic) NSNumber* stopPx;

@property(nonatomic) NSString* orderLinkId;

@property(nonatomic) NSString* createdAt;

@property(nonatomic) NSString* updatedAt;

@end
