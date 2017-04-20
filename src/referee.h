#ifndef REFEREE_H
#define REFEREE_H

#include "../proto/messages_robocup_ssl_refbox_log.pb.h"
#include "../proto/referee.pb.h"
#include "gpb_rec.h"
#include "team_info.h"

class Referee {

public:
  enum class stage_name {
    normal_first_half_pre,
    normal_first_half,
    normal_half_time,
    normal_second_half_pre,
    normal_second_half,
    extra_time_break,
    extra_first_half_pre,
    extra_first_half,
    extra_half_time,
    extra_second_half_pre,
    extra_second_half,
    penalty_shootout_break,
    penalty_shootout,
    post_game
  };

  enum class game_command {
    half,
    stop,
    normal_start,
    force_start,
    prepare_kickoff_yellow,
    prepare_kickoff_blue,
    prepare_penalty_yellow,
    prepare_penalty_blue,
    direct_free_yellow,
    direct_free_blue,
    indirect_free_yellow,
    indirect_free_blue,
    timeout_yellow,
    timeout_blue,
    goal_yellow,
    goal_blue,
    ball_placement_yellow,
    ball_placement_blue
  };

  Referee();
  void update();
  int get_packet_timestamp() const;
  int get_stage_time_left() const;
  stage_name get_stage() const;
  game_command get_command() const;
  Team_info get_yellow() const;
  Team_info get_blue() const;
  void set_packet_timestamp(int value);
  void set_stage_time_left(int value);
  void set_stage(stage_name value);
  void set_command(game_command value);

private:
  Gpb_Rec gpb{};
  SSL_Referee referee{};
  int packet_timestamp;
  int stage_time_left;
  stage_name stage;
  game_command command;
  Team_info blue{"blue"};
  Team_info yellow{"yellow"};
};

#endif
