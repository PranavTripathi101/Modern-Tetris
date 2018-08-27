#include <iostream>
#include "Grid.h"

namespace Solution {

	constexpr static int width = 15;
	constexpr static int height = 10;
}


int main() {
	Grid g(Solution::width, Solution::height);
	g.print();

	std::cin.get();

}