#ifndef FIX44_GATEWAYSTATUSREQUEST_H
#define FIX44_GATEWAYSTATUSREQUEST_H

#include "Message.h"

namespace FIX44
{

  class GatewayStatusRequest : public Message
  {
  public:
    GatewayStatusRequest() : Message(MsgType()) {}
    GatewayStatusRequest(const FIX::Message& m) : Message(m) {}
    GatewayStatusRequest(const Message& m) : Message(m) {}
    GatewayStatusRequest(const GatewayStatusRequest& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("UAR"); }

    GatewayStatusRequest(
      const FIX::GatewayStatusReqId& aGatewayStatusReqId,
      const FIX::SubscriptionRequestType& aSubscriptionRequestType )
    : Message(MsgType())
    {
      set(aGatewayStatusReqId);
      set(aSubscriptionRequestType);
    }

    FIELD_SET(*this, FIX::GatewayStatusReqId);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
  };

}

#endif
