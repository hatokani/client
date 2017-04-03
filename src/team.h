#ifndef TEAM_H
#define TEAM_H

#include "robot.h"
#include <string>

class Team {

  std::string color;
  int goalx;
  int goaly;
  int forward;
  int back;
  int right;
  int left;
  Robot robo[6];

public:
  Team(std::string color_, int goaly_);
  std::string get_color() const;
  int get_goalx() const;
  int get_goaly() const;
  int get_forward() const;
  int get_back() const;
  int get_right() const;
  int get_left() const;
  Robot get_robo(int i) const;
  void set_color(std::string value);
  void set_goalx(int value);
  void set_goaly(int value);
};

#endif
