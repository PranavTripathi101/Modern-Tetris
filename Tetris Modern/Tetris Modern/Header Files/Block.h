#pragma once
#include <vector>
#include "Coord.h"
#include "Grid.h"

class Block {
public:

	int down();
	int left();
	int maxDrop(Coord current);
	int right();
	void drop(); // Drops the block to bottom
	virtual void rotate(); // Rotates the block clockwise
	virtual ~Block();

protected:
	Block(unsigned int value, Grid &g, char letter, const std::vector<Coord> &coords);
	unsigned int number; // Which block is it
	Grid &g;
	std::vector<Coord> coords; // The x,y pairs that the block occupies
	char letter;

private:
	int down(int val);

};