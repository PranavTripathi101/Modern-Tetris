#include "Block.h"
#include <algorithm>
Block::Block(unsigned int value, Grid &g) : number{ value }, g{ g } {}

Block::~Block() {}

void Block::move(Movement m) {
	std::vector<Coord> temp;
	for (auto i : coords) {
		if (m == Movement::Down) {
			temp.push_back({ i.x, i.y + 1 });
		}
		else if (m == Movement::Left) {
			temp.push_back({ i.x - 1, i.y });
		}
		else if (m == Movement::Right) {
			temp.push_back({ i.x + 1, i.y});
		}
	}
	if (!g.check(temp, number)) { return; }
	g.update(temp, letter, number);
	coords = std::move(temp);
	
}

void Block::rotate() {}