#ifndef _Entity_h_
#define _Entity_h_

#include <iostream>
#include <vector>
#include <map>
#include <rapidjson/rapidjson.h>
#include <rapidjson/document.h>		// rapidjson's DOM-style API
#include <rapidjson/stringbuffer.h>	// wrapper of C stream for prettywriter as output
#include <rapidjson/prettywriter.h>	// for stringify JSON

namespace RapidJsonSerDe {

class Entity {
public:
    virtual std::string Serialize() const;
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

    virtual bool Deserialize(const std::string& s);
    virtual bool Deserialize(const rapidjson::Value& obj) = 0;

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

inline bool Entity::InitDocument(const std::string& s, rapidjson::Document& doc)
{
    if (s.empty())
        return false;

    return !doc.Parse(s.c_str()).HasParseError() ? true : false;
}

inline std::string Entity::Serialize() const
{
    rapidjson::StringBuffer ss;
    rapidjson::Writer<rapidjson::StringBuffer> writer(ss);
    if (Serialize(&writer))
        return ss.GetString();
    return "";
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const bool& v) {
    writer->Bool(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int8_t& v) {
    writer->Int(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint8_t& v) {
    writer->Uint(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int16_t& v) {
    writer->Int(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint16_t& v) {
    writer->Uint(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int32_t& v) {
    writer->Int(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint32_t& v) {
    writer->Uint(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int64_t& v) {
    writer->Int64(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint64_t& v) {
    writer->Uint64(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const float& v) {
    writer->Double(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const double& v) {
    writer->Double(v);
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const std::string& v) {
    writer->String(v.c_str());
    return true;
}

inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const Entity& v) {
    v.Serialize(writer);
    return true;
}

template<typename T>
inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::vector<T>& v) {
    writer->StartArray();
    for(const auto& t : v) {
        Serialize(writer, t);
    }
    writer->EndArray();
    return true;
}

template<typename T>
inline bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer, const std::map<std::string, T>& v) {
    for(const auto& p : v) {
        writer->StartObject();
        writer->String(p.first.c_str());
        Serialize(writer, p.second);
        writer->EndObject();
    }

    return true;
}

inline bool Entity::Deserialize(const std::string& s)
{
    rapidjson::Document doc;
    if (!InitDocument(s, doc))
        return false;

    Deserialize(doc);
    return true;
}

inline bool Entity::Deserialize(bool* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetBool();
    return true;
}

inline bool Entity::Deserialize(int8_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint8_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(int16_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint16_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(int32_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint32_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(int64_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint64_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(float* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetInt();
    return true;
}

inline bool Entity::Deserialize(double* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetDouble();
    return true;
}

inline bool Entity::Deserialize(std::string* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    *p = itr->value.GetString();
    return true;
}

inline bool Entity::Deserialize(Entity* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
        return false;

    return p->Deserialize(itr->value);;
}

inline bool Entity::Deserialize(bool* p, const rapidjson::Value & document) {
    *p = document.GetBool();
    return true;
}

inline bool Entity::Deserialize(int8_t* p, const rapidjson::Value & document) {
    *p = document.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint8_t* p, const rapidjson::Value & document) {
    *p = document.GetUint();
    return true;
}

inline bool Entity::Deserialize(int16_t* p, const rapidjson::Value & document) {
    *p = document.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint16_t* p, const rapidjson::Value & document) {
    *p = document.GetUint();
    return true;
}

inline bool Entity::Deserialize(int32_t* p, const rapidjson::Value & document) {
    *p = document.GetInt();
    return true;
}

inline bool Entity::Deserialize(uint32_t* p, const rapidjson::Value & document) {
    *p = document.GetUint();
    return true;
}

inline bool Entity::Deserialize(int64_t* p, const rapidjson::Value & document) {
    *p = document.GetInt64();
    return true;
}

inline bool Entity::Deserialize(uint64_t* p, const rapidjson::Value & document) {
    *p = document.GetUint64();
    return true;
}

inline bool Entity::Deserialize(float* p, const rapidjson::Value & document) {
    *p = document.GetDouble();
    return true;
}

inline bool Entity::Deserialize(double* p, const rapidjson::Value & document) {
    *p = document.GetDouble();
    return true;
}

inline bool Entity::Deserialize(std::string* p, const rapidjson::Value & document) {
    *p = document.GetString();
    return true;
}

inline bool Entity::Deserialize(Entity* p, const rapidjson::Value & document) {
    p->Deserialize(document);
    return true;
}

template<typename T>
inline bool Entity::Deserialize(std::vector<T>* p, const rapidjson::Value & document, const std::string& k) {
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
inline bool Entity::Deserialize(std::map<std::string, T>* p, const rapidjson::Value & document, const std::string& k) {
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

} // RapidJsonSerDe

#endif // _Entity_h_
