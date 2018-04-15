#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include "common.hh"

namespace TCPClient{
    class TCPClient{
    public:
        TCPClient(int port);
        virtual ~TCPClient();
        void Run();
        void Handler();
    private:
        int port;
    };
}

#endif // TCPCLIENT_H
