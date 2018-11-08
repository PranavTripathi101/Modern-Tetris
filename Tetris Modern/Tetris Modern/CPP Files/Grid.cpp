#include "../Header Files/Grid.h"
#include <vector>
#include <iostream>

Grid::Grid(int height, int width) : height{ height }, width{ width } {
	view = std::vector<std::vector<BlockCoord>>(height, std::vector<BlockCoord>(width, { ' ', 0 }));
	score = 0;
}

bool Grid::check(const std::vector<Coord> &coords, const unsigned int blockNum) const {
	for (const Coord &i : coords) {
		if (i.x < 0 || i.y < 0) { return false; }
		if (i.x >= width || i.y >= height) { return false; }
		if (view[i.y][i.x].val != ' ' && view[i.y][i.x].blockNum != blockNum) { return false; }
	}
	return true;
}

void Grid::update(const std::vector<Coord> &coords, const char value, const int blockNum) {
	for (const Coord &i : coords) {
		view[i.y][i.x].val = value; view[i.y][i.x].blockNum = blockNum;
	}
}

int Grid::getLowestOpenSlot(int row, int column, int number){
	int lowestRow = row + 1;
	for (lowestRow; lowestRow < height; lowestRow++) {
		if (view[lowestRow][column].blockNum == number) { continue; }
		if (view[lowestRow][column].val != ' ') { break; }
	}
	return lowestRow - row;
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