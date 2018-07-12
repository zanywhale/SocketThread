
#include "common.hh"
#include "TCPServer.hh"
#include "ThreadHandler.hh"

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
    ThreadHandler::ThreadHandler handler;
    std::thread t1(&TCPServer::TCPServer::Run, server1);
    std::thread t2(&TCPServer::TCPServer::Run, server2);
    std::thread t3(&ThreadHandler::ThreadHandler::Handling, handler);
    t1.join();
    t2.join();
    t3.join();

    return 0;
}

