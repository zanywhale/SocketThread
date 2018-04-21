
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handlering(){
        while(true){
            list_mutex.lock();
            for( unsigned int i = 0; i < list_thread.size(); ++i ){
                /*if( list_thread[i].joinable() ){
                    std::cout << "Join..." << list_thread[i].get_id()<< std::endl; 
                    list_thread[i].join();
                    // pop vector
                }*/
            }
            list_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

