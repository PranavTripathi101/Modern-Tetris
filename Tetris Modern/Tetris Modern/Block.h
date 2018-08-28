#pragma once
#include <vector>
#include "Coord.h"
#include "Grid.h"

class Block {
public:

	enum class Movement {
		Down,
		Left,
		Right
	};
	void move(Movement m);
	void drop(); // Drops the block to bottom
	virtual void rotate(); // Rotates the block clockwise
	virtual ~Block();

protected:
	Block(unsigned int value, Grid &g);
	unsigned int number; // Which block is it
	Grid &g;
	std::vector<Coord> coords; // The x,y pairs that the block occupies
	char letter;

};