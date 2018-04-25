#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include "common.hh"

namespace TCPClient{
    class TCPClient{
    public:
        TCPClient(std::string ipaddr, int port);
        virtual ~TCPClient();
        void Setup();
        void Run(int sockfd);
        int Handler(int sockfd);
    private:
        struct sockaddr_in saddr;
        std::string ipaddr;
        int port;
        int sock;
    };
}

#endif // TCPCLIENT_H
