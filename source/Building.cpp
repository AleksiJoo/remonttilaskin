#include "Building.h"

Building::Building() {};
Building::~Building() {}

//kieno
void Building::add_room(std::string name, int n) {
	room room;
	room.name = name;
	rooms_.push_back(room);
};