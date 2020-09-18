
#include "Entity.h"
#include <fstream>
#include <sstream>

namespace Rapid {

std::string Entity::Serialize() const
{
	rapidjson::StringBuffer ss;
	rapidjson::Writer<rapidjson::StringBuffer> writer(ss);		// Can also use Writer for condensed formatting
	if (Serialize(&writer))
		return ss.GetString();
	return "";
}

bool Entity::Deserialize(const std::string& s)
{
	rapidjson::Document doc;
	if (!InitDocument(s, doc))
		return false;

	Deserialize(doc);

	return true;
}

bool Entity::InitDocument(const std::string& s, rapidjson::Document& doc)
{
    if (s.empty())
        return false;

    return !doc.Parse(s.c_str()).HasParseError() ? true : false;
}

bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const bool& v) {
	writer->Bool(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int8_t& v) {
	writer->Int(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint8_t& v) {
	writer->Uint(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int16_t& v) {
	writer->Int(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint16_t& v) {
	writer->Uint(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int32_t& v) {
	writer->Int(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint32_t& v) {
	writer->Uint(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const int64_t& v) {
	writer->Int64(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const uint64_t& v) {
	writer->Uint64(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const float& v) {
	writer->Double(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const double& v) {
	writer->Double(v);
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const std::string& v) {
	writer->String(v.c_str());
	return true;
}
bool Entity::Serialize(rapidjson::Writer<rapidjson::StringBuffer> * writer, const Entity& v) {
    v.Serialize(writer);
	return true;
}

bool Entity::Deserialize(bool* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetBool();
	return true;
}
bool Entity::Deserialize(int8_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;

}
bool Entity::Deserialize(uint8_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(int16_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(uint16_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(int32_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(uint32_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(int64_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;

}
bool Entity::Deserialize(uint64_t* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;

}
bool Entity::Deserialize(float* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetInt();
	return true;
}
bool Entity::Deserialize(double* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetDouble();
	return true;
}
bool Entity::Deserialize(std::string* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	*p = itr->value.GetString();
	return true;

}
bool Entity::Deserialize(Entity* p, const rapidjson::Value & document, const std::string& k) {
    auto itr = document.FindMember(k.c_str());
    if (itr == document.MemberEnd())
		return false;

	return p->Deserialize(itr->value);;
}

bool Entity::Deserialize(bool* p, const rapidjson::Value & document) {
	*p = document.GetBool();
	return true;
}
bool Entity::Deserialize(int8_t* p, const rapidjson::Value & document) {
	*p = document.GetInt();
	return true;
}
bool Entity::Deserialize(uint8_t* p, const rapidjson::Value & document) {
	*p = document.GetUint();
	return true;
}
bool Entity::Deserialize(int16_t* p, const rapidjson::Value & document) {
	*p = document.GetInt();
	return true;
}
bool Entity::Deserialize(uint16_t* p, const rapidjson::Value & document) {
	*p = document.GetUint();
	return true;
}
bool Entity::Deserialize(int32_t* p, const rapidjson::Value & document) {
	*p = document.GetInt();
	return true;
}
bool Entity::Deserialize(uint32_t* p, const rapidjson::Value & document) {
	*p = document.GetUint();
	return true;
}
bool Entity::Deserialize(int64_t* p, const rapidjson::Value & document) {
	*p = document.GetInt64();
	return true;
}
bool Entity::Deserialize(uint64_t* p, const rapidjson::Value & document) {
	*p = document.GetUint64();
	return true;
}
bool Entity::Deserialize(float* p, const rapidjson::Value & document) {
	*p = document.GetDouble();
	return true;
}
bool Entity::Deserialize(double* p, const rapidjson::Value & document) {
	*p = document.GetDouble();
	return true;
}
bool Entity::Deserialize(std::string* p, const rapidjson::Value & document) {
	*p = document.GetString();
	return true;
}
bool Entity::Deserialize(Entity* p, const rapidjson::Value & document) {
	p->Deserialize(document);
	return true;
}


} // Rapid
