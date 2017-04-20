#include "world.h"

World::World(string our_color, int goalf) {
  if (our_color == "blue") {
    if (goalf == 0) {
      blue = Team("blue", -4500);
      yellow = Team("yellow", 4500);
    } else {
      blue = Team("blue", 4500);
      yellow = Team("yellow", -4500);
    }
  } else {
    if (goalf == 1) {
      blue = Team("blue", 4500);
      yellow = Team("yellow", -4500);
    } else {
      blue = Team("blue", -4500);
      yellow = Team("yellow", 4500);
    }
  }
}

void World::update() {
  packet = gpb.get_packet();
  before_ball.set_x(ball.get_x());
  before_ball.set_y(ball.get_y());
  ball.set_x((int)packet.detection().balls(0).x());
  ball.set_y((int)packet.detection().balls(0).y());
  for (int i = 0; i < 6; i++) {
    blue.get_robo((int)packet.detection().robots_blue(i).robot_id())
        .set_x((int)packet.detection().robots_blue(i).x());
    blue.get_robo((int)packet.detection().robots_blue(i).robot_id())
        .set_y((int)packet.detection().robots_blue(i).y());
    blue.get_robo((int)packet.detection().robots_blue(i).robot_id())
        .set_a((int)packet.detection().robots_blue(i).orientation());
    yellow.get_robo((int)packet.detection().robots_yellow(i).robot_id())
        .set_x((int)packet.detection().robots_yellow(i).x());
    yellow.get_robo((int)packet.detection().robots_yellow(i).robot_id())
        .set_y((int)packet.detection().robots_yellow(i).y());
    yellow.get_robo((int)packet.detection().robots_yellow(i).robot_id())
        .set_a((int)packet.detection().robots_yellow(i).orientation());
  }
  field.set_length(packet.geometry().field().field_length());
  field.set_width(packet.geometry().field().field_width());
  field.set_center_radius(packet.geometry().field().center_circle_radius());
  field.set_goal_width(packet.geometry().field().goal_width());
  field.set_penalty_radius(packet.geometry().field().defense_radius());
  field.set_penalty_line_length(packet.geometry().field().defense_stretch());
}

Team World::get_blue() { return blue; }

Team World::get_yellow() { return yellow; }

Ball World::get_ball() { return ball; }

Ball World::get_before_ball() { return before_ball; }
