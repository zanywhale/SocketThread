#include "UDPClient.hh"

namespace UDPClient{
    
    UDPClient::UDPClient(std::string ipaddr, int port){
        this->port = port;
        this->ipaddr = ipaddr;
    }

    UDPClient::~UDPClient(){}

    void UDPClient::Setup(){}

    void UDPClient::Run(){}

    int UDPClient::Handler(int sockfd){}
}

