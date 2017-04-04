#include "gpb_rec.h"

Gpb_Rec::Gpb_Rec() {
  packet = new SSL_WrapperPacket;
  referee = new SSL_Referee;
}

SSL_WrapperPacket Gpb_Rec::get_packet() {
  recieve(10002);
  if (packet->ParseFromArray(this->buf, sizeof(this->buf)))
    std::cout << "visioin parse erorr" << std::endl;
  return *packet;
}

SSL_Referee Gpb_Rec::get_referee() {
  recieve(10003);
  if (referee->ParseFromArray(this->buf, sizeof(buf)))
    std::cout << "referee parse error" << std::endl;
  return *referee;
}
