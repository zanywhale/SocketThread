#include "common.hh"

std::vector<std::thread> vec_thread;
std::list<std::thread> list_thread;
std::vector<std::string> vec_chat;
std::mutex vec_mutex;
std::mutex list_mutex;
std::mutex chat_mutex;

