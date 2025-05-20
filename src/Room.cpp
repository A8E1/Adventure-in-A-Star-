#include "Room.h"
#include "Player.h"
#include "Goblin.h"
#include "Minion.h"
#include "Brute.h"
#include "General.h"
#include "Warlord.h"
#include <random>

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

int Room::win_or_lose(const Player &player, const Goblin &goblin)
{
    if (player.get_strength() > goblin.get_strength())
    {
        return 1;
    }
    else if (player.get_strength() == goblin.get_strength())
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dist(0, 1);
        return dist(gen);
    }
    else
    {
        return 0;
    }
}

std::string Room::generate_enemy()
{
    if (type == RoomType::training)
    {
        return "Minion";
    }
    else if (type == RoomType::beginner)
    {
        return "Brute";
    }
    else if (type == RoomType::intermediate)
    {
        return "General";
    }
    else
    {
        return "Warlord";
    }
}

std::string Room::generate_loot()
{
    return "loot";
}

std::string Room::attack_chain()
{
    return "attack chain";
}
