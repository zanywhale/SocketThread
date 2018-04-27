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
        else{
            Handler(sockfd);
        }
    }

    int TCPClient::Handler(int sockfd){
        int recv_size = 0;
        char buf[4096];
        memset(buf, 0, 4096);
        std::cin >> buf;
        send(sockfd, buf, strlen(buf), 0);
        while( (recv_size = recv(sockfd, buf, 4096, 0)) > 0){
            buf[recv_size] = '\0';
            std::cout << buf << std::endl;
            memset(buf, 0, 4096);
            std::cin >> buf;
            send(sockfd, buf, strlen(buf), 0);
        }
        if( recv_size == -1){
            std::cerr << "Failed: recv failed" << std::endl;
        }
        else if( recv_size == 0){
            std::cout << "Client disconnected" << std::endl;
        }
        return 0;
    }
}

