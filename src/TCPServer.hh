#ifndef TCPSERVER_H
#define TCPSERVER_H

#include "common.hh"

namespace TCPServer{
    class TCPServer{
    public:
        TCPServer(int port);
        virtual ~TCPServer();

        // function
        void Setup();
        void Run();
        void Stop();
    private:
        struct sockaddr_in saddr, caddr;
        int saddr_size;
        int socket_ret;
        int sock_count;
        int port;
    };
}

#endif // TCPSERVER_H
