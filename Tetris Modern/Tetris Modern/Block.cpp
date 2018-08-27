#include "Block.h"
#include <algorithm>
Block::Block(unsigned int value, const Grid &g) : number{ value }, g{ g } {}

Block::~Block() {}

void Block::move(Movement m) {
	for (auto &&i : coords) {

	}
	
}

void Block::rotate() {}