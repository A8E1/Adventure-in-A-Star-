#pragma once
#include <string>
#include <vector>
#include "Player.h"
#include "Goblin.h"
enum class RoomType
{
    training,
    beginner,
    intermediate,
    advanced
};

inline std::string room_type_to_string(RoomType type)
{
    switch (type)
    {
    case RoomType::training:
        return "training";
    case RoomType::beginner:
        return "beginner";
    case RoomType::intermediate:
        return "intermediate";
    case RoomType::advanced:
        return "advanced";
    default:
        return "advanced";
    }
}

class Room
{
public:
    Room(RoomType type_val = RoomType::training);

    std::string get_setting() const;
    std::string get_type() const;
    int get_curr_move_num() const;
    int get_loot_prob_for_next_move() const;
    int get_fight_prob_for_next_move() const;

    void set_setting(std::string setting_val);
    void set_type(RoomType type_val);
    void increment_curr_move_num();

    std::string generate_enemy();
    std::string generate_loot();
    std::string attack_chain();
    int win_or_lose(const Player &player, const Goblin &goblin);

    std::string player_action();
    std::string move_result();

private:
    std::string room_llm_context;
    std::string room_setting;
    int curr_move_num;

    int loot_prob_for_next_move;
    int fight_prob_for_next_move;

    RoomType type;
};
