#include "referee.h"

Referee::Referee() {}

void Referee::update() {
  referee = gpb.get_referee();
  packet_timestamp = referee.command_timestamp();
  stage_time_left = referee.stage_time_left();
  blue.set_goalie(referee.blue().goalie());
  blue.set_score(referee.blue().score());
  blue.set_yellow_cards(referee.blue().yellow_cards());
  blue.set_yellow_card_times(referee.blue().yellow_card_times(0));
  blue.set_red_cards(referee.blue().red_cards());
  blue.set_timeouts(referee.blue().timeouts());
  blue.set_timeout_times(referee.blue().timeout_time());
  yellow.set_goalie(referee.yellow().goalie());
  yellow.set_score(referee.yellow().score());
  yellow.set_yellow_cards(referee.yellow().yellow_cards());
  yellow.set_yellow_card_times(referee.yellow().yellow_card_times(0));
  yellow.set_red_cards(referee.yellow().red_cards());
  yellow.set_timeouts(referee.yellow().timeouts());
  yellow.set_timeout_times(referee.yellow().timeout_time());
  stage = (Referee::stage_name)referee.stage();
  command = (Referee::game_command)referee.command();
}

int Referee::get_packet_timestamp() const { return packet_timestamp; }

int Referee::get_stage_time_left() const { return stage_time_left; }

Referee::stage_name Referee::get_stage() const { return stage; }

Referee::game_command Referee::get_command() const { return command; }

Team_info Referee::get_yellow() const { return yellow; }

Team_info Referee::get_blue() const { return blue; }

void Referee::set_packet_timestamp(int value) { packet_timestamp = value; }

void Referee::set_stage_time_left(int value) { stage_time_left = value; }

void Referee::set_stage(Referee::stage_name value) { stage = value; }

void Referee::set_command(Referee::game_command value) { command = value; }
