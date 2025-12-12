#include "splashkit.h"
#include <stdlib.h>
#include "world.h"

Room new_room(string name, string description, Room *previousRoom, Room *nextRoom){
    /*
    The room will be inserted between the previous and next room you pass in
    */
    Room room;
    room.name = name;
    room.description = description;
    room.previous = previousRoom;
    room.next = nextRoom;

    return room;
}

