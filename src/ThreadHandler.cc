
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handlering(){
        while(true){
            vec_mutex.lock();/*
            for( this->iter = vec_thread->begin(); this->iter != vec_thread->end(); iter++ ){
                if( !iter->joinable() ){
                    iter->detach();
                }
            }*/
            std::cout << "hello" <<std::endl;
            vec_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

