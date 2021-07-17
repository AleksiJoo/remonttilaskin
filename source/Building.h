#ifndef BUILDING
#define BUILDING

#include <vector>
#include <string>

struct surface {
	std::string material;
	double price_m2;
	double length;
	double width;
	double heigth;
};

struct room {
	std::string name;
	std::vector<surface> walls;
	std::vector<surface> doors;
	std::vector<surface> windows;
	surface floor;
	surface roof;

};

class Building {
public:
	Building();
	~Building();

	void add_rooms(size_t n);
	void set_room_name(std::string& str, size_t room_number);

private:
	std::vector<room> room_;
};

#endif
