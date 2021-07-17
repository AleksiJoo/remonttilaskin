#include "Building.h"

Building::Building() {};
Building::~Building() {}

void Building::add_rooms(size_t n) {
	room room_object;

	for (size_t i = 0; i < n; i++) {
		room_.push_back(room_object);
	}
}
void Building::set_room_name(std::string& str, size_t room_number){
	room_.at(room_number).name = str;
}
;