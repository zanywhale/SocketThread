#include <iostream>
#include <thread>
#include <unistd.h>
#include <cstring>

#include <vector>

#include <sys/socket.h>
#include <arpa/inet.h> // inet_addr

extern std::vector<std::thread *> vec_thread;

