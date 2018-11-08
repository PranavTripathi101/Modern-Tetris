#include "../Header Files/Block.h"
#include <algorithm>
#include <iostream>
Block::Block(unsigned int value, Grid &g, char letter, const std::vector<Coord> &coords) : number{ value }, g{ g }, letter{ letter }, coords{ coords } {}

Block::~Block() {}


void Block::down() {
	std::vector<Coord> temp;
	for (auto i : coords) {
		temp.push_back({ i.x, i.y + 1 });
	}
	if (!g.check(temp, number)) { return; }
	g.update(coords, ' ', 0);
	g.update(temp, letter, number);

	coords = std::move(temp);
}

void Block::down(int val) {
	std::vector<Coord> temp;
	for (auto i : coords) {
		temp.push_back({ i.x, i.y + val });
	}
	if (!g.check(temp, number)) { return; }
	g.update(coords, ' ', 0);
	g.update(temp, letter, number);

	coords = std::move(temp);
}

void Block::right() {
	std::vector<Coord> temp;
	for (auto i : coords) {
		temp.push_back({ i.x + 1, i.y });
	}
	if (!g.check(temp, number)) { return; }
	g.update(coords, ' ', 0);
	g.update(temp, letter, number);

	coords = std::move(temp);
}

void Block::left() {
	std::vector<Coord> temp;
	for (auto i : coords) {
		temp.push_back({ i.x - 1, i.y });
	}
	if (!g.check(temp, number)) { return; }
	g.update(coords, ' ', 0);
	g.update(temp, letter, number);

	coords = std::move(temp);
}

int Block::maxDrop(Coord current) {
	return g.getLowestOpenSlot(current.y, current.x, number);
}

void Block::drop() {
	int maxDown = INT_MAX;
	for (auto i : coords) {
		 maxDown = std::min(maxDown, maxDrop(i));
	}
	down(maxDown);
}



void Block::rotate() {}