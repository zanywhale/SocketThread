#ifndef UDPCLIENT_H
#define UDPCLIENT_H

#include "common.hh"

namespace UDPClient{
    class UDPClient{
    public:
        UDPClient(std::string ipaddr, int port);
        virtual ~UDPClient();
        void Setup();
        void Run();
        int Handler(int sockfd);
    private:
        std::string ipaddr;
        int port;
        int sock;
        
    };
}

#endif // UDPCLIENT_H
