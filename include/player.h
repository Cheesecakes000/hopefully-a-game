#ifndef PLAYER
#define PLAYER 
#include <string>
#include "world.h"
using std::string;

const int INITIAL_INVENTORY_SIZE = 5;

struct Player{
    string name;
    Room *current_room;
    Item equipped;
    Item inventory[INITIAL_INVENTORY_SIZE];
};

#endif