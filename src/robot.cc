#include "robot.h"

Robot::Robot() : r(0), x(0), y(0), a(0), nx(0), ny(0), na(0) {}

int Robot::get_r() const { return r; }
int Robot::get_x() const { return x; }
int Robot::get_y() const { return y; }
int Robot::get_a() const { return a; }
int Robot::get_nx() const { return nx; }
int Robot::get_ny() const { return ny; }
int Robot::get_na() const { return na; }
void Robot::set_r(int value) { r = value; }
void Robot::set_x(int value) { x = value; }
void Robot::set_y(int value) { y = value; }
void Robot::set_a(int value) { a = value; }
void Robot::set_nx(int value) { nx = value; }
void Robot::set_ny(int value) { ny = value; }
void Robot::set_na(int value) { na = value; }
