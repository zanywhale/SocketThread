#include <iostream>
#include <thread>
#include <unistd.h>
#include <cstring>
#include <mutex>
#include <chrono>

#include <vector>

#include <sys/socket.h>
#include <arpa/inet.h> // inet_addr

extern std::vector<std::thread> *vec_thread;
extern std::mutex vec_mutex;

