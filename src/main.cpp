#include <iostream>
#include "Player.h"
#include "Goblin.h"
#include "Minion.h"
#include "Brute.h"
#include "General.h"
#include "Warlord.h"
#include "Room.h"

int main()
{
    Player player("Gong");
    Minion minion("Goblin");
    Room room(RoomType::training);

    std::cout << "Welcome to Adventure in A-Star!" << std::endl;
    std::cout << "You are a player named " << player.get_name() << std::endl;
    std::cout << "You have a " << player.get_armor() << " armor and " << player.get_weapon() << " weapon" << std::endl;
    std::cout << "You are in a " << room.get_type() << " room" << std::endl;
}
