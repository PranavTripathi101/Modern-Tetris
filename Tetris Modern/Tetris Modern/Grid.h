#pragma once
#include "Coord.h"
#include "BlockCoord.h"
#include <vector>

class Grid {
public:

	Grid(int height, int width); // Constructor
	//~Grid();

	void update(const std::vector<Coord> &coords, const char value, const int blockNum); // Updates the grid when block is moved
	bool check(const Coord &i, const unsigned int blockNum) const;
	bool checkforRow(); // Checks if we have filled a row

	void print() const; // Prints grid after every command

private:
	std::vector<std::vector<BlockCoord> > view;
	int score;
	int height, width;
};