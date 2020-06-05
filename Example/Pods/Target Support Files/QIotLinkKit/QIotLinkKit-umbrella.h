#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "NSObject+additions.h"
#import "QCSocketCover.h"
#import "WCRequestAction.h"
#import "WCRequestObj.h"
#import "QCAccountSet.h"
#import "QCDeviceSet.h"
#import "QCFamilySet.h"
#import "QCMessageSet.h"
#import "QCParts.h"
#import "QCAPISets.h"
#import "ESPAES.h"
#import "ESPDataCode.h"
#import "ESPDatumCode.h"
#import "ESPGuideCode.h"
#import "ESPTouchDelegate.h"
#import "ESPTouchGenerator.h"
#import "ESPTouchResult.h"
#import "ESPTouchTask.h"
#import "ESPTouchTaskParameter.h"
#import "ESPUDPSocketClient.h"
#import "ESPUDPSocketServer.h"
#import "ESPVersionMacro.h"
#import "ESP_ByteUtil.h"
#import "ESP_CRC8.h"
#import "ESP_NetUtil.h"
#import "ESP_WifiUtil.h"
#import "TCSocket.h"
#import "GCDAsyncSocket.h"
#import "GCDAsyncUdpSocket.h"
#import "NSObject+so.h"
#import "getgateway.h"
#import "route.h"
#import "WCMacros.h"
#import "QCAddDevice.h"
#import "QCDeviceCenter.h"
#import "QCObject.h"
#import "NSString+Extension.h"
#import "QCMacros.h"
#import "QCUserManage.h"
#import "QCFoundation.h"
#import "QCRequestBuilder.h"
#import "QCRequestClient.h"
#import "QCServices.h"
#import "QCSocketManager.h"
#import "QCWebSocket.h"
#import "WCAppEnvironment.h"
#import "WCRequestObject.h"

FOUNDATION_EXPORT double QIotLinkKitVersionNumber;
FOUNDATION_EXPORT const unsigned char QIotLinkKitVersionString[];

