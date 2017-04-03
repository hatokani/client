#ifndef ROBOT_H
#define ROBOT_H

class Robot {

  int r;
  int x;
  int y;
  int a;
  int nx;
  int ny;
  int na;

public:
  Robot();
  int get_r() const;
  int get_x() const;
  int get_y() const;
  int get_a() const;
  int get_nx() const;
  int get_ny() const;
  int get_na() const;
  void set_r(int value);
  void set_x(int value);
  void set_y(int value);
  void set_a(int value);
  void set_nx(int value);
  void set_ny(int value);
  void set_na(int value);
};

#endif
