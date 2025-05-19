#pragma once
#include <string>
#include <vector>
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

    std::string generate_enemy();
    std::string generate_loot();
    std::string attack_chain();
    int win_prob();

private:
    std::string room_llm_context;
    std::string room_setting;
    int curr_move_num;

    int loot_prob_for_next_move;
    int fight_prob_for_next_move;

    RoomType type;
};
