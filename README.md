# SocketThread

Using C++11

TCP Socket Thread

UDP Socket Thread

## Build & Usage

```sh
$ git clone https://github.com/zanywhale/SocketThread.git SocketThread
$ cd SocketThread/Server
$ cmake CmakeLists.txt
$ make
$ ./SocketThread [PortNum]
```

## Test

```
$ ./SocketThread 9999
```

```
$ nc localhost 9999
$ nc localhost 10000
```

