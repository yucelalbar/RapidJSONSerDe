#include "examples/QosData.h"


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