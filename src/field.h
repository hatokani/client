#ifndef FIELD_H
#define FIELD_H

class Field {

  int length;
  int width;
  int center_radius;
  int goal_width;
  int penalty_radius;
  int penalty_line_length;

public:
  Field();
  int get_length() const;
  int get_width() const;
  int get_center_radius() const;
  int get_goal_width() const;
  int get_penalty_radius() const;
  int get_penalty_line_length() const;
  void set_length(int value);
  void set_width(int value);
  void set_center_radius(int value);
  void set_goal_width(int value);
  void set_penalty_radius(int value);
  void set_penalty_line_length(int value);
};

#endif
