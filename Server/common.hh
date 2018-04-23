#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <thread>
#include <unistd.h>
#include <cstring>
#include <mutex>
#include <chrono>

#include <vector>
#include <list>

#include <sys/socket.h>
#include <arpa/inet.h> // inet_addr

extern std::vector<std::thread> vec_thread;
extern std::list<std::thread> list_thread;
extern std::vector<std::string> vec_chat;
extern std::mutex list_mutex;
extern std::mutex vec_mutex;
extern std::mutex chat_mutex;

#endif // OOMMON_H

