#include "TCPClient.hh"

namespace TCPClient{

    TCPClient::TCPClient(std::string ipaddr, int port){
        this->port = port;
        this->ipaddr = ipaddr;
        Setup();
        Run(this->sock);
    }

    TCPClient::~TCPClient(){}

    void TCPClient::Setup(){
        this->sock = socket(AF_INET, SOCK_STREAM, 0);
        this->saddr = {};
        this->saddr.sin_family = AF_INET;
        inet_pton(AF_INET, this->ipaddr.c_str(), &saddr.sin_addr);
        this->saddr.sin_port = htons(this->port);
    }

    void TCPClient::Run(int sockfd){
        if( connect(sockfd, (struct sockaddr *)&this->saddr, sizeof(saddr)) < 0 ){
            std::cerr << "Failed: connection error" << std::endl;
            exit(1);
        }
        
    }

    int TCPClient::Handler(int sockfd){}
}

