# SocketThread

- Using C++11, cmake

- TCP/UDP Socket Thread

## Build & Usage

```sh
$ git clone https://github.com/zanywhale/SocketThread.git SocketThread
$ cd SocketThread/TCPServer
*(or cd SocketThread/UDPServer)
$ cmake CmakeLists.txt
$ make
$ ./SocketThread [PortNum]
```

## Example

### TCP Example

```
$ ./SocketThread 9999
```

```
$ ./TCPClient localhost 9999
$ ./TCPClient localhost 10000
```

### UDP Example

```
$ ./SocketThread 9999
```

```
$ ./UDPClient localhost 9999
$ ./UDPClient localhost 10000
```

