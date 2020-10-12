
#include "Arp.h"

namespace RapidJsonSerDe {
namespace Examples {

Arp::Arp() {
    m_priorityLevel.isSet = false;
    m_priorityLevel.value = 0;
    m_preemptCap.isSet = false;
    m_preemptVuln.isSet = false;
}

void Arp::setPriorityLevel(const int32_t& value) {
    m_priorityLevel.value = value;
    m_priorityLevel.isSet = true;
}

const int32_t& Arp::getPriorityLevel() const {
    return m_priorityLevel.value;
}

bool Arp::isSetPriorityLevel() const {
    return m_priorityLevel.isSet;
}

void Arp::setPreemptCap(const std::string& value) {
    m_preemptCap.value = value;
    m_preemptCap.isSet = true;
}

void Arp::setPreemptCap(std::string&& value) {
    m_preemptCap.value = std::move(value);
    m_preemptCap.isSet = true;
}

const std::string& Arp::getPreemptCap() const {
    return m_preemptCap.value;
}

bool Arp::isSetPreemptCap() const {
    return m_preemptCap.isSet;
}

void Arp::setPreemptVuln(const std::string& value) {
    m_preemptVuln.value = value;
    m_preemptVuln.isSet = true;
}

void Arp::setPreemptVuln(std::string&& value) {
    m_preemptVuln.value = std::move(value);
    m_preemptVuln.isSet = true;
}

const std::string& Arp::getPreemptVuln() const {
    return m_preemptVuln.value;
}

bool Arp::isSetPreemptVuln() const {
    return m_preemptVuln.isSet;
}

} // namespace Examples
} // namespace RapidJsonSerDe

