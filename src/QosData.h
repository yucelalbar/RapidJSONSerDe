#ifndef _QosData_h_
#define _QosData_h_

#include "Entity.h"
#include "Arp.h"
#include <vector>
#include <map>

namespace Rapid
{

class QosData : public Entity
{
public:
    QosData();
    QosData(const QosData&) =default;
    QosData(QosData&&) =default;
    QosData& operator=(const QosData&) =default;
    QosData& operator=(QosData&&) =default;
    ~QosData() =default;

    virtual bool Deserialize(const std::string& s);
    virtual bool Deserialize(const rapidjson::Value& obj);
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const;

    // Getters/Setters.

    void setQosId(const std::string&);
    void setQosId(std::string&&);
    const std::string& getQosId() const;
    bool isSetQosId() const;
    void set5qi(const int32_t);
    int32_t get5qi() const;
    bool isSet5qi() const;
    void setMaxbrUl(const std::string&);
    void setMaxbrUl(std::string&&);
    const std::string& getMaxbrUl() const;
    bool isSetMaxbrUl() const;
    void setMaxbrDl(const std::string&);
    void setMaxbrDl(std::string&&);
    const std::string& getMaxbrDl() const;
    bool isSetMaxbrDl() const;
    void setGbrUl(const std::string&);
    void setGbrUl(std::string&&);
    const std::string& getGbrUl() const;
    bool isSetGbrUl() const;
    void setGbrDl(const std::string&);
    void setGbrDl(std::string&&);
    const std::string& getGbrDl() const;
    bool isSetGbrDl() const;
    void setArp(const Arp&);
    void setArp(Arp&&);
    const Arp& getArp() const;
    bool isSetArp() const;
    void setQnc(const bool);
    bool getQnc() const;
    bool isSetQnc() const;
    void setPriorityLevel(const int32_t&);
    const int32_t& getPriorityLevel() const;
    bool isSetPriorityLevel() const;
    void setAverWindow(const int32_t&);
    const int32_t& getAverWindow() const;
    bool isSetAverWindow() const;
    void setMaxDataBurstVol(const int32_t&);
    const int32_t& getMaxDataBurstVol() const;
    bool isSetMaxDataBurstVol() const;
    void setReflectiveQos(const bool);
    bool getReflectiveQos() const;
    bool isSetReflectiveQos() const;
    void setSharingKeyDl(const std::string&);
    void setSharingKeyDl(std::string&&);
    const std::string& getSharingKeyDl() const;
    bool isSetSharingKeyDl() const;
    void setSharingKeyUl(const std::string&);
    void setSharingKeyUl(std::string&&);
    const std::string& getSharingKeyUl() const;
    bool isSetSharingKeyUl() const;
    void setMaxPacketLossRateDl(const int32_t&);
    const int32_t& getMaxPacketLossRateDl() const;
    bool isSetMaxPacketLossRateDl() const;
    void setMaxPacketLossRateUl(const int32_t&);
    const int32_t& getMaxPacketLossRateUl() const;
    bool isSetMaxPacketLossRateUl() const;
    void setDefQosFlowIndication(const bool);
    bool getDefQosFlowIndication() const;
    bool isSetDefQosFlowIndication() const;

private:
    struct {
        std::string value; // required
        bool isSet;
    } m_qosId;
    struct {
        int32_t value;
        bool isSet;
    } m__5qi;
    struct {
        std::string value;
        bool isSet;
    } m_maxbrUl;
    struct {
        std::string value;
        bool isSet;
    } m_maxbrDl;
    struct {
        std::string value;
        bool isSet;
    } m_gbrUl;
    struct {
        std::string value;
        bool isSet;
    } m_gbrDl;
    struct {
        Arp value;
        bool isSet;
    } m_arp;
    struct {
        bool value;
        bool isSet;
    } m_qnc;
    struct {
        int32_t value;
        bool isSet;
    } m_priorityLevel;
    struct {
        int32_t value;
        bool isSet;
    } m_averWindow;
    struct {
        int32_t value;
        bool isSet;
    } m_maxDataBurstVol;
    struct {
        bool value;
        bool isSet;
    } m_reflectiveQos;
    struct {
        std::string value;
        bool isSet;
    } m_sharingKeyDl;
    struct {
        std::string value;
        bool isSet;
    } m_sharingKeyUl;
    struct {
        int32_t value;
        bool isSet;
    } m_maxPacketLossRateDl;
    struct {
        int32_t value;
        bool isSet;
    } m_maxPacketLossRateUl;
    struct {
        bool value;
        bool isSet;
    } m_defQosFlowIndication;

};

} // Rapid

#endif //_QosData_h_

