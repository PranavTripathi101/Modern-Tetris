#pragma once
#include "Coord.h"
#include "BlockCoord.h"
#include <vector>

class Grid {
public:

	Grid(int height, int width);

	void update(const std::vector<Coord> &coords, const char value, const int blockNum); // Updates the grid when block is moved
	bool check(const std::vector<Coord> &i, const unsigned int blockNum) const;
	bool checkforRow(); // Checks if we have filled a row

	int getLowestOpenSlot(int row, int column, int number);
	void print() const; // Prints grid after every command

private:
	std::vector<std::vector<BlockCoord> > view; // (0,0) is top left, (9,14) is bottom right
	int score;
	int height, width;
};