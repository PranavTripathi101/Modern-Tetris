#include "Grid.h"
#include <vector>
#include <iostream>

Grid::Grid(int height, int width) : height{ height }, width{ width } {
	view = std::vector<std::vector<BlockCoord>>(height, std::vector<BlockCoord>(width, { ' ', 0 }));
	score = 0;
}

bool Grid::check(const Coord &i, const unsigned int blockNum) const {
	if (i.x < 0 || i.y < 0) { return false; }
	if (i.x >= height || i.y >= width) { return false; }
	if (view[i.x][i.y].val != ' ' && view[i.x][i.y].blockNum != blockNum) { return false; }
	return true;
}

void Grid::update(const std::vector<Coord> &coords, const char value, const int blockNum) {
	for (const Coord &i : coords) {
		view[i.x][i.y].val = value; view[i.x][i.y].blockNum = blockNum;
	}
}

void Grid::print() const {
	std::cout << "-------------------\n";
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			std::cout << view[i][j].val;
		}
		std::cout << std::endl;
	}
	std::cout << "-------------------\n";
	std::cout << "Score: " << score << std::endl;
	std::cout << "-------------------\n";
}