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
        this->caddr = {};
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
        int recv_size = 0;
        char buf[4096];
        while(1){
            this->caddr_size = sizeof(struct sockaddr);
            recv_size = recvfrom(this->socket_ret, buf, 4096, 0, (struct sockaddr *)&this->caddr, &this->caddr_size);
            buf[recv_size] = '\0';
            std::cout << buf << std::endl;
            // sendto( this->socket_ret, buf, 4096, 0, (struct sockaddr *)&this->caddr, sizeof(this->caddr));
        }
    }
}

