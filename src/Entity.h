#ifndef _Entity_h_
#define _Entity_h_

#include <iostream>
#include <vector>
#include <map>
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>		// rapidjson's DOM-style API
#include <rapidjson/stringbuffer.h>	// wrapper of C stream for prettywriter as output
#include <rapidjson/prettywriter.h>	// for stringify JSON

namespace Rapid {

class Entity {
public:
    virtual std::string Serialize() const;
    virtual bool Deserialize(const std::string& s);
    virtual bool Deserialize(const rapidjson::Value& obj) = 0;
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const = 0;

    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const bool& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const int8_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const uint8_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const int16_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const uint16_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const int32_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const uint32_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const int64_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const uint64_t& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const float& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const double& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::string& v);
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const Entity& v);

    template<typename T>
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::vector<T>& v);
    template<typename T>
    static bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::map<std::string, T>& v);

    static bool Deserialize(bool* p,                               const rapidjson::Value & document);
    static bool Deserialize(int8_t* p,                             const rapidjson::Value & document);
    static bool Deserialize(uint8_t* p,                            const rapidjson::Value & document);
    static bool Deserialize(int16_t* p,                            const rapidjson::Value & document);
    static bool Deserialize(uint16_t* p,                           const rapidjson::Value & document);
    static bool Deserialize(int32_t* p,                            const rapidjson::Value & document);
    static bool Deserialize(uint32_t* p,                           const rapidjson::Value & document);
    static bool Deserialize(int64_t* p,                            const rapidjson::Value & document);
    static bool Deserialize(uint64_t* p,                           const rapidjson::Value & document);
    static bool Deserialize(float* p,                              const rapidjson::Value & document);
    static bool Deserialize(double* p,                             const rapidjson::Value & document);
    static bool Deserialize(std::string* p,                        const rapidjson::Value & document);
    static bool Deserialize(Entity* p,                             const rapidjson::Value & document);

    static bool Deserialize(bool* p,                               const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(int8_t* p,                             const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(uint8_t* p,                            const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(int16_t* p,                            const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(uint16_t* p,                           const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(int32_t* p,                            const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(uint32_t* p,                           const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(int64_t* p,                            const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(uint64_t* p,                           const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(float* p,                              const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(double* p,                             const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(std::string* p,                        const rapidjson::Value & document, const std::string& k);
    static bool Deserialize(Entity* p,                             const rapidjson::Value & document, const std::string& k);
    template<typename T>
    static bool Deserialize(std::vector<T>* p,                     const rapidjson::Value & document, const std::string& k);
    template<typename T>
    static bool Deserialize(std::map<std::string, T>* p,           const rapidjson::Value & document, const std::string& k);


protected:
    bool InitDocument(const std::string & s, rapidjson::Document &doc);
    virtual ~Entity() {}
};


template<typename T>
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::vector<T>& v) {
    writer->StartArray();
    for(const auto& t : v) {
        Serialize(writer, t);
    }
    writer->EndArray();
    return true;
}

template<typename T>
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::map<std::string, T>& v) {
    for(const auto& p : v) {
        writer->StartObject();
        writer->String(p.first.c_str());
        Serialize(writer, p.second);
        writer->EndObject();
    }

    return true;
}

template<typename T>
bool Entity::Deserialize(std::vector<T>* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd()) {
        return false;
    }

    for(auto it = itr->value.Begin(); it != itr->value.End(); ++it) {
        T t;
        Deserialize(&t, *it);
        p->push_back(std::move(t));
    }
    return true;
}

template<typename T>
bool Entity::Deserialize(std::map<std::string, T>* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd()) {
        return false;
    }

    for(auto it = itr->value.MemberBegin(); it != itr->value.MemberEnd(); ++it) {
        T t;
        Deserialize(&t, it->value);
        p->emplace(it->name.GetString(), std::move(t));
    }

    return true;
}

} // Rapid

#endif // _Entity_h_
