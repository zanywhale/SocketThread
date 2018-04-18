
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handlering(){
        while(true){
            vec_mutex.lock();
            for( unsigned int i = 0; i < vec_thread.size(); ++i ){
                if( vec_thread[i].joinable() ){
                    std::cout << "Join..." << vec_thread[i].get_id()<< std::endl; 
                    vec_thread[i].join();
                    // pop vector
                }
            }
            vec_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

