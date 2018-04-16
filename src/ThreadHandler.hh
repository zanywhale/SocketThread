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
    };
}

#endif // THREADHANDLER_H

