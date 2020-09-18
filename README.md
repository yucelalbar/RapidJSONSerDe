# RapidJSONSerDe
Serialization/Deserialization of C++ objects to/from JSON using RapidJSON. Entity class is an interface for serialization/deserialization.

# Example:
        Rapid::QosData qosData{};

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

        Rapid::Arp arp;
        arp.setPriorityLevel(15);
        arp.setPreemptCap("CAPABLE");
        arp.setPreemptVuln("VULNERABLE");
        qosData.setArp(std::move(arp));

        /*Serialize object with rapidjson*/
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);

        qosData.Serialize(&writer);
        
        /*Deserialize string buffer to object*/
        Rapid::QosData qosData2{};

        qosData2.Deserialize(buffer.GetString());
