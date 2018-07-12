#ifndef THREADHANDLER_H
#define THREADHANDLER_H

#include "common.hh"

namespace ThreadHandler{
    class ThreadHandler{
    public:
        ThreadHandler();
        virtual ~ThreadHandler();
        int Handling();
    private:
        std::list<std::thread>::iterator iter;
        std::list<std::thread>::iterator tmp_iter;
    };
}

#endif // THREADHANDLER_H

