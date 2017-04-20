#ifndef WORLD_H
#define WORLD_H

#include "../proto/messages_robocup_ssl_wrapper.pb.h"
#include "ball.h"
#include "field.h"
#include "gpb_rec.h"
#include "team.h"
#include <string>

class World {

  SSL_WrapperPacket packet;
  Gpb_Rec gpb;
  Team blue;
  Team yellow;
  Ball ball;
  Ball before_ball;
  Field field;
  std::string refe;

public:
  World(string our_color, int goalf);
  void update();
  Team get_blue();
  Team get_yellow();
  Ball get_ball();
  Ball get_before_ball();
};

#endif
