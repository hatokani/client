#ifndef GPB_REC_H
#define GPB_REC_H

#include "../proto/messages_robocup_ssl_detection.pb.h"
#include "../proto/messages_robocup_ssl_geometry.pb.h"
#include "../proto/messages_robocup_ssl_refbox_log.pb.h"
#include "../proto/messages_robocup_ssl_wrapper.pb.h"
#include "../proto/referee.pb.h"
#include "udp_recieve.h"
#include <iostream>

using namespace google::protobuf;

class Gpb_Rec : public Udp_Recieve {
  SSL_WrapperPacket *packet;
  SSL_Referee *referee;

public:
  Gpb_Rec();
  SSL_WrapperPacket get_packet();
  SSL_Referee get_referee();
};

#endif
