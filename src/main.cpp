#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Minion.h"
#include "Brute.h"
#include "General.h"
#include "Warlord.h"
#include "Room.h"

RoomType next_room(std::string type)
{
    if (type == "training")
    {
        return RoomType::beginner;
    }
    else if (type == "beginner")
    {
        return RoomType::intermediate;
    }
    else if (type == "intermediate")
    {
        return RoomType::advanced;
    }
    else
    {
        return RoomType::training;
    }
}

int main()
{
    Player player("Gong");
    Minion minion("Goblin");
    Room room(RoomType::intermediate);

    std::cout << "Welcome to Adventure in A-Star!" << std::endl;
    std::cout << "You are a player named " << player.get_name() << std::endl;
    std::cout << "You have a " << player.get_armor() << " armor and " << player.get_weapon() << " weapon" << std::endl;
    std::cout << "You are in a " << room.get_type() << " room" << std::endl;

    while (room.get_curr_move_num() < 15)
    {
        std::string action = room.player_action();
        std::cout << room.move_result() << std::endl;
        room.increment_curr_move_num();
        if (room.get_curr_move_num() == 15 && room.get_type() != "advanced")
        {
            room = Room(next_room(room.get_type()));
        }
        else
        {
            std::cout << "You have reached the end of the game!" << std::endl;
            break;
        }
    }
}
