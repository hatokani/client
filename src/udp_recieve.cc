#include "udp_recieve.h"

Udp_Recieve::Udp_Recieve() {}

void Udp_Recieve::recieve(int port, const char destaddr[]) {
  sock = socket(AF_INET, SOCK_DGRAM, 0);
  addr.sin_family = AF_INET;
  addr.sin_port = htons(port);
  addr.sin_addr.s_addr = INADDR_ANY;

  bind(sock, (struct sockaddr *)&addr, sizeof(addr));
  memset(&mreq, 0, sizeof(mreq));
  mreq.imr_interface.s_addr = INADDR_ANY;
  mreq.imr_multiaddr.s_addr = inet_addr(destaddr);

  if (setsockopt(sock, IPPROTO_IP, IP_ADD_MEMBERSHIP, (char *)&mreq,
                 sizeof(mreq)) != 0) {
    std::cout << "error" << std::endl;
    close(sock);
  }

  memset(buf, 0, sizeof(buf));
  recv(sock, buf, sizeof(buf), 0);
  close(sock);
}

char *Udp_Recieve::get_buf() { return buf; }
