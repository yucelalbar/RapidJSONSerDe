#ifndef _QosData_h_
#define _QosData_h_

#include "include/Entity.h"
#include "Arp.h"
#include <vector>
#include <map>

namespace RapidJsonSerDe {
namespace Examples {

class QosData : public Entity {
public:
    QosData();
    QosData(const QosData&) =default;
    QosData(QosData&&) =default;
    QosData& operator=(const QosData&) =default;
    QosData& operator=(QosData&&) =default;
    ~QosData() =default;

    virtual bool Deserialize(const std::string& s) override;
    virtual bool Deserialize(const rapidjson::Value& obj) override;
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const override;

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

inline bool QosData::Deserialize(const std::string& s)
{
    return Entity::Deserialize(s);
}

inline bool QosData::Deserialize(const rapidjson::Value & document)
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

inline bool QosData::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer) const
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

} // Examples
} // RapidJsonSerDe

#endif //_QosData_h_

