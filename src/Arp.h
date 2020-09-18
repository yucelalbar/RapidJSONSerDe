#ifndef _Arp_h_
#define _Arp_h_

#include "Entity.h"

namespace Rapid {

class Arp: public Entity
{
public:
    Arp();
    Arp(const Arp&) =default;
    Arp(Arp&&) =default;
    Arp& operator=(const Arp&) =default;
    Arp& operator=(Arp&&) =default;
    ~Arp() =default;

    virtual bool Deserialize(const rapidjson::Value& obj);
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const;

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
        int32_t value; // required
        bool isSet;
    } m_priorityLevel;
    struct {
        std::string value; // required
        bool isSet;
    } m_preemptCap;
    struct {
        std::string value; // required
        bool isSet;
    } m_preemptVuln;

};

} // namespace Rapid

#endif // _Arp_h_
