#include <iostream>
#include "Grid.h"
#include "Block.h"
#include "IBlock.h"

namespace Solution {

	constexpr static int width = 10;
	constexpr static int height = 15;
}


int main() {
	Grid g(Solution::height, Solution::width);
	//g.print();

	IBlock i(1, g);
	g.print();
	i.move(Block::Movement::Down);
	i.move(Block::Movement::Down);
	i.move(Block::Movement::Down);
	i.move(Block::Movement::Down);
	i.move(Block::Movement::Down);
	i.move(Block::Movement::Down);
	g.print();
	std::cin.get();

}