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

std::string room_type_to_string(RoomType type)
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
    Room(std::string name_val, RoomType type_val);

    std::string get_name() const;
    std::string get_description() const;
    std::string get_type() const;

    void set_description(std::string description_val);
    void set_type(RoomType type_val);
    void set_name(std::string name_val);

private:
    std::string name;
    std::string description;
    RoomType type;
    std::vector<std::string> movement_options;
};
