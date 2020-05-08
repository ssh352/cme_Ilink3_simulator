//File generated by CodeGenerator
//Generated from: /home/pbeerkens/source/cme_Ilink3_simulator/data/Cme.Futures.iLink3.Sbe.v8.5.xml

#include "ILink3MsgsGen.h"

void IL3Msg::NegotiateMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NegotiateMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
	data_.writeToBuffer (msgBuffer);
}

void IL3Msg::NegotiationResponseMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NegotiationResponseMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
	data_.writeToBuffer (msgBuffer);
}

void IL3Msg::NegotiationRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NegotiationRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::EstablishMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::EstablishMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
	data_.writeToBuffer (msgBuffer);
}

void IL3Msg::EstablishmentAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::EstablishmentAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::EstablishmentRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::EstablishmentRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::SequenceMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::SequenceMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::TerminateMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::TerminateMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::RetransmitRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::RetransmitRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::RetransmissionMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::RetransmissionMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::RetransmitRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::RetransmitRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::NotAppliedMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NotAppliedMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::NewOrderSingleMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NewOrderSingleMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderCancelReplaceRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderCancelReplaceRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderCancelRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderCancelRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::MassQuoteMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::MassQuoteMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::PartyDetailsDefinitionRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::PartyDetailsDefinitionRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::PartyDetailsDefinitionRequestAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::PartyDetailsDefinitionRequestAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::BusinessRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::BusinessRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportNewMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportNewMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportEliminationMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportEliminationMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeOutrightMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeOutrightMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeSpreadMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeSpreadMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeSpreadLegMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeSpreadLegMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::QuoteCancelMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::QuoteCancelMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderMassActionRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderMassActionRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderMassStatusRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderMassStatusRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportModifyMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportModifyMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportStatusMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportStatusMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderStatusRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderStatusRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportCancelMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportCancelMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderCancelRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderCancelRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderCancelReplaceRejectMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderCancelReplaceRejectMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::PartyDetailsListRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::PartyDetailsListRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::PartyDetailsListReportMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::PartyDetailsListReportMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::RequestForQuoteMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::RequestForQuoteMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::NewOrderCrossMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::NewOrderCrossMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::MassQuoteAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::MassQuoteAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::RequestForQuoteAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::RequestForQuoteAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeAddendumOutrightMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeAddendumOutrightMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeAddendumSpreadMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeAddendumSpreadMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::ExecutionReportTradeAddendumSpreadLegMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::ExecutionReportTradeAddendumSpreadLegMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::SecurityDefinitionRequestMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::SecurityDefinitionRequestMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::SecurityDefinitionResponseMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::SecurityDefinitionResponseMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::OrderMassActionReportMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::OrderMassActionReportMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}

void IL3Msg::QuoteCancelAckMsg::readFromBuffer(MessageBuffer &msgBuffer) {
	blockData_=reinterpret_cast<const BlockData*>(msgBuffer.getRdPtr());
	msgBuffer.moveRdPtr (sizeof (BlockData));
}

void IL3Msg::QuoteCancelAckMsgOut::writeToBuffer(MessageBuffer &msgBuffer) {
	msgBuffer.write(reinterpret_cast<void*>(&blockDataWrite_), sizeof (blockDataWrite_));
}
