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
	Block(unsigned int value, const Grid &g);

private:
	std::vector<Coord> coords; // The x,y pairs that the block occupies
	unsigned int number; // Which block is it
	const Grid &g;
};