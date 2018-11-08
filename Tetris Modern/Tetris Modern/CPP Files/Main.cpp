#include <iostream>
#include "Grid.h"
#include "Block.h"
#include "IBlock.h"
#include "OBlock.h"
namespace Solution {

	constexpr static int width = 10;
	constexpr static int height = 15;
}


int main() {
	Grid g(Solution::height, Solution::width);
	//g.print();

	OBlock i(1, g);
	g.print();
	i.drop();
	OBlock o(2, g);

	o.drop();
	IBlock t(3, g);
	t.drop();
	g.print();
	std::cin.get();

}