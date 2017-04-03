#ifndef TEAM_INFO_H
#define TEAM_INFO_H

#include <string>

class Team_info {

  std::string color;
  unsigned score;
  unsigned goalie;
  unsigned red_cards;
  unsigned yellow_cards;
  unsigned yellow_card_times;
  unsigned timeouts;
  unsigned timeout_times;

public:
  Team_info(std::string cloro_);
  std::string get_color() const;
  unsigned get_score() const;
  unsigned get_goalie() const;
  unsigned get_red_cards() const;
  unsigned get_yellow_cards() const;
  unsigned get_yellow_card_times() const;
  unsigned get_timeouts() const;
  unsigned get_timeout_times() const;
  void set_score(unsigned value);
  void set_goalie(unsigned value);
  void set_red_cards(unsigned value);
  void set_yellow_cards(unsigned value);
  void set_yellow_card_times(unsigned value);
  void set_timeouts(unsigned value);
  void set_timeout_times(unsigned value);
};

#endif
