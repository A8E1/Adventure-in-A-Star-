#include "Room.h"

Room::Room(std::string name_val, RoomType type_val)
    : name(name_val), type(type_val) {}

std::string Room::get_name() const
{
    return name;
}

std::string Room::get_description() const
{
    return description;
}

std::string Room::get_type() const
{
    return room_type_to_string(type);
}

void Room::set_description(std::string description_val)
{
    description = description_val;
}

void Room::set_type(RoomType type_val)
{
    type = type_val;
}

void Room::set_name(std::string name_val)
{
    name = name_val;
}
