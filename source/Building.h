#ifndef BUILDING
#define BUILDING

#include <vector>
#include <string>

struct room {
	std::string name;
	std::vector<surface> walls;
	std::vector<surface> doors;
	std::vector<surface> windows;
	surface floor;
	surface roof;

};

struct surface {
	std::string material;
	double price_m2;
	double length;
	double width;
	double heigth;
};

class Building {
public:
	Building();
	~Building();

	void add_room(std::string name, int n);

private:
	std::vector<room> rooms_;
};

#endif
