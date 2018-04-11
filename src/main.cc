#include "common.hh"

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

    return 0;
}
