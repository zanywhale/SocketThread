
#include "common.hh"
#include "TCPServer.hh"

int main(int argc, char *argv[])
{
    int port = 0;
    if(argc == 2){
        port = atoi((char *)argv[1]);
    }
    else{
        std::cout << argv[0] << " [PORT NUMBER]" << std::endl;
        exit(0);
    }

    TCPServer::TCPServer server1(port);
    TCPServer::TCPServer server2(port+1);
    std::thread t1(&TCPServer::TCPServer::Run, server1);
    std::thread t2(&TCPServer::TCPServer::Run, server2);
    t1.join();
    t2.join();

    return 0;
}

