#ifndef UDP_SEND_H
#define UDP_SEND_H

#include <arpa/inet.h>
#include <iostream>
#include <netdb.h>
#include <netinet/in.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <x86_64-linux-gnu/sys/socket.h>
#include <x86_64-linux-gnu/sys/types.h>

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
