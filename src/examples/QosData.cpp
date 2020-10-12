#include "QosData.h"

namespace RapidJsonSerDe {
namespace Examples {

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

} // Examples
} // RapidJsonSerDe
