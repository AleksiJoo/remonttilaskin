#include "Building.h"
#include <iostream>

void clear_ios() {
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {

	Building house;
	Building* ptr = &house;
	char selection = 0;

	while (selection != '6') {

		unsigned int room_amount;
		std::cout << "Tervetuloa. Anna huoneiden lukumaara (1-4): ";
		std::cin >> room_amount;
		clear_ios();
		ptr->add_rooms(room_amount);

		std::cout << "Luotiin uusi rakennus, jossa huoneita " << room_amount
			<< " kpl." << std::endl;
		
		for (size_t i = 0; i < room_amount; i++) {

			std::string name;
			std::cout << "Anna huoneen " << i + 1 << " nimi: ";
			std::getline(std::cin, name);
			ptr->set_room_name(name, i);

		}
	}

	ptr->add_rooms(1);

	return EXIT_SUCCESS;
}