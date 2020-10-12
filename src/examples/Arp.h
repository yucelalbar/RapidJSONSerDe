#ifndef _Arp_h_
#define _Arp_h_

#include "include/Entity.h"

namespace RapidJsonSerDe {
namespace Examples {

class Arp: public Entity {
public:
    Arp();
    Arp(const Arp&) =default;
    Arp(Arp&&) =default;
    Arp& operator=(const Arp&) =default;
    Arp& operator=(Arp&&) =default;
    ~Arp() =default;

    virtual bool Deserialize(const std::string& s) override;
    virtual bool Deserialize(const rapidjson::Value& obj) override;
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const override;

    void setPriorityLevel(const int32_t&);
    const int32_t& getPriorityLevel() const;
    bool isSetPriorityLevel() const;
    void setPreemptCap(const std::string&);
    void setPreemptCap(std::string&&);
    const std::string& getPreemptCap() const;
    bool isSetPreemptCap() const;
    void setPreemptVuln(const std::string&);
    void setPreemptVuln(std::string&&);
    const std::string& getPreemptVuln() const;
    bool isSetPreemptVuln() const;

private:
    struct {
        int32_t value;
        bool isSet;
    } m_priorityLevel;
    struct {
        std::string value;
        bool isSet;
    } m_preemptCap;
    struct {
        std::string value;
        bool isSet;
    } m_preemptVuln;
};

inline bool Arp::Deserialize(const std::string& s)
{
    return Entity::Deserialize(s);
}

inline bool Arp::Deserialize(const rapidjson::Value & obj)
{
    m_priorityLevel.isSet = Entity::Deserialize(&m_priorityLevel.value, obj, "priorityLevel");
    m_preemptCap.isSet = Entity::Deserialize(&m_preemptCap.value, obj, "preemptCap");
    m_preemptVuln.isSet = Entity::Deserialize(&m_preemptVuln.value, obj, "preemptVuln");
    return true;
}

inline bool Arp::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer) const
{
    writer->StartObject();

        if(m_priorityLevel.isSet) {
            writer->String("priorityLevel");
            Entity::Serialize(writer, m_priorityLevel.value);
        }
        if(m_preemptCap.isSet) {
            writer->String("preemptCap");
            Entity::Serialize(writer, m_preemptCap.value);
        }
        if(m_preemptVuln.isSet) {
            writer->String("preemptVuln");
            Entity::Serialize(writer, m_preemptVuln.value);
        }

    writer->EndObject();
    return true;
}

} // namespace Examples
} // namespace RapidJsonSerDe

#endif // _Arp_h_
