
#include "ThreadHandler.hh"

namespace ThreadHandler{
    ThreadHandler::ThreadHandler(){}

    ThreadHandler::~ThreadHandler(){}

    int ThreadHandler::Handling(){
        while(true){
            list_mutex.lock();
            for( this->iter = list_thread.begin() ; this->iter != list_thread.end() ;){
                if( this->iter->joinable() ){
                    std::cout << "Join..." << this->iter->get_id()<< std::endl;
                    this->iter->detach();
                    this->tmp_iter = this->iter;
                    this->tmp_iter++;
                    list_thread.erase(iter);
                    this->iter=tmp_iter;
                }
            }
            list_mutex.unlock();
            std::this_thread::sleep_for(std::chrono::milliseconds(10000));
        }
    }
}

