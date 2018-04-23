#include "UDPServer.hh"

namespace UDPServer{
    UDPServer::UDPServer(int port){
        this->port = port;
        Setup();
    }

    UDPServer::~UDPServer(){}

    void UDPServer::Setup(){
        this->socket_ret = socket(PF_INET, SOCK_DGRAM, 0);
        if(this->socket_ret == -1){ // Invalid socket
            std::cerr << "Failed: can't create socket" << std::endl;
            exit(1);
        }
        // setup socketaddr_in struct
        this->saddr = {};
        this->saddr.sin_family = PF_INET;
        this->saddr.sin_addr.s_addr = htonl(INADDR_ANY);
        this->saddr.sin_port = htons(this->port);

        // bind
        if( bind(this->socket_ret, (struct sockaddr *)&this->saddr, sizeof(saddr)) < 0){
            std::cerr<< "Failed: bind error" << std::endl;
            exit(1);
        }
    }

    void UDPServer::Handler(){

    }

    void UDPServer::Run(){

    }
}

