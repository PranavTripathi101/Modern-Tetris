#pragma once
#include "Block.h"
#include "Grid.h"

class IBlock : public Block {
public:
	IBlock(unsigned int value, Grid &g);

};