#include "team_info.h"

Team_info::Team_info(std::string color_)
    : color(color_), score(0), goalie(0), red_cards(0), yellow_cards(0),
      yellow_card_times(0), timeouts(0), timeout_times(0) {}

std::string Team_info::get_color() const { return color; }
unsigned Team_info::get_score() const { return score; }
unsigned Team_info::get_goalie() const { return goalie; }
unsigned Team_info::get_yellow_cards() const { return yellow_cards; }
unsigned Team_info::get_yellow_card_times() const { return yellow_card_times; }
unsigned Team_info::get_red_cards() const { return red_cards; }
unsigned Team_info::get_timeouts() const { return timeouts; }
unsigned Team_info::get_timeout_times() const { return timeout_times; }
void Team_info::set_score(unsigned value) { score = value; }
void Team_info::set_goalie(unsigned value) { goalie = value; }
void Team_info::set_red_cards(unsigned value) { red_cards = value; }
void Team_info::set_yellow_cards(unsigned value) { yellow_cards = value; }
void Team_info::set_yellow_card_times(unsigned value) {
  yellow_card_times = value;
}
void Team_info::set_timeouts(unsigned value) { timeouts = value; }
void Team_info::set_timeout_times(unsigned value) { timeout_times = value; }
