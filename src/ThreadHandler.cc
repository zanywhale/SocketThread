
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handlering(){
        while(true){
            list_mutex.lock();
            for( this->iter = list_thread.begin() ; this->iter != list_thread.end() ; iter++ ){
                if( this->iter->joinable() ){
                    std::cout << "Join..." << this->iter->get_id()<< std::endl; 
                    this->iter->join();
                    // list_thread.erase(this->iter);
                }
            }
            list_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

