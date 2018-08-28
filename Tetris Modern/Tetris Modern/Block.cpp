#include "Block.h"
#include <algorithm>
#include <iostream>
Block::Block(unsigned int value, Grid &g) : number{ value }, g{ g } {}

Block::~Block() {}

void Block::move(Movement m) {
	std::vector<Coord> temp;

	// Current issue is that coords is empty. Something wrong with my OO design. Will need to fix.

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
	for (auto i : temp) {
		std::cout << "X is " << i.x << " Y is " << "i.y" << std::endl;
	}
	if (!g.check(temp, number)) { std::cout << "Failed" << std::endl; return; }
	g.update(temp, letter, number);
	coords = std::move(temp);
	
}

void Block::drop() {

}

void Block::rotate() {}