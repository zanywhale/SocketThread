#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <cstring>
#include <mutex>
#include <chrono>

#include <vector>

#include <sys/socket.h>
#include <arpa/inet.h> // inet_addr

extern std::vector<std::thread> vector_thread;
extern std::mutex vec_mutex;

#endif // OOMMON_H

