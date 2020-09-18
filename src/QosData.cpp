#include "QosData.h"

namespace Rapid
{

QosData::QosData() {
    m_qosId.isSet = false;
    m__5qi.value = 0;
    m__5qi.isSet = false;
    m_maxbrUl.isSet = false;
    m_maxbrDl.isSet = false;
    m_gbrUl.isSet = false;
    m_gbrDl.isSet = false;
    m_arp.isSet = false;
    m_qnc.value = false;
    m_qnc.isSet = false;
    m_priorityLevel.isSet = false;
    m_averWindow.isSet = false;
    m_maxDataBurstVol.isSet = false;
    m_reflectiveQos.value = false;
    m_reflectiveQos.isSet = false;
    m_sharingKeyDl.isSet = false;
    m_sharingKeyUl.isSet = false;
    m_maxPacketLossRateDl.isSet = false;
    m_maxPacketLossRateUl.isSet = false;
    m_defQosFlowIndication.value = false;
    m_defQosFlowIndication.isSet = false;
}

void QosData::setQosId(const std::string& value) {
    m_qosId.value = value;
    m_qosId.isSet = true;
}

void QosData::setQosId(std::string&& value) {
    m_qosId.value = std::move(value);
    m_qosId.isSet = true;
}

const std::string& QosData::getQosId() const {
    return m_qosId.value;
}

bool QosData::isSetQosId() const {
    return m_qosId.isSet;
}

void QosData::set5qi(const int32_t value) {
    m__5qi.value = value;
    m__5qi.isSet = true;
}

int32_t QosData::get5qi() const {
    return m__5qi.value;
}

bool QosData::isSet5qi() const {
    return m__5qi.isSet;
}

void QosData::setMaxbrUl(const std::string& value) {
    m_maxbrUl.value = value;
    m_maxbrUl.isSet = true;
}

void QosData::setMaxbrUl(std::string&& value) {
    m_maxbrUl.value = std::move(value);
    m_maxbrUl.isSet = true;
}

const std::string& QosData::getMaxbrUl() const {
    return m_maxbrUl.value;
}

bool QosData::isSetMaxbrUl() const {
    return m_maxbrUl.isSet;
}

void QosData::setMaxbrDl(const std::string& value) {
    m_maxbrDl.value = value;
    m_maxbrDl.isSet = true;
}

void QosData::setMaxbrDl(std::string&& value) {
    m_maxbrDl.value = std::move(value);
    m_maxbrDl.isSet = true;
}

const std::string& QosData::getMaxbrDl() const {
    return m_maxbrDl.value;
}

bool QosData::isSetMaxbrDl() const {
    return m_maxbrDl.isSet;
}

void QosData::setGbrUl(const std::string& value) {
    m_gbrUl.value = value;
    m_gbrUl.isSet = true;
}

void QosData::setGbrUl(std::string&& value) {
    m_gbrUl.value = std::move(value);
    m_gbrUl.isSet = true;
}

const std::string& QosData::getGbrUl() const {
    return m_gbrUl.value;
}

bool QosData::isSetGbrUl() const {
    return m_gbrUl.isSet;
}

void QosData::setGbrDl(const std::string& value) {
    m_gbrDl.value = value;
    m_gbrDl.isSet = true;
}

void QosData::setGbrDl(std::string&& value) {
    m_gbrDl.value = std::move(value);
    m_gbrDl.isSet = true;
}

const std::string& QosData::getGbrDl() const {
    return m_gbrDl.value;
}

bool QosData::isSetGbrDl() const {
    return m_gbrDl.isSet;
}

void QosData::setArp(const Arp& value) {
    m_arp.value = value;
    m_arp.isSet = true;
}

void QosData::setArp(Arp&& value) {
    m_arp.value = std::move(value);
    m_arp.isSet = true;
}

const Arp& QosData::getArp() const {
    return m_arp.value;
}

bool QosData::isSetArp() const {
    return m_arp.isSet;
}

void QosData::setQnc(const bool value) {
    m_qnc.value = value;
    m_qnc.isSet = true;
}

bool QosData::getQnc() const {
    return m_qnc.value;
}

bool QosData::isSetQnc() const {
    return m_qnc.isSet;
}

void QosData::setPriorityLevel(const int32_t& value) {
    m_priorityLevel.value = value;
    m_priorityLevel.isSet = true;
}

const int32_t& QosData::getPriorityLevel() const {
    return m_priorityLevel.value;
}

bool QosData::isSetPriorityLevel() const {
    return m_priorityLevel.isSet;
}

void QosData::setAverWindow(const int32_t& value) {
    m_averWindow.value = value;
    m_averWindow.isSet = true;
}

const int32_t& QosData::getAverWindow() const {
    return m_averWindow.value;
}

bool QosData::isSetAverWindow() const {
    return m_averWindow.isSet;
}

void QosData::setMaxDataBurstVol(const int32_t& value) {
    m_maxDataBurstVol.value = value;
    m_maxDataBurstVol.isSet = true;
}

const int32_t& QosData::getMaxDataBurstVol() const {
    return m_maxDataBurstVol.value;
}

bool QosData::isSetMaxDataBurstVol() const {
    return m_maxDataBurstVol.isSet;
}

void QosData::setReflectiveQos(const bool value) {
    m_reflectiveQos.value = value;
    m_reflectiveQos.isSet = true;
}

bool QosData::getReflectiveQos() const {
    return m_reflectiveQos.value;
}

bool QosData::isSetReflectiveQos() const {
    return m_reflectiveQos.isSet;
}

void QosData::setSharingKeyDl(const std::string& value) {
    m_sharingKeyDl.value = value;
    m_sharingKeyDl.isSet = true;
}

void QosData::setSharingKeyDl(std::string&& value) {
    m_sharingKeyDl.value = std::move(value);
    m_sharingKeyDl.isSet = true;
}

const std::string& QosData::getSharingKeyDl() const {
    return m_sharingKeyDl.value;
}

bool QosData::isSetSharingKeyDl() const {
    return m_sharingKeyDl.isSet;
}

void QosData::setSharingKeyUl(const std::string& value) {
    m_sharingKeyUl.value = value;
    m_sharingKeyUl.isSet = true;
}

void QosData::setSharingKeyUl(std::string&& value) {
    m_sharingKeyUl.value = std::move(value);
    m_sharingKeyUl.isSet = true;
}

const std::string& QosData::getSharingKeyUl() const {
    return m_sharingKeyUl.value;
}

bool QosData::isSetSharingKeyUl() const {
    return m_sharingKeyUl.isSet;
}

void QosData::setMaxPacketLossRateDl(const int32_t& value) {
    m_maxPacketLossRateDl.value = value;
    m_maxPacketLossRateDl.isSet = true;
}

const int32_t& QosData::getMaxPacketLossRateDl() const {
    return m_maxPacketLossRateDl.value;
}

bool QosData::isSetMaxPacketLossRateDl() const {
    return m_maxPacketLossRateDl.isSet;
}

void QosData::setMaxPacketLossRateUl(const int32_t& value) {
    m_maxPacketLossRateUl.value = value;
    m_maxPacketLossRateUl.isSet = true;
}

const int32_t& QosData::getMaxPacketLossRateUl() const {
    return m_maxPacketLossRateUl.value;
}

bool QosData::isSetMaxPacketLossRateUl() const {
    return m_maxPacketLossRateUl.isSet;
}

void QosData::setDefQosFlowIndication(const bool value) {
    m_defQosFlowIndication.value = value;
    m_defQosFlowIndication.isSet = true;
}

bool QosData::getDefQosFlowIndication() const {
    return m_defQosFlowIndication.value;
}

bool QosData::isSetDefQosFlowIndication() const {
    return m_defQosFlowIndication.isSet;
}


bool QosData::Deserialize(const std::string& s)
{
    return Entity::Deserialize(s);
}

bool QosData::Deserialize(const rapidjson::Value & document)
{

    m_qosId.isSet = Entity::Deserialize(&m_qosId.value, document, "qosId");
    m__5qi.isSet =  Entity::Deserialize(&m__5qi.value, document, "5qi");
    m_maxbrUl.isSet = Entity::Deserialize(&m_maxbrUl.value, document, "maxbrUl");
    m_maxbrDl.isSet = Entity::Deserialize(&m_maxbrDl.value, document, "maxbrDl");
    m_gbrUl.isSet = Entity::Deserialize(&m_gbrUl.value, document, "gbrUl");
    m_gbrDl.isSet =  Entity::Deserialize(&m_gbrDl.value, document, "gbrDl");
    m_arp.isSet = Entity::Deserialize(&m_arp.value, document, "arp");
    m_qnc.isSet = Entity::Deserialize(&m_qnc.value, document, "qnc");
    m_priorityLevel.isSet = Entity::Deserialize(&m_priorityLevel.value, document, "priorityLevel");
    m_averWindow.isSet = Entity::Deserialize(&m_averWindow.value, document, "averWindow");
    m_maxDataBurstVol.isSet = Entity::Deserialize(&m_maxDataBurstVol.value, document, "maxDataBurstVol");
    m_reflectiveQos.isSet = Entity::Deserialize(&m_reflectiveQos.value, document, "reflectiveQos");
    m_sharingKeyDl.isSet = Entity::Deserialize(&m_sharingKeyDl.value, document, "sharingKeyDl");
    m_sharingKeyUl.isSet = Entity::Deserialize(&m_sharingKeyUl.value, document, "sharingKeyUl");
    m_maxPacketLossRateDl.isSet = Entity::Deserialize(&m_maxPacketLossRateDl.value, document, "maxPacketLossRateDl");
    m_maxPacketLossRateUl.isSet = Entity::Deserialize(&m_maxPacketLossRateUl.value, document, "maxPacketLossRateUl");
    m_defQosFlowIndication.isSet = Entity::Deserialize(&m_defQosFlowIndication.value, document, "defQosFlowIndication");
    return true;
}

bool QosData::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer) const
{
    writer->StartObject();

        if(m_qosId.isSet) {
            writer->String("qosId");
            Entity::Serialize(writer, m_qosId.value);
        }
        if(m__5qi.isSet) {
            writer->String("5qi");
            Entity::Serialize(writer, m__5qi.value);
        }
        if(m_maxbrUl.isSet) {
            writer->String("maxbrUl");
            Entity::Serialize(writer, m_maxbrUl.value);
        }
        if(m_maxbrDl.isSet) {
            writer->String("maxbrDl");
            Entity::Serialize(writer, m_maxbrDl.value);
        }
        if(m_gbrUl.isSet) {
            writer->String("gbrUl");
            Entity::Serialize(writer, m_gbrUl.value);
        }
        if(m_gbrDl.isSet) {
            writer->String("gbrDl");
            Entity::Serialize(writer, m_gbrDl.value);
        }
        if(m_arp.isSet) {
            writer->String("arp");
            Entity::Serialize(writer, m_arp.value);
        }
        if(m_qnc.isSet) {
            writer->String("qnc");
            Entity::Serialize(writer, m_qnc.value);
        }
        if(m_priorityLevel.isSet) {
            writer->String("priorityLevel");
            Entity::Serialize(writer, m_priorityLevel.value);
        }
        if(m_averWindow.isSet) {
            writer->String("averWindow");
            Entity::Serialize(writer, m_averWindow.value);
        }
        if(m_maxDataBurstVol.isSet) {
            writer->String("maxDataBurstVol");
            Entity::Serialize(writer, m_maxDataBurstVol.value);
        }
        if(m_reflectiveQos.isSet) {
            writer->String("reflectiveQos");
            Entity::Serialize(writer, m_reflectiveQos.value);
        }
        if(m_sharingKeyDl.isSet) {
            writer->String("sharingKeyDl");
            Entity::Serialize(writer, m_sharingKeyDl.value);
        }
        if(m_sharingKeyUl.isSet) {
            writer->String("sharingKeyUl");
            Entity::Serialize(writer, m_sharingKeyUl.value);
        }
        if(m_maxPacketLossRateDl.isSet) {
            writer->String("maxPacketLossRateDl");
            Entity::Serialize(writer, m_maxPacketLossRateDl.value);
        }
        if(m_maxPacketLossRateUl.isSet) {
            writer->String("maxPacketLossRateUl");
            Entity::Serialize(writer, m_maxPacketLossRateUl.value);
        }
        if(m_defQosFlowIndication.isSet) {
            writer->String("defQosFlowIndication");
            Entity::Serialize(writer, m_defQosFlowIndication.value);
        }

    writer->EndObject();
    return true;
}


} // Rapid
