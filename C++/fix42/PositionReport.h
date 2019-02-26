#ifndef FIX42_POSITIONREPORT_H
#define FIX42_POSITIONREPORT_H

#include "Message.h"

namespace FIX42
{

  class PositionReport : public Message
  {
  public:
    PositionReport() : Message(MsgType()) {}
    PositionReport(const FIX::Message& m) : Message(m) {}
    PositionReport(const Message& m) : Message(m) {}
    PositionReport(const PositionReport& m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("UAP"); }

    PositionReport(
      const FIX::PosReqId& aPosReqId,
      const FIX::PosMaintRptId& aPosMaintRptId,
      const FIX::TotalNumPosReports& aTotalNumPosReports,
      const FIX::PosReqType& aPosReqType )
    : Message(MsgType())
    {
      set(aPosReqId);
      set(aPosMaintRptId);
      set(aTotalNumPosReports);
      set(aPosReqType);
    }

    FIELD_SET(*this, FIX::Symbol);
    FIELD_SET(*this, FIX::SecurityType);
    FIELD_SET(*this, FIX::MaturityMonthYear);
    FIELD_SET(*this, FIX::MaturityDay);
    FIELD_SET(*this, FIX::PutOrCall);
    FIELD_SET(*this, FIX::StrikePrice);
    FIELD_SET(*this, FIX::OptAttribute);
    FIELD_SET(*this, FIX::SecurityID);
    FIELD_SET(*this, FIX::SecurityAltID);
    FIELD_SET(*this, FIX::SecurityExchange);
    FIELD_SET(*this, FIX::DeliveryTerm);
    FIELD_SET(*this, FIX::SettlType);
    FIELD_SET(*this, FIX::Account);
    FIELD_SET(*this, FIX::Price);
    FIELD_SET(*this, FIX::StopPx);
    FIELD_SET(*this, FIX::OrderQty);
    FIELD_SET(*this, FIX::MinQty);
    FIELD_SET(*this, FIX::MaxShow);
    FIELD_SET(*this, FIX::Side);
    FIELD_SET(*this, FIX::OrdType);
    FIELD_SET(*this, FIX::OpenClose);
    FIELD_SET(*this, FIX::TimeInForce);
    FIELD_SET(*this, FIX::ContraBroker);
    FIELD_SET(*this, FIX::ExecBroker);
    FIELD_SET(*this, FIX::ExpireDate);
    FIELD_SET(*this, FIX::PassiveAggressive);
    FIELD_SET(*this, FIX::AutoAggressive);
    FIELD_SET(*this, FIX::PosReqId);
    FIELD_SET(*this, FIX::PosMaintRptId);
    FIELD_SET(*this, FIX::TotalNumPosReports);
    FIELD_SET(*this, FIX::PosReqType);
    FIELD_SET(*this, FIX::RealizedPandL);
    FIELD_SET(*this, FIX::LastShares);
    FIELD_SET(*this, FIX::LastPx);
    FIELD_SET(*this, FIX::TrdMatchID);
    FIELD_SET(*this, FIX::LegAllocID);
    FIELD_SET(*this, FIX::AggressorIndicator);
    FIELD_SET(*this, FIX::OrderID);
    FIELD_SET(*this, FIX::ExecID);
    FIELD_SET(*this, FIX::SecondaryExecID);
    FIELD_SET(*this, FIX::ExecRefID);
    FIELD_SET(*this, FIX::ExecTransType);
    FIELD_SET(*this, FIX::OrigExecID);
    FIELD_SET(*this, FIX::TTSessionID);
    FIELD_SET(*this, FIX::Text);
    FIELD_SET(*this, FIX::MultiLegReportingType);
    FIELD_SET(*this, FIX::TransactTime);
    FIELD_SET(*this, FIX::SecuritySubType);
    FIELD_SET(*this, FIX::ClearingAccount);
    FIELD_SET(*this, FIX::LastParPx);
    FIELD_SET(*this, FIX::ExchangeGateway);
    FIELD_SET(*this, FIX::TTAccountType);
    FIELD_SET(*this, FIX::TTUsername);
    FIELD_SET(*this, FIX::ClearingAccount);
    FIELD_SET(*this, FIX::FFT2);
    FIELD_SET(*this, FIX::FFT3);
    FIELD_SET(*this, FIX::ComplianceID);
    FIELD_SET(*this, FIX::Rule80A);
    FIELD_SET(*this, FIX::CustomerOrFirm);
    FIELD_SET(*this, FIX::TradeCondition);
    FIELD_SET(*this, FIX::Currency);
    FIELD_SET(*this, FIX::TradeDate);
    FIELD_SET(*this, FIX::FixingDate);
    FIELD_SET(*this, FIX::SecondaryOrderID);
    FIELD_SET(*this, FIX::UserTag);
    FIELD_SET(*this, FIX::OrderTag);
    FIELD_SET(*this, FIX::TrdType);
    FIELD_SET(*this, FIX::ExchCred);
    FIELD_SET(*this, FIX::TTStrategyEngine);
    FIELD_SET(*this, FIX::RelativePriceType);
    FIELD_SET(*this, FIX::RelativePriceOffset);
    FIELD_SET(*this, FIX::StartDateTime);
    FIELD_SET(*this, FIX::EndDateTime);
    FIELD_SET(*this, FIX::EndDateTimeAction);
    FIELD_SET(*this, FIX::WATType);
    FIELD_SET(*this, FIX::WATValue);
    FIELD_SET(*this, FIX::MGNumRetries);
    FIELD_SET(*this, FIX::MGRetryInterval);
    FIELD_SET(*this, FIX::TriggerPrice);
    FIELD_SET(*this, FIX::TriggerPriceType);
    FIELD_SET(*this, FIX::TriggerQtyType);
    FIELD_SET(*this, FIX::TriggerQtyOperator);
    FIELD_SET(*this, FIX::SyntheticOrdType);
    FIELD_SET(*this, FIX::SyntheticOrdMod);
    FIELD_SET(*this, FIX::HandlInst);
    FIELD_SET(*this, FIX::TriggerQty);
    FIELD_SET(*this, FIX::TrailingOffset);
    FIELD_SET(*this, FIX::TrailingPriceType);
    FIELD_SET(*this, FIX::SlicerIntervalValue);
    FIELD_SET(*this, FIX::SlicerIntervalUnit);
    FIELD_SET(*this, FIX::DurationType);
    FIELD_SET(*this, FIX::DurationValue);
    FIELD_SET(*this, FIX::DurationUnit);
    FIELD_SET(*this, FIX::DurationBeginTime);
    FIELD_SET(*this, FIX::DurationEndTime);
    FIELD_SET(*this, FIX::DisclosedQtyValue);
    FIELD_SET(*this, FIX::DisclosedQtyVariance);
    FIELD_SET(*this, FIX::LeftActionTrigger);
    FIELD_SET(*this, FIX::LeftAction);
    FIELD_SET(*this, FIX::LeftPayupTicks);
    FIELD_SET(*this, FIX::BrokerID);
    FIELD_SET(*this, FIX::CompanyID);
    FIELD_SET(*this, FIX::SecurityAltID_ISIN);
    FIELD_SET(*this, FIX::ExDestination);
    FIELD_SET(*this, FIX::OrderOrigination);
    FIELD_SET(*this, FIX::OrderCapacity);
    FIELD_SET(*this, FIX::LastLiquidityIndicator);
    FIELD_SET(*this, FIX::FFT4);
    FIELD_SET(*this, FIX::FFT5);
    FIELD_SET(*this, FIX::FFT6);
    FIELD_SET(*this, FIX::NoMiscFees);
    class NoMiscFees: public FIX::Group
    {
    public:
    NoMiscFees() : FIX::Group(136,137,FIX::message_order(137,0)) {}
      FIELD_SET(*this, FIX::MiscFeeAmt);
    };
    FIELD_SET(*this, FIX::NoRelatedSym);
    class NoRelatedSym: public FIX::Group
    {
    public:
    NoRelatedSym() : FIX::Group(146,311,FIX::message_order(311,309,310,313,316,315,314,317,308,18212,10456,16624,319,318,10566,0)) {}
      FIELD_SET(*this, FIX::UnderlyingSymbol);
      FIELD_SET(*this, FIX::UnderlyingSecurityID);
      FIELD_SET(*this, FIX::UnderlyingSecurityType);
      FIELD_SET(*this, FIX::UnderlyingMaturityMonthYear);
      FIELD_SET(*this, FIX::UnderlyingStrikePrice);
      FIELD_SET(*this, FIX::UnderlyingPutOrCall);
      FIELD_SET(*this, FIX::UnderlyingMaturityDay);
      FIELD_SET(*this, FIX::UnderlyingOptAttribute);
      FIELD_SET(*this, FIX::UnderlyingSecurityExchange);
      FIELD_SET(*this, FIX::UnderlyingDeliveryTerm);
      FIELD_SET(*this, FIX::UnderlyingSecurityAltID);
      FIELD_SET(*this, FIX::LegSide);
      FIELD_SET(*this, FIX::RatioQty);
      FIELD_SET(*this, FIX::UnderlyingCurrency);
      FIELD_SET(*this, FIX::LegPrice);
    };
    FIELD_SET(*this, FIX::NoLinks);
    class NoLinks: public FIX::Group
    {
    public:
    NoLinks() : FIX::Group(16112,16113,FIX::message_order(16113,16114,0)) {}
      FIELD_SET(*this, FIX::LinkID);
      FIELD_SET(*this, FIX::LinkType);
    };
    FIELD_SET(*this, FIX::NoOrderAttributes);
    class NoOrderAttributes: public FIX::Group
    {
    public:
    NoOrderAttributes() : FIX::Group(2593,2594,FIX::message_order(2594,2595,0)) {}
      FIELD_SET(*this, FIX::OrderAttributeType);
      FIELD_SET(*this, FIX::OrderAttributeValue);
    };
    FIELD_SET(*this, FIX::NoPartyIDs);
    class NoPartyIDs: public FIX::Group
    {
    public:
    NoPartyIDs() : FIX::Group(453,448,FIX::message_order(448,452,2376,447,0)) {}
      FIELD_SET(*this, FIX::PartyID);
      FIELD_SET(*this, FIX::PartyRole);
      FIELD_SET(*this, FIX::PartyRoleQualifier);
      FIELD_SET(*this, FIX::PartyIDSource);
    };
  };

}

#endif
