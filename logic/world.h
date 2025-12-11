#ifndef WORLD
#define WORLD
#include <string>
using std::string;

// The 'nodes' of the Linked list = Rooms
struct Room{
    string name;
    string description;
    Room *next;
    Room *previous;
};

// The Linked List:
// Points to the start and end of the rooms;
// Maybe will update this once i learn more
struct Map{
    Room *entrance;
    Room *end;
};

struct Item{
    string name;
    double damage;
};



#endif