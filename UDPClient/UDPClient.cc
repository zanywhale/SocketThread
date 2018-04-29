#include "UDPClient.hh"

namespace UDPClient{
    
    UDPClient::UDPClient(std::string ipaddr, int port){
        this->port = port;
        this->ipaddr = ipaddr;
        Setup();
        Run(this->sock);
    }

    UDPClient::~UDPClient(){}

    void UDPClient::Setup(){
        this->sock = socket(AF_INET, SOCK_DGRAM, 0);
        this->saddr = {};
        this->saddr.sin_family = AF_INET;
        inet_pton(AF_INET, this->ipaddr.c_str(), &saddr.sin_addr);
        this->saddr.sin_port = htons(this->port);
    }

    void UDPClient::Run(int sockfd){
        socklen_t length = sizeof(saddr);
        while(1){
          char buf[256];
          fgets(buf, 256, stdin);
          sendto(sockfd,buf,sizeof(buf), 0, (struct sockaddr *)&saddr, length);
        }
    }
}

