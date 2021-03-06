#include "common.hh"
#include "UDPServer.hh"

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

  UDPServer::UDPServer server1(port);
  UDPServer::UDPServer server2(port+1);
  std::thread t1(&UDPServer::UDPServer::Handler, server1);
  std::thread t2(&UDPServer::UDPServer::Handler, server2);
  t1.join();
  t2.join();

  return 0;
}

