#include "field.h"

Field::Field()
    : length(0), width(0), center_radius(0), goal_width(0), penalty_radius(0),
      penalty_line_length(0) {}

int Field::get_length() const { return length; }
int Field::get_width() const { return width; }
int Field::get_goal_width() const { return goal_width; }
int Field::get_penalty_radius() const { return penalty_radius; }
int Field::get_center_radius() const { return center_radius; }
int Field::get_penalty_line_length() const { return penalty_line_length; }
void Field::set_length(int value) { length = value; }
void Field::set_width(int value) { width = value; }
void Field::set_center_radius(int value) { center_radius = value; }
void Field::set_goal_width(int value) { goal_width = value; }
void Field::set_penalty_radius(int value) { penalty_radius = value; }
void Field::set_penalty_line_length(int value) { penalty_line_length = value; }
