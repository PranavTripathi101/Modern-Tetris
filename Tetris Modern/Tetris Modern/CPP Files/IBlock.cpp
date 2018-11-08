#include "IBlock.h"
#include <iostream>
IBlock::IBlock(unsigned int value, Grid &g) :
	Block(value, g, 'I', {{0, 0}, { 0,1 }, { 0,2 }, { 0,3 }})
																						  
{
	if (g.check(coords, number)) { g.update(coords, letter, number); }


}

