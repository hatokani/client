#ifndef UDP_SEND_H
#define UDP_SEND_H

#include </usr/include/arpa/inet.h>
#include </usr/include/netinet/in.h>
#include </usr/include/x86_64-linux-gnu/sys/socket.h>
#include </usr/include/x86_64-linux-gnu/sys/types.h>
#include <iostream>
#include <netdb.h>
#include <string.h>
#include <string>
#include <unistd.h>

class Udp_Send {
  int sock;
  struct sockaddr_in addr, local;
  struct ip_mreq stMreq;
  u_long ITTL;

public:
  Udp_Send();
  void send(int port, const char destaddr[], char *text);
};

#endif
