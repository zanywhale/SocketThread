#include "common.hh"
#include "TCPClient.hh"

int main(int argc, char *argv[])
{
  int port = 0;
  if(argc == 3){
    port = atoi((char *)argv[2]);
  }
  else{
    std::cout << argv[0] << " [IPADDR]" << " [PORT NUMBER]" << std::endl;
    exit(0);
  }

  TCPClient::TCPClient t1(argv[1], port);

  return 0;
}

