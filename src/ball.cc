#include "ball.h"

Ball::Ball() : x(0), y(0) {}

int Ball::get_x() const { return x; }
int Ball::get_y() const { return y; }
void Ball::set_x(int value) { x = value; }
void Ball::set_y(int value) { y = value; }
