# RapidJSONSerDe
RapidJsonSerDe is a header-only C++ library that serializes object instances and deserializes stringified json objects.

# Installation
Just copy the "include/Entity.h" file to system or project's include path.

# Usage
Entity class includes 3 methods to implement at derived classes.

    virtual bool Deserialize(const std::string& s);
    virtual bool Deserialize(const rapidjson::Value& obj) = 0;
    virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const = 0;

You should implement these methods at derived classes by indicating json object's keys:

    //Entity.h
    
    class Arp: public Entity {
    public:
        //...

        virtual bool Deserialize(const std::string& s) override;
        virtual bool Deserialize(const rapidjson::Value& obj) override;
        virtual bool Serialize(rapidjson::Writer<rapidjson::StringBuffer>* writer) const override;

        //...

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

# Example
You can find example classes and their rapidjson serialization&deserialization implementations under "examples" folder. Example of using these methods:

    int main (int argc, const char * argv[]) {

        /*Prep QosData object*/
        RapidJsonSerDe::Examples::QosData qosData{};

        qosData.setQosId("DefQos");
        qosData.set5qi(5);
        qosData.setMaxbrDl("5 Mbps");
        qosData.setMaxbrUl("1 Mbps");
        qosData.setGbrUl("2 Kbps");
        qosData.setGbrDl("3 Kbps");
        qosData.setQnc(true);
        qosData.setPriorityLevel(10);
        qosData.setAverWindow(50);
        qosData.setMaxDataBurstVol(100);
        qosData.setReflectiveQos(false);
        qosData.setSharingKeyDl("1 bps");
        qosData.setSharingKeyUl("2 bps");
        qosData.setMaxPacketLossRateDl(10);
        qosData.setMaxPacketLossRateUl(20);
        qosData.setDefQosFlowIndication(false);

        RapidJsonSerDe::Examples::Arp arp;
        arp.setPriorityLevel(15);
        arp.setPreemptCap("CAPABLE");
        arp.setPreemptVuln("VULNERABLE");
        qosData.setArp(std::move(arp));

        /*Serialize QosData object with Entity::Serialize method*/
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);

        qosData.Serialize(&writer);

        std::cout << "Serialized object: " << buffer.GetString() << "\n";

        /*Deserialize stringified json object with Entity::Deserialize method*/
        RapidJsonSerDe::Examples::QosData qosData2{};

        qosData2.Deserialize(buffer.GetString());

        return 0;
    }
