#ifndef UDP_RECIEVE_H
#define UDP_RECIEVE_H

#include </usr/include/arpa/inet.h>
#include </usr/include/netinet/in.h>
#include </usr/include/x86_64-linux-gnu/sys/socket.h>
#include </usr/include/x86_64-linux-gnu/sys/types.h>
#include <iostream>
#include <string.h>
#include <string>
#include <unistd.h>

class Udp_Recieve {

  int sock;
  struct sockaddr_in addr;
  struct ip_mreq mreq;
  char buf[2048];

public:
  Udp_Recieve();
  void recieve(int port);
};

#endif
