#ifndef BALL_H
#define BALL_H

class Ball {

  int x;
  int y;

public:
  Ball();
  int get_x() const;
  int get_y() const;
  void set_x(int value);
  void set_y(int value);
};

#endif
