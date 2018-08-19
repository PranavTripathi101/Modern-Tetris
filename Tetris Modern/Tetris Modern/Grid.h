#pragma once
#include "Coord.h"
#include "BlockCoord.h"
#include <vector>

class Grid {
public:
	Grid(int height, int width);
	~Grid();

	bool update(const std::vector<Coord> &coords, const char value, const int blockNum);

	bool checkforRow();

	void print() const;

private:
	std::vector<std::vector<BlockCoord> > view;
	int score;
	int height, width;
};