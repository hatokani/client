#ifndef UDP_RECIEVE_H
#define UDP_RECIEVE_H

#include <arpa/inet.h>
#include <iostream>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <x86_64-linux-gnu/sys/socket.h>
#include <x86_64-linux-gnu/sys/types.h>

class Udp_Recieve {

  int sock;
  struct sockaddr_in addr;
  struct ip_mreq mreq;

protected:
  char buf[2048];

public:
  Udp_Recieve();
  void recieve(int port);
};

#endif
