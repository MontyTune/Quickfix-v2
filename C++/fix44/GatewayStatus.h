#ifndef FIX44_GATEWAYSTATUS_H
#define FIX44_GATEWAYSTATUS_H

#include "Message.h"

namespace FIX44
{

  class GatewayStatus : public Message
  {
  public:
    GatewayStatus() : Message(MsgType()) {}
    GatewayStatus(const FIX::Message& m) : Message(m) {}
    GatewayStatus(const Message& m) : Message(m) {}
    GatewayStatus(const GatewayStatus& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("UAT"); }

    GatewayStatus(
      const FIX::GatewayStatusReqId& aGatewayStatusReqId )
    : Message(MsgType())
    {
      set(aGatewayStatusReqId);
    }

    FIELD_SET(*this, FIX::GatewayStatusReqId);
    FIELD_SET(*this, FIX::UnsolicitedIndicator);
    FIELD_SET(*this, FIX::NoGatewayStatus);
    class NoGatewayStatus: public FIX::Group
    {
    public:
    NoGatewayStatus() : FIX::Group(18201,18202,FIX::message_order(18202,207,18203,18204,58,0)) {}
      FIELD_SET(*this, FIX::GatewayStatus);
      FIELD_SET(*this, FIX::SecurityExchange);
      FIELD_SET(*this, FIX::ExchangeGateway);
      FIELD_SET(*this, FIX::SubExchangeGateway);
      FIELD_SET(*this, FIX::Text);
    };
  };

}

#endif
