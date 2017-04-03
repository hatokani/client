#include "udp_send.h"

Udp_Send::Udp_Send() : ITTL(2) {}

void Udp_Send::send(int port, const char destaddr[], char *text) {
  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = inet_addr(destaddr);
  sock = socket(AF_INET, SOCK_DGRAM, 0);

  local.sin_family = AF_INET;
  local.sin_addr.s_addr = htonl(INADDR_ANY);
  local.sin_port = 0;
  bind(sock, (struct sockaddr *)&local, sizeof(local));
  stMreq.imr_multiaddr.s_addr = addr.sin_addr.s_addr;
  stMreq.imr_interface.s_addr = INADDR_ANY;
  setsockopt(sock, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char *)&stMreq,
             sizeof(stMreq));
  setsockopt(sock, IPPROTO_IP, IP_MULTICAST_TTL, (char *)&ITTL, sizeof(ITTL));

  sendto(sock, text, strlen(text) + 1, 0, (struct sockaddr *)&addr,
         sizeof(addr));
  close(sock);
}
