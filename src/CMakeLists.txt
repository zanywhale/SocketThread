SET( SRC_FILES main.cc TCPServer.cc TCPServer.hh )
ADD_COMPILE_OPTIONS( -std=c++11 )
ADD_EXECUTABLE( SockServer ${SRC_FILES} )

