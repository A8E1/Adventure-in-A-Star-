#include "Room.h"

Room::Room(RoomType type_val)
    : type(type_val) {}

std::string Room::get_setting() const
{
    return room_setting;
}

std::string Room::get_type() const
{
    return room_type_to_string(type);
}

int Room::get_curr_move_num() const
{
    return curr_move_num;
}

int Room::get_loot_prob_for_next_move() const
{
    return loot_prob_for_next_move;
}

int Room::get_fight_prob_for_next_move() const
{
    return fight_prob_for_next_move;
}

void Room::set_setting(std::string setting_val)
{
    room_setting = setting_val;
}

void Room::set_type(RoomType type_val)
{
    type = type_val;
}

int Room::win_prob()
{
    return 0;
}

std::string Room::generate_enemy()
{
    return "enemy";
}

std::string Room::generate_loot()
{
    return "loot";
}

std::string Room::attack_chain()
{
    return "attack chain";
}
