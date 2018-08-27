#include <iostream>
#include "Grid.h"

namespace Solution {

	constexpr static int width = 10;
	constexpr static int height = 15;
}


int main() {
	Grid g(Solution::height, Solution::width);
	g.print();

	std::cin.get();

}