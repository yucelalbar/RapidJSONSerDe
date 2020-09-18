#include <chrono>
#include "QosData.h"


using namespace std::chrono;

int main (int argc, const char * argv[]) {

    for(auto i = 0; i < 101; ++i) {
        /*Prep object*/
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

        auto start = high_resolution_clock::now();

        /*Serialize object with rapidjson*/
        rapidjson::StringBuffer buffer;
        rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);

        qosData.Serialize(&writer);

        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);

        std::cout << "Rapidjson Serialized buffer Duration: " << duration.count() << std::endl;

        Rapid::QosData qosData2{};

        start = high_resolution_clock::now();

        qosData2.Deserialize(buffer.GetString());

        stop = high_resolution_clock::now();
        duration = duration_cast<microseconds>(stop - start);

        //std::cout << "Qos Id : " << qosData2.getQosId() << " 5qi : " << qosData2.get5qi() << "  Duration: " << duration.count() << "\n";
        std::cout << "Rapidjson Deserialization Duration: " << duration.count() << "\n";

    }

    return 0;
}