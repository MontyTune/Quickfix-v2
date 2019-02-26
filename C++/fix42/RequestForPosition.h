#ifndef FIX42_REQUESTFORPOSITION_H
#define FIX42_REQUESTFORPOSITION_H

#include "Message.h"

namespace FIX42
{

  class RequestForPosition : public Message
  {
  public:
    RequestForPosition() : Message(MsgType()) {}
    RequestForPosition(const FIX::Message& m) : Message(m) {}
    RequestForPosition(const Message& m) : Message(m) {}
    RequestForPosition(const RequestForPosition& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("UAN"); }

    RequestForPosition(
      const FIX::PosReqId& aPosReqId,
      const FIX::PosReqType& aPosReqType )
    : Message(MsgType())
    {
      set(aPosReqId);
      set(aPosReqType);
    }

    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::PosReqId);
    FIELD_SET(*this, FIX::PosReqType);
    FIELD_SET(*this, FIX::SubscriptionRequestType);
    FIELD_SET(*this, FIX::IncludeHistoricalFills);
    FIELD_SET(*this, FIX::BrokerID);
    FIELD_SET(*this, FIX::CompanyID);
  };

}

#endif
