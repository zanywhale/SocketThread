
#include "TCPServer.hh"

namespace TCPServer{
    TCPServer::TCPServer(int port){
        this->port = port;
        Setup();
        Run();
    }
                             
    TCPServer::~TCPServer(){}
                             
    void TCPServer::Setup(){
        this->socket_ret = socket(AF_INET, SOCK_STREAM, 0);
        if(this->socket_ret == -1){ // Invalid socket
            std::cout << "Failed: can't create socket" << std::endl;
            exit(1);
        }

        this->saddr = {};
        this->saddr.sin_family = AF_INET;
        this->saddr.sin_addr.s_addr = INADDR_ANY;
        this->saddr.sin_port = htons(this->port);

        // bind
        if( bind(this->socket_ret, (struct sockaddr *)&this->saddr, sizeof(saddr)) < 0){
            std::cerr<< "Failed: bind error" << std::endl;
            exit(1);
        }

        listen(this->socket_ret, 5);
        this->saddr_size = sizeof(struct sockaddr_in);
    }

    int TCPServer::Handler(int sockfd){
        int recv_size = 0;
        char buf[4096];
        while( (recv_size = recv(sockfd, buf, 4096, 0)) > 0 ){
            buf[recv_size] = '\0';
            write(sockfd, buf, strlen(buf));
            memset(buf, 0, 2000);
        }
        return 0;
    }

    void TCPServer::Run(){
        while( (this->sock_count = accept(this->socket_ret, (struct sockaddr *)&this->caddr, (socklen_t *)&this->saddr_size)) ){
            new std::thread( TCPServer::Handler, this->sock_count );
        }
    }

    void TCPServer::Stop(){
        close(this->socket_ret);
    }
}

