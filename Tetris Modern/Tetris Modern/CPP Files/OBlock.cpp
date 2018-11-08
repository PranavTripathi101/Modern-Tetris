#include "../Header Files/OBlock.h"

OBlock::OBlock(unsigned int value, Grid &g) : 
	Block(value, g, 'O', { {0,0}, {0,1}, {1,0}, {1,1} }) {

	if (g.check(coords, number)) { g.update(coords, letter, number); }
}