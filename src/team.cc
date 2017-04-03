#include "team.h"

Team::Team(std::string color_, int goaly_) : color(color_), goaly(goaly_) {
  if (goaly_ < 0) {
    forward = 4500;
    back = -4500;
    right = 3000;
    left = -3000;
  } else {
    forward = -4500;
    back = 4500;
    right = -3000;
    left = 3000;
  }
}

std::string Team::get_color() const { return color; }
int Team::get_goalx() const { return goalx; }
int Team::get_goaly() const { return goaly; }
int Team::get_forward() const { return forward; }
int Team::get_back() const { return back; }
int Team::get_right() const { return right; }
int Team::get_left() const { return left; }
Robot Team::get_robo(int i) const { return robo[i]; }
void Team::set_color(std::string value) { color = value; }
void Team::set_goalx(int value) { goalx = value; }
void Team::set_goaly(int value) { goaly = value; }
