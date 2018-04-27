# SocketThread

Using C++11

TCP Socket Thread

UDP Socket Thread

## Build & Usage

```sh
$ git clone https://github.com/zanywhale/SocketThread.git SocketThread
$ cd SocketThread/TCPServer
*(or cd SocketThread/UDPServer)
$ cmake CmakeLists.txt
$ make
$ ./SocketThread [PortNum]
```

## Test

### TCP

```
$ ./SocketThread 9999
```

```
$ ./TCPClient localhost 9999
$ ./TCPClient localhost 9999
```

### UDP

```
$ ./SocketThread 9999
```

```
$ nc localhost 9999 -u
$ nc localhost 10000 -u
```

