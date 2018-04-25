cmake_minimum_required(VERSION 3.5) 

SET( SRC_FILES main.cc UDPClient.cc UDPClient.hh common.cc common.hh)
PROJECT( UDPClient )

SET( CMAKE_CXX_STANDARD 11 )
#ADD_COMPILE_OPTIONS( -std=c++11 -lpthread -pthread )

ADD_EXECUTABLE( UDPClient ${SRC_FILES} )

## Don't work. Why?
#SET( THREADS_PREFER_PTHREAD_FLAG ON)               
#FIND_PACKAGE(Threads REQUIRED)                     
#TARGET_LINK_LIBRARIES( UDPClient Threads::Threads)
TARGET_LINK_LIBRARIES( UDPClient pthread )

