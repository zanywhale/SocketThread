
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handlering(){
        while(true){
            list_mutex.lock();
            for( this->iter = list_thread.begin() ; this->iter != list_thread.end() ;){
                if( this->iter->joinable() ){
                    std::cout << "Join..." << this->iter->get_id()<< std::endl;
                    iter->detach();
                    std::list<std::thread>::iterator tmp_iter = this->iter;
                    tmp_iter++;
                    list_thread.erase(iter);
                    this->iter=tmp_iter;
                }
            }
            list_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

