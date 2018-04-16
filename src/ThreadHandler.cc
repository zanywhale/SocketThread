
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    void ThreadHandler::Handlering(){
        vec_mutex.lock();
        // vec_thread
        // Check up in regular sequence
        // and it needs to sleep()...Ha
        vec_mutex.unlock();
    }

}

