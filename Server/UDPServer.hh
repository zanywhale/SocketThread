#ifndef UDPSERVER_H
#define UDPSERVER_H

#include "common.hh"

namespace UDPServer{
    class UDPServer{
    public:
        UDPServer(int port);
        virtual ~UDPServer();
        void Setup();
        void Hnadler();
        void Run();
    private:
        struct sockaddr_in saddr, caddr;
        int saddr_size;
        int port;
    };
}

#endif // UDPSERVER_H
