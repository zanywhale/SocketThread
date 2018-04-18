#ifndef THREADHANDLER_H
#define THREADHANDLER_H

#include "common.hh"

namespace ThreadHandler{
    class ThreadHandler{
    public:
        ThreadHandler();
        virtual ~ThreadHandler();
        int Handlering();
    private:
        std::vector<std::thread>::iterator iter;
    };
}

#endif // THREADHANDLER_H

